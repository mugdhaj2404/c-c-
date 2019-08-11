
#include<iostream>
using namespace std;

int main()
{
   int oldNum, newNum, fibNum, maxNum,i;

   //Enter maximum number till you want to generate Fibonacci series
   cout << "Enter number: ";
   cin >> maxNum;

   oldNum = 0;
   newNum = 1;
   

   cout << "\nFibonacci Series: " << oldNum << " " << newNum;

   //while is true till fibNum is less than maxNum and fibNum is calculated
   for(i=3;i<=maxNum;i++)
   {
   	fibNum = oldNum + newNum;
      cout << " " << fibNum;
      oldNum = newNum;
      newNum = fibNum;
      fibNum = oldNum + newNum;
   }

   cout << "\n";
   return 0;
}

