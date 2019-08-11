#include<iostrem>
using namespace std;
void mergeSort(int arr[100],int start,int q, int end)
{
	int L[100];
	int M[100];
	int A[100];
	int i,j,k;
	int n1 = start - q + 1;
	int n2 = end -q;
	for(i=0;i<n1;i++)
	{
		L[i] = arr[p+i];
	}
	for(j=0;j<n2;j++)
	{
		M[j] = arr[q+1+j];
	}
	
	i=0;
	j=0;
	k = start;
	
	while(i<n1 && j<n2)
	{
		if(L[i] <= M[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = M[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		A[k] = L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		A[k] = M[j];
		k++;
		j++;
	}
	
	
} 

int main()
{
	int arr[100];
	int i,j,n;
	cout<<"Enter number of elements in array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergeSort();
}
