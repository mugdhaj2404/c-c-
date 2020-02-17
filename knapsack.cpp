#include<iostream>

using namespace std;

int max(int a,int b)
{
	return(a>b)?a:b;
}

int knapsack(int W,int weight[],int value[],int num)
{
	if(num==0 || W==0)
	{
		return 0;
	}
	if(weight[num-1]>W)
	{
		return knapsack(W,weight,value,num-1);
	}
	else
	{
		return max(value[num-1]+knapsack(W-weight[num-1],weight,value,num-1) , knapsack(W,weight,value,num-1));
	}
}
int main()
{
	int num;
	cout<<"Enter number of items";
	cin>>num;
	int value[num];
	int weight[num];
	int i;
	cout<<"Enter weights and their values";
	for(int i=0;i<num;i++)
	{
		cin>>weight[i];
		cin>>value[i];
	}
	int W;
	cout<<"Enter capacity of the knapsack";
	cin>>W;
	cout<<"Max value:";
	cout<<knapsack(W,weight,value,num);
	return 0;
}
