#include<iostream>
#include<cstring>
using namespace std;

string s1,s2;

void preorder(int l1,int r1,int l2,int r2){//����Ϊ��������ͺ�����������Ҷ˵� 
	if(l1<=r1&&l2<=r2){
		char root=s2[r2];//����������Ҷ˵��Ǹ��ڵ� 
		int i=0;
		for(;i<=r1-l1;++i)
		 if(s1[l1+i]==root) break;//Ѱ�Ҹ��ڵ�
		cout<<root;//�������������� 
     preorder(l1,l1+i,l2,l2+i-1);
     preorder(l1+i+1,r1,l2+i,r2-1);
}
}
int main()
{
	cin>>s1>>s2;
	int len1=s1.size()-1;
	int len2=s2.size()-1;
	preorder(0,len1,0,len2);
	return 0;
}
