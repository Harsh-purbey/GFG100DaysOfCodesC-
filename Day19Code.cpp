vector<string> extractIntegerWords(string s)
{
    // code here
    vector<string> result;
    string word = "";
    
    for(int i=0; i<s.length(); i++) {
        if(isdigit(s[i])) {
            word += s[i];
            if(!isdigit(s[i+1]) or i == s.length()-1) {
                result.push_back(word);
                word = "";
            }
        }
    }
    
    return result;
}