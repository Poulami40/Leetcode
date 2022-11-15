//O(n)

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);
        char c,ch;
        int d=0;
        for(int i=0;s[i]!='\0';++i)
        {
            
           freq[s[i]-'a']++;
                
        }
        for(int i=0;i<s.length();++i)
        {
            if(freq[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
