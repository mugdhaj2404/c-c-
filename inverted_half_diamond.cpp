#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	int row;
	cout<<"Enter number of row";
	cin>>row;
	for(i=0;i<row;i++)
	{
		if(i<=row/2)
		{
			for(k=row/2;k>i;k--)
			{
				cout<<" ";
			}
			for(j=0;j<=i;j++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(k=row/2;k<i;k++)
			{
				cout<<" ";
			}
			for(j=i;j<row;j++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
