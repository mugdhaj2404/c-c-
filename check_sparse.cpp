#include<iostream>
using namespace std;

int checkSparse(int num)
{
	if(num & (num>>1))
		return false;
	return true;
}
int main()
{
	cout<<checkSparse(72);
	return 0;
}
