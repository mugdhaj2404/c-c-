#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

char first(string str)
{
	int i;
	for(i=0;i<str.length();i++)
	{
		if(isupper(str[i]))
			return str[i];
	}
	return 0;
}
int main()
{
	string str1;
	cout<<"Enter string";
	cin>>str1;
	char res = first(str1);
	if(res==0)
		cout<<"No upper case";
	else
		cout<<res<<"\n";
	return 0;
}
