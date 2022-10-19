#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            cout<<"YES"<<endl;
            
        }
        else if(b>a)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
