#include<iostream>
#include<string> 
using namespace std;
const int maxn=1005;

struct Team{
	int flag;//�жϵ�ǰ�������Ƿ���ڸ��Ŷ���Ա 
	int head=0,tail=0;//ÿ���Ŷӵ���βָ�� 
	int member[maxn]; //ÿ���Ŷӵ�ǰ�ڶ����е�˳�� 
}q[maxn];
int tq[maxn],hea=0,tai=0;//��ʾ�ŶӵĶ���
int ident[1000005];//��ʾ���Ϊĳ��ֵ���������Ŷӵı��
string order;

int main()
{
	int t,kase=0;
	while(cin>>t&&t!=0){
		cout<<"Scenario #"<<++kase<<endl;
		
		for(int i=1;i<=t;++i){
			int n,x;//n��ʾÿ���Ŷӵ�������x��ʾ���Ϊx����
			cin>>n;
			while(n--){
				cin>>x;
				ident[x]=i;//���Ϊx�������Ŷ�i 
			} 
		}
		for(;;){
		  int x;
		  cin>>order;
          if(order=="STOP") break;
          else if(order=="ENQUEUE"){
          	cin>>x;
          	if(q[ident[x]].flag==0) q[ident[x]].flag=1,tq[++tai]=ident[x];
          	q[ident[x]].member[++q[ident[x]].tail]=x;
		  }
		  else if(order=="DEQUEUE"){
		  	cout<<q[tq[hea+1]].member[++q[tq[hea+1]].head]<<endl;
		  	if(q[tq[hea+1]].head==q[tq[hea+1]].tail) q[tq[hea+1]].flag=0,hea++;
		  }
	  }
	  hea=tai=0;
	  for(int i=1;i<maxn;++i)
	  {
	  	q[i].flag=0;
	  	q[i].head=q[i].tail=0;
	  }
	  cout<<endl;
	} 
	return 0;
} 
