#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int row,col;
	char input,alphabet = 'A';
	cout<<"Enter no. of rows ";
	cin>>row;
	//cout<<"enter input letter ";
	//cin>>input;
	
	for(i=1;i<=row;++i)
	{
		for(j=1;j<=i;++j)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	/*
	for(i=1;i<=(input-'A'+1);++i)
	{
		for(j=1;j<=i;++j)
		{
			cout<<alphabet<<" ";
		}
		++alphabet;
		cout<<endl;
	}*/
	return 0;
}
