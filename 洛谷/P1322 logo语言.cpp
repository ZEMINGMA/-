#include<iostream>
#include<math.h>
using namespace std;

int digui(){
	int ans=0;
	char order[260];
	char ch,a;
	int num; 
	while(cin>>ch)
	{
		if(ch==']') break;
		scanf("%s %d",order,&num);//������������������ݹ� 
		
		if(ch=='R'){
			a=getchar();
			ans+=num*digui();
			a=getchar();
		}
		
		if(ch=='F')
		{
			a=getchar();
			ans+=num;
		}
		
		if(ch=='B')
		{
			a=getchar();
			ans-=num;
		}
		if(a==']') break;
	}
	return ans;
}

int main(){
	printf("%d",abs(digui()));
	return 0;
}
