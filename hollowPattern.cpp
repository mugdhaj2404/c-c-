#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int row,col;
	cout<<"Enter no. of rows";
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==0 || i==row-1 || j==0 || j==col-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
