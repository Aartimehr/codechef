#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a<b)
	    {
	        cout<<"FIRST"<<endl;
	    }
	   else if(a==b)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(a>b)
	    {
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;
}
