//O(n) O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second==1)
                return i.first;
        }
        return 0;
    }
};

//O(nlogn) O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
           if(nums[i]!=nums[i-1])
               return nums[i-1];
        }
        
        return nums[nums.size()-1];
    }
};

//O(n) O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};
