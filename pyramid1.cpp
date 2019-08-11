#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	int r;
	cout<<"Enter no. of rows";
	cin>>r;
	for(i=0;i<r;i++)                       //outer loop for number of rows
   {
      if(i<=r/2)                       //if condition to print the top half of diamond
         {
            for(k=r/2;k>i;k--)          //nested loop for number of spaces
               {
                 cout<<" " ;        //printing spaces
               }
            for(j=0;j<=i*2;j++)         //nested loop for printing stars
               {
                  cout<<"*" ;         //printing stars
               }
         }
      else                              //else condition to print the bottom half of the diamond
         {
            for(k=r/2;k<i;k++)          //nested loop to print spaces
               {
                  cout<<" " ;           //printing spaces
               }
            for(j=0;j<((r-i)*2)-1;j++)  //loop to print star
               {
                  cout<<"*" ;        //printing stars
               }  
         }
      cout<<endl;                   //printing newline
   }
	
}
