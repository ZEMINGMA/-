#include<iostream>
using namespace std;
const int maxn=100005;
const int m=10000;
int ans[maxn];
int main(){
	char ch;
	cin>>ans[0],ans[0]%=m;
	int i=1,sum=0;
	while(cin>>ch>>ans[i++])
		if(ch=='*') ans[i-2]=ans[i-2]*ans[i-1]%m,--i;//�������˺� ֱ�����
	--i;//��whileѭ������ ������һ�� ����i++�� 
    while(i!=0)
       sum+=ans[--i];
    cout<<sum%m; 
}
 
