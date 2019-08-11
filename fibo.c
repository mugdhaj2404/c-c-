#include<stdio.h>
#include<stdlib.h>
void fibo(int num)
{
	int i;
	int a =  0,b = 1;
	int c;
	for(i=3;i<=num;i++)
	{
		c = a+b;
		a = b;
		b = c;
		printf("%d",c);
	}
	//return c;
	printf("\n");
}
int main()
{
	//printf("%d",fibo(9));
	fibo(9);
	return 0;
}
