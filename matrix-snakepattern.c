#include <stdio.h>

int main() {
	//code
	int mat[100][100],i,j,n,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&mat[i][j]);
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            for(j=0;j<n;j++)
	            {
	                printf("%d \t",mat[i][j]);
	            }
	        }
	        else
	        {
	            for(j=n-1;j>=0;j--)
	            {
	                printf("%d \t",mat[i][j]);
	            }
	        }
	    }
	    
	}
	return 0;
}
