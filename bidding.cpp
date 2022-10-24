#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    {
	        cout<<"Alice"<<endl;
	    }
	    if(b>a && b>c)
	    {
	        cout<<"Bob"<<endl;
	    }
	    if(c>a && c>b)
	    {
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
