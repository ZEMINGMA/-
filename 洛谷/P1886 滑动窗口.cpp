#include<iostream>
using namespace std;
const int maxn=1000005;

int a[maxn];//����a
int index[maxn];//�������д洢a���±�
int n,k;//nΪ���и��� kΪ���ڳ��� 

void MIN(){
   	int head=1,tail=0;//�������е���βָ��
	for(int i=1;i<=n;++i){
		while(head<=tail&&index[head]+k<=i) head++;//��֤�������еĳ���С�ڴ��ڳ���
        while(head<=tail&&a[i]<a[index[tail]]) tail--;//����ӵ�ֵ��С �����
		index[++tail]=i;//���
		if(i>=k) cout<<a[index[head]]<<" ";	 
	} 
} 

void MAX(){
	int head=1,tail=0;//�������е���βָ��
	for(int i=1;i<=n;++i){
		while(head<=tail&&index[head]+k<=i) head++;//��֤�������еĳ���С�ڴ��ڳ���
        while(head<=tail&&a[i]>a[index[tail]]) tail--;//����ӵ�ֵ���� �����
		index[++tail]=i;//���
		if(i>=k) cout<<a[index[head]]<<" ";	 
	} 
	
}

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;++i) cin>>a[i];
	MIN();
	cout<<endl;
	MAX();
	return 0;
}
