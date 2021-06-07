#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n,int i=2)
{
	if(n<=2)
	{
		if(n==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(n%i==0)
	{
		return false;
	}
	if(i*i>n)
	{
		return true;
	}
}
int main()
{
	int n,i;
	cout<<"enter a number and find prime or not :";
	cin>>n;
	cout<<isprime(n,i+1);
}
