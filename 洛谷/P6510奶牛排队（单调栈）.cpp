#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=100005;

int n,ans,k;
int arr[maxn],s1[maxn],s2[maxn],top1,top2;//arr�������� s1Ϊ�����ݼ�ջ��s2Ϊ��������ջ��top1 top2�ֱ�Ϊջ��Ԫ��ָ�� 
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	 cin>>arr[i];//�����ʼ�� 
	
	for(int i=1;i<=n;++i){
	while(top1&&arr[s1[top1]]>=arr[i]) top1--;
	while(top2&&arr[s2[top2]]<arr[i])  top2--;//�ֱ�ά������ջ 
	k=upper_bound(s1+1,s1+1+top1,s2[top2])-s1;//��s1�в���һ���Ⱥ�׺�ڶ���ֵ�� 
	if(k!=(top1+1)) ans=max(ans,i-s1[k]+1);//������������ 
	
	s1[++top1]=i;
	s2[++top2]=i;	 
    }
    cout<<ans;
    return 0;
}
