class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	       int n = S.length();
        for(int i = 0; i<n; i++){
            if(isdigit(S[i]))continue;
            S.erase(i--,1);
            n--;
        }
        return S;
	}
};