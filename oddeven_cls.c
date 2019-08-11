#include<stdio.h>
#include<stdlib.h>
int oddeven(int x)
{
	if(x%2==0)
		return 1;
	else
		return 0;
}

int main(int argc,char *argv[])
{
	int res;
	if(argc == 1)
		printf("no cla found");
	else
	{
		int num = atoi(argv[1]);
		res = oddeven(num);
		if(res == 1)
			printf("even");
		else
			printf("odd");
		
	}
	retturn 0;
			
}
