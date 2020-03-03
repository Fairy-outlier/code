#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int i,r,c,sum,flag=1;
	char a[8];
	for(i=0;i<8;i++)
	{
		cin>>a[i];
		if(a[i]!='*') 
		{
			a[i]=a[i]-'1';
			continue;
		}
		else r=i;
	}
	sum=28;
	for(i=0;i<8;i++)
		if(a[i]>=0&&a[i]<=7) sum=sum-a[i];
	c=sum;
	for(i=0;i<8;i++)
	{
		if(abs(r-i)==abs(c-a[i])) 
		{
			flag=0;
			break;
		}
	}
	if(flag) cout<<c+1;
	else cout<<"No Answer";
	return 0;
 } 
