#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
     while(n--)
	  {
               int a;
	        cin>>a;
	        if(a>=1 && a<=1000)
	        {
	            cout<<(a%10)<<endl;
	        }
	    }
	return 0;
}
