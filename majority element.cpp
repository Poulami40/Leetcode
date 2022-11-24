//O(n) O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>(nums.size()/2))
                return i.first;
        }
        return 0;
    }
};

//O(n) O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ele=0;
        for(int i:nums)
        {
            if(count==0)
                ele=i;
            if(i==ele)
                count++;
            else
                count--;
        }
        return ele;
    }
};

//O(n) O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 0;
        for(int i = nums.size()/2; i >= 0 ; i++){
            if(nums[i] == nums[j])
                return nums[i];
            else
                j++;
        }
        return 0;
    }
};
