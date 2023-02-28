#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        int arr[n];
	        cin>>arr[i];
	        if(arr[i]>=1000) 
	         count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
