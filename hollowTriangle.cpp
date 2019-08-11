#include<iostream>
using namespace std;

int main()
{
	int i,j,k=0;
	int row;
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=i;j<row;j++)
		{
			cout<<" ";
		}
		while(k!=(2*i-1))
		{
			if(k==0 || k==2*i-2)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}	
			k++;
		}
		k=0;
		cout<<endl;
	}
	for(i=0;i<2*row-1;i++)
	{
		cout<<"*";
	}
	
	
	
}	
