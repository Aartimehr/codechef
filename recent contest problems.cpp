#include<bits/stdc++.h>
using namespace std;

int main() {
     int T;
     cin>>T;
     while(T--)
     {
         int n;
         cin>>n;
         string S[n];
         int START38=0;
         int LTIME108=0;
         for(int i=0;i<n;i++)
         {
             cin>>S[i];
        
         if(S[i]=="START38") START38++;
         else 
         {
         LTIME108++;
         }
         }
     
     cout<<START38<<" "<<LTIME108<<endl;
     }
	return 0;
}
