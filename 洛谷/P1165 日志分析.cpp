#include<iostream>
const int maxn=2000005;
using namespace std;
int n,weight[maxn],top=0,m[maxn],top2=0; //����һ������ջ����¼��ǰ�����ֵ 
void findmax(){//�����ֵ
    if(top2==0||weight[top]>m[top2-1])
     m[top2]=weight[top],top2++;
    else
     m[top2]=m[top2-1],top2++;
}
int main()
{
   cin>>n;
   int order;//����Ĳ����� 
   for(int i=1;i<=n;++i){
   	cin>>order;
   	if(order==0)cin>>weight[top],findmax(),top++; //����Ĳ�������0  
    if(order==1&&top!=0) top--,top2--;//����Ĳ�������1
	if(order==2) 
	   if(top2==0) cout<<0<<endl;
	   else cout<<m[top2-1]<<endl;//����Ĳ�������2 �����ѯ���  		
   }	
	
}
