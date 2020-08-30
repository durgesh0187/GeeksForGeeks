#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue <int, vector<int>, greater<int> > minh;
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        minh.push(arr[i]);
	        if(minh.size() > k)
	        {
	            minh.pop();
	        }
	    }
	    
	    while(minh.size() > 0)
	    {
	        cout<< minh.top() << " ";
	        minh.pop();
	    }
	    cout<<endl;
	}
	
	
	return 0;
}
