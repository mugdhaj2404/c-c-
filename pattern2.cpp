#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int row,col;
	char input,alphabet = 'A';
	cout<<"Enter no. of rows ";
	cin>>row;
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=i;++j)
		{
			cout<<j<<" " ;
		}
		cout<<endl;
	}	
	
}
