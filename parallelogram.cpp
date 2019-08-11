#include<iostream>
using namespace std;
 
int main()
{
	int i,j,row,col;
	cout<<"Enter row and col";
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(j=0;j<col;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(i=0;i<row;i++)
	{	
		for(j=row;j>i;j--)
		{
			cout<<" ";
		}
		for(j=0;j<row;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
