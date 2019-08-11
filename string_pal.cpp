#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void isPalindrome()
{
    int i,j=0;
    int len ;
    char str[100];
    char rev[100];
    cout<<"Enter string";
    cin>>str;
    len = strlen(str);
    for(i=len-1;i>=0;i--)
    //while(
    {
        rev[j] = str[i];
        j++;
    }
    cout<<len;
    if(strcmp(rev,str)==0)
    {
        cout<<"pal";
    }
    else
    {
        cout<<"Not pal";
    }
    
}
int main() {
	//code
	isPalindrome();
	return 0;
}
