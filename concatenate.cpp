#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int i,j;
	char s1[100],s2[100];
	
	cout<<"Enter ste1";
	cin>>s1;
	cout<<"Enter str2";
	cin>>s2;
	
	for(i=0;s1[i]!='\0';++i);
	for(j=0;s2[j]!='\0';++j,++i)
	{
		s1[i] = s2[j];
		
	}
	s1[i] = '\0';
	cout<<s1;
	
}
