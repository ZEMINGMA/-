#include<iostream>
using namespace std;
const int maxn=105;

int n;//���������ĸ���
int u,v;//��������� 
int x,y;//��ʾy��x�ĺ��� 
int depth=0,width=0,dep[maxn],wid[maxn],father[maxn];//��ʾ��ȺͿ�Ⱥ����� 
int upstep=0,downstep=0;//���еĲ��� ���еĲ��� 

int main()
{
	cin>>n;
	for(int i=1;i<n;++i){
		cin>>x>>y;
		father[y]=x;//y�ĸ�����x
		dep[y]=dep[x]+1;//y�Ĳ�����x��1
		wid[dep[y]]++;//��ȼ�һ
		depth=max(depth,dep[y]);
		width=max(width,wid[dep[y]]); 
	}//����������
	
	cin>>u>>v;
	while(u!=v){
		if(dep[u]==dep[v])//���������ͬ
		 {
		 	u=father[u];
		 	v=father[v];
		 	upstep++;
		 	downstep++;
		 }
		 else if(dep[u]>dep[v]){
		 	u=father[u];
		 	upstep++;
		 }
		 else{
             v=father[v];
			 downstep++;		 	
		 }
	}
	 cout<<depth+1<<endl<<width<<endl<<upstep*2+downstep;
	 return 0;
	}
