#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int search)
{
	while(start<=end)
	{
		int mid = (start+(end-start)/2);
		
		if(search==arr[mid])
		{
			return mid;
		}
		else if(search < arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
	    }	
    }
    return -1;
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
