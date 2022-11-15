//O(m*n)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1=ransomNote.length();
        int l2=magazine.length();
        vector<int> a(26,0);
        for(int i=0;i<l2;i++)
        {
            a[magazine[i]-'a']++;
        }
        for(int j=0;j<l1;j++)
        {
            if(a[ransomNote[j]-'a']--<=0)
                return false;
           
        }
        return true;
    }
};

//Using maps

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1=ransomNote.length();
        int l2=magazine.length();
        map<char,int>m;
        for(int i=0;i<l2;i++)
        {
            m[magazine[i]]++;
        }
        for(int j=0;j<l1;j++)
        {
            if(m[ransomNote[j]]--<=0)
                return false;
           
        }
        return true;
    }
};
