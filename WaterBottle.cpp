#include<iostream>
using namespace std;
int convert(int m,int n)
{
	int x,y;
	if(m>=2||n>=3)
	{
		x=m/2+m%2+n/3;
		y=n/3+n%3+m/2;
		return m/2+n/3+convert(x,y);
	}
	return 0;
}
int main()
{
	int n,sum;
	cin>>n;
	sum=n+convert(n,n);
	cout<<sum;
	return 0;
 } 
