#include<iostream>
using namespace std;

int main()
{
	int i,j,c;
	int row;
	cout<<"Enter row";
	cin>>row;
	for(i=0;i<row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			{
				c=1;
			}
			else
			{
				c = c*(i-j+1)/j;
			}
			cout<<c<<" ";
		}
		cout<<endl;
	}
}
