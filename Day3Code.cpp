int PalinArray(int a[], int n)
    {
        // code here
        for(int i=0;i<n;i++){
            int k=a[i], ans=0;
            while(k>0){
            int m=k%10;
               k/=10;
               ans=ans*10+m;
            }
        if(ans!=a[i])
           return false;
        }
        return true;
        }