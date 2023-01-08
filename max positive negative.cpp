class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int e=0,o=0;
        for(auto i:nums)
        {
            if(i>0)
                e++;
            else if(i<0)
                o++;
        }
        return max(e,o);
    }
};
