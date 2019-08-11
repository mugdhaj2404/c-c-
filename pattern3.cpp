#include<iostream>
using namespace std;

int main()
{
	int row;
	int i,j;
	cout<<"Enter no. of rows";
	cin>>row;
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	for(i=row-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
