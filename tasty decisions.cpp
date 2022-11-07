#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if((2*a)>(5*b))
        {
            cout<<"Chocolate"<<endl;
        }
        else if((2*a)<(5*b))
        {
            cout<<"Candy"<<endl;
        }
        else 
        {
            cout<<"Either"<<endl;
        }
    }
	return 0;
}
