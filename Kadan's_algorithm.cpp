#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int max_so_far=arr[0];
	    int max_ending_here=0;
	    int start=0, end=0, s=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        max_ending_here+=arr[i];
	        if(max_so_far < max_ending_here)
	        {
	            max_so_far=max_ending_here;
	            start = s; end=i;
	        }
	        
	        if(max_ending_here < 0)
	        {
	            max_ending_here=0;
	            s=i+1;
	        }
	    }
	    
	    int sum=0;
	    for(int i=start; i<=end;i++)
	    {
	        sum+=arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}