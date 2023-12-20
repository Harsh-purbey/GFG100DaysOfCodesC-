string modify (string s)
        {
            //code here.
            // vovels = a,e,i,o,u
            string s1 ; // for storing vovels;
            for (int i=0;i<s.size();i++){
                if (s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                    s1 = s1+s[i];
                }
            }
            // at the end of this for loop we will have all vovels inside of s1
            int s1Len = s1.size();
            int count = 0;
            // next for loop to insert the reverse vovels
            for (int i=0;i<s.size();i++){
                if (s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                    s[i]= s1[s1Len-count-1];
                    count++;
                }
            }
            return s;
            
        }