#include<iostream>
using namespace std;

int main()
{
	int i,j,k,row,count=2;
	cout<<"Enter no. of rows";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		if(i<=row/2)
		{
			for(j=1;j<=i;j++)
			{
				cout<<count;
			}
			count++;
			cout<<endl;
		}
		else
		{
			count--;
			for(j=0;j<row-i+1;j++)
			{
				cout<<count;
			}
			cout<<endl;
		}
	}
}
