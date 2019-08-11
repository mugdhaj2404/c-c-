#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
	int len = strlen(str);
	printf("%d",len);
	/*if(*str)
	{
		reverse(str+1);
		printf("%c",*str);
	}*/
	int i,j;
	cout << (char)toupper(str[0]); 
	for(i=1;i<len-1;i++)
	{
		if(str[i] == ' ')
		{
			cout<<(char)toupper(str[i+1]);
		}
	}
}

int main()
{	
	char str[] = "Mugdha Ameya";
	reverse(str);
	return 0;
}
