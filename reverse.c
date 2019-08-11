#include<stdlib.h>
#include<stdio.h>
int reverse(int num)
{
//	int num;
	int rev_num = 0;
	int i;
	while(num>0)
	{
		rev_num = rev_num * 10 + num%10;
		num = num/10;
	}
	return rev_num;
}
int main(int argc,char *argv[])
{
	int num;
	if(argc==1)
	{
		printf("no cla");
	}
	else
	{
		num = atoi(argv[1]);
		printf("Reversed number:%d",reverse(num));
	}
	return 0;
}
