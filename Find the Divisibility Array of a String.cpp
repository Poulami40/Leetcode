class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        //string s;
        long long int n;
        vector<int> div;
        long long int s=0;
        for(int i=0;i<word.size();i++)
        {
            // s=word.substr(0,i+1);
            // n=atoi(s.c_str());
            // if(n%m==0)
            //     ans.push_back(1);
            // else
            //     ans.push_back(0);
            s=(s*10+(word[i]-'0'))%m;
            if(s==0)
                div.push_back(1);
            else
                div.push_back(0);
        }
        
        return div;
    }
};
