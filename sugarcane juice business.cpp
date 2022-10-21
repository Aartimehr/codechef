#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        int tc = 50*a;
        cout<<(tc-((tc/10)*2 + (tc/10)*2 + (tc/10)*3))<<endl;
    }
	
	return 0;
}
