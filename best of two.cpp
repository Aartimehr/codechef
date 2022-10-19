#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int a,b;
    cin>>a>>b;
    cout<<max(a,b)<<endl;
    }
        
    return 0;
}



//other method 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
    }
          
     return 0;
}
