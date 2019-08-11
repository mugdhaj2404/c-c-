#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int row;
	cout<<"Enter no. of rows";
	cin>>row;
	int k = 2*row-2;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<" ";
		}
		k = k-2;
		for(j=0;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
	int num = 1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<" ";
		}
		k = k-2;
		
		for(j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
}
