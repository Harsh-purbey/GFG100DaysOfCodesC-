class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
            string combine;
        for(int i=0;i<n;i++){
            if(arr[i]!=' ')
            {//" " it's gonna give the error
                combine+=arr[i];
            }
        }
        return combine;
    }
};