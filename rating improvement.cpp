#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if((a+200)>=b && a<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    

	return 0;
}
