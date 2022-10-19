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
        if(a>100)
        {
            cout<<a-10<<endl;
        }
        else if(a<=100)
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
