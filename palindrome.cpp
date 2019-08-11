#include<iostream>
using namespace std;

int main()
{
	int num;
	int i,j;
	int sum=0;
	int reverse=0,temp;
	int rem,temp2;
	cout<<"Enter number";
	cin>>num;
	temp = num;
	
	while(temp!=0)
	{
		rem = temp % 10 ;
		reverse = (reverse*10) + rem;
		temp = temp/10;
	}
	
	if(num == reverse)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<" Not a palindrome";
	}	
	
	temp2 = num;
	while(temp2!=0)
	{
		rem = temp2%10;
		sum = sum + (rem*rem*rem);
		temp2 = temp2/10;
	}
	if(num==sum)
	{
		cout<<"Amstrong";
	}
	else
	{
		cout<<"Not Amstrong";
	}
}
