#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int search)
{
	while(start<=end)
	{
		int mid = (start+(end-start)/2);  // find the middle od array
		
		if(search==arr[mid])
		{
			return mid;  // when element is found return mid
		}
		else if(search < arr[mid]) // when search is less the mid  
		{
			start=mid+1;  // when sorted array is reverse then end is start from mid +1
		}
		else
		{
			end=mid-1; // when sorted array is reverse else start mid -1
	    }	
    }
    return -1;  // element is not found then return  -1
}


int main()
{
	int n;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int search;
	cout<<"Enter the search number :"<<endl;
	cin>>search;
	
	int start=0;
	int end=n-1;
	
	int result = binarySearch(arr, start, end, search);
	if(result==-1)
	{
		cout<<"Element is not found :"<<endl;
	}
	else
	{
		cout<<"Element is found at index number :"<<result<<endl;
	}
	
	
	return 0;
}
