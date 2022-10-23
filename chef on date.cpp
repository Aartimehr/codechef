#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--)
    {
    int x,y;
    cin>>x>>y;
    if(x>=1 && y>=1 && x<=100 && y<=100)
    {
        if(y>x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    }
	return 0;
}
