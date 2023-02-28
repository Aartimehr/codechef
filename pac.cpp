int findDigits(int n) {
         int r;
       vector<int>ans;
        if(n==0)
        return 0;
         r=n%10;
        findDigits(n/10);
       
         for(int i=0;i<n;i++)
         {
             if(i%n==0)
            ans.push_back(i);
         }
        cout<<ans.size()<<endl;
        return 0;
}
