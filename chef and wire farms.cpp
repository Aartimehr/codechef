#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int s = (2*a) + (2*b);
	    cout<<(s*c)<<endl;
	}
	return 0;
}
