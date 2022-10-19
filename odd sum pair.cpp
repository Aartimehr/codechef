#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)%2==0 && (a+c)%2==0 && (b+c)%2==0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
