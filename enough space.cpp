#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(b+c*2>a)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
