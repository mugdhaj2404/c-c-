#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int row,col;
	int space;
	char input,alphabet = 'A';
	cout<<"Enter no. of rows ";
	cin>>row;
	for(i=1,j=0;i<=row;++i,j=0)
	{
		for(space = 1;space<=row-i;++space)
		{
			cout<<"  ";
		}
		while(j!=2*i-1)
		{
			cout<< "  * ";
			++j;
		}
		cout<<endl;
	}
	return 0;
}
