//using maps

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag=false;
        map<int,int>M;
        for (auto i:nums)
        {
            M[i]++;
        }
        for(auto i:M)
        {
            if(i.second>=2)
                return true;
        }
        return flag;
    }
};

//sorting

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag=false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return true;
        }
        return flag;
    }
};

//brute force

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                    return true;
            }
        }
        return flag;
    }
};


TLE for brute force 
