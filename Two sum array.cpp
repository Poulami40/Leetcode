//O(N^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res; 
    }
};

//O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                res.push_back(mpp[target-nums[i]]);
                res.push_back(i);
                return res;
            }
            mpp[nums[i]]=i;
        }
        return res;
    }
};
