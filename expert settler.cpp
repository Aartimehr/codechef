#include <iostream>
using namespace std;

	
	int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    float a,b;
	    cin>>a>>b;
	    if((b/a)*100>=50)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	    cout<<"NO"<<endl;
	    }
	}
	return 0;
}

