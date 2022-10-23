#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--)
  {
      int a,b;
      cin>>a>>b;
      if(b>=a)
      {
          cout<<0<<endl;
      }
      else if(a>b)
      {
          cout<<a-b<<endl;
      }
      else if(a<b)
      {
          cout<<b-a<<endl;
      }
  }
  
	return 0;
}
