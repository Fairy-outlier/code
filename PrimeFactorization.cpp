#include<iostream> 
#include<cmath> 
using namespace std;
int isPrime(long  num)
{
	long i;
	int flag=1;
	if(num==2) return 1;
	else
	{
		for(i=2;i<=sqrt(num);i++)
		{
			if(num%i==0) {flag=0;break;}
			else continue;
		}
		if(flag) return 1;
		else return 0;
	}
} 
void  factorization(long  n,long a[100],int &p)
{
	int i,j=0;
	for(i=2;i<=n;i++)
	{
		if(isPrime(i))
			while(n%i==0) {a[j]=i;j++;n=n/i;}
	}
	p=j;
}
int  main() 
{ 
    long n; 
    long factor[100]; 
    int numofFactor=0; 
    cin>>n; 
    factorization(n,factor,numofFactor); 
    for(int i=0;i<numofFactor;i++) 
    { 
        cout<<factor[i]<<" "; 
    } 
    cout<<endl; 
    return  0; 
}
