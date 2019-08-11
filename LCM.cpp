#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter 2 nos";
	cin>>a>>b;
	int L;
	for(L=1;L<=a*b;L++)
	{
		if(L%a==0 && L%b==0)
		{
			break;
		}
	}
	cout<<L;
}
