class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> result;
        
        
       for(int i=0; i<n; i++)
        {
            if(a[i]==key)
            {
                result.push_back(i);
                break;
            }
        }
        
        for(int i=n; i>=0; i--)
        {
            if(a[i]==key)
            {
                result.push_back(i);
                return result;
            }
        }
        
        result.push_back(-1);
        result.push_back(-1);
        
        return result;
    
    }
  
};