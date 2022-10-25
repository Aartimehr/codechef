#include <iostream>
using namespace std;

int main() {
  
	int a,b,c,d,count;
	    cin>>a>>b>>c>>d;
	    if(a>=10)
	    {
	      count++;
	    }
	    if(b>=10)
	    {
	        count++;
	    }
	    if(c>=10)
	    {
	        count++;
	    }
	    if(d>=10)
	    {
	        count++;
	    }
	  cout<<(count++)<<endl;
	return 0;
}
