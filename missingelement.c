#include <stdio.h>
int array[10000000],num;
int main() {
	//code
    int i;
    int t,sum,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        //scanf("%d",&array);
        sum = 0;
        s = 0;
        for(i=0;i<num-1;i++)
        {
           scanf("%d",&array[i]);
           sum = sum + array[i];
        }
        s = (num)*(num+1) / 2;
        printf("%d\n",(s-sum));
    }
    
    return 0;
}
