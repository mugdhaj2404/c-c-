#include<iostream>
using namespace std;
/*
int main()
{
	int i,j,k;
	int row,col;
	cout<<"Enter row and col";
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"*"<<" ";	
		}
		cout<<endl;
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			if(j==0 || j==row-1 ||i==0 ||i==row-1)
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
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	for(i=0;i<row;i++)
	{
		for(k=row;k>i+1;k--)
		{
			cout<<" ";
		}
		for(j=0;j<=2*i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		

}*/
int main()
{
	int i,j,k;
	int row,col;
	cout<<"ENter row n col";
	cin>>row>>col;
	
	//RHOMBUS
	/*
	for(i=0;i<row;i++)
	{
		for(j=0;j<i;j++)
			cout<<" ";
		}
		for(j=0;j<row;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	//HOLLOW SQUARE
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==0||j==0||i==row-1 ||j==col-1)
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
	*/
	
	// PYRAMID
	/*
	for(i=0;i<row;i++)
	{
		for(k=row;k>=i+1;k--)
		{
			cout<<" ";
		}
		for(j=0;j<=2*i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
	/*
	for(i=row;i>0;i--)
	{
		for(k=row;k>i;k--)
		{
			cout<<" ";
		}
		for(j=0;j<2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(i=0;i<row;i++)
	{
		for(k=row;k>i+1;k--)
		{
			cout<<" ";
		}
		for(j=0;j<=i*2;j++)
		{
			if(i==row-1)
			{
				cout<<"*";
			}
			else
			{
				if(j==0 || j>=2*i)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}	
		}
		cout<<" ";
	}
	*/
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
