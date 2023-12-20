class Solution{
    public:
    string longest(string names[], int n)
    {
         int max=0;
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(max<names[i].size())
            {
                max=names[i].size();
                count=i;
            }
        }
        return names[count];
    }
};