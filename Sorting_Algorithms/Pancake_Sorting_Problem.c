
#include <stdlib.h>
#include <stdio.h>


int ceilSearch(int arr[], int low, int high, int x)
{
	int mid;

	
	if(x <= arr[low])
		return low;

	
	if(x > arr[high])
		return -1;

	
	mid = (low + high)/2; 

	
	if(arr[mid] == x)
		return mid;
	if(arr[mid] < x)
	{
		if(mid + 1 <= high && x <= arr[mid+1])
			return mid + 1;
		else
			return ceilSearch(arr, mid+1, high, x);
	}
	if (mid - 1 >= low && x > arr[mid-1])
		return mid;
	else
		return ceilSearch(arr, low, mid - 1, x);
}


void flip(int arr[], int i)
{
	int temp, start = 0;
	while (start < i)
	{
		temp = arr[start];
		arr[start] = arr[i];
		arr[i] = temp;
		start++;
		i--;
	}
}


void insertionSort(int arr[], int size)
{
	int i, j;

	
	for(i = 1; i < size; i++)
	{
		
		int j = ceilSearch(arr, 0, i-1, arr[i]);

		
		if (j != -1)
		{
			
			flip(arr, j-1);
			flip(arr, i-1);
			flip(arr, i);
			flip(arr, j);
		}
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}


int main()
{
	int arr[] = {18, 40, 35, 12, 30, 35, 20, 6, 90, 80};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}
