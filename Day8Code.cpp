 vector<int> findElements(int a[], int n)
    {
        // Your code goes here   
           // Your code goes here   
        sort(a,a+n);
        vector<int>ans;
        
        for(int i=0;i<n-2;i++)
        {
            ans.push_back(a[i]);
        }
        return ans;
    }