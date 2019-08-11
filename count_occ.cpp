#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	int num,array[100],count=0;
	cout<<"Enter number of elements";
	cin>>n;
	cout<<"Enter array";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n;i++)
	{
		while(array[i])
		{
			int num2 = array[i] % 10;
			if(num2 == 3)
			{
				count++;
			}
			array[i] = array[i] / 10;
		}
	}
	
	cout<<count;
	return 0;
}
