//Stack

class Solution {
public:
    bool match(char open,char close)
    {
        if(open=='('&&close==')')
            return true;
        else if(open=='{'&&close=='}')
            return true;
        else if(open=='['&&close==']')
            return true;
        else
            return false;
    }
    bool isValid(string s) {
        stack<char>st;
        if(s.length()==0)
            return false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(!st.empty()&&match(st.top(),s[i]))
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
