#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a>=30)
        {
            cout<<"YES"<<endl;
        }
        else if(a<30)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
