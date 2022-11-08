//brute force O(N^3)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            
            for(int j=i;j<nums.size();j++)
            {
                sum=0;
                for(int k=i;k<=j;k++)
                {
                    sum=sum+nums[k];
                }
                maxi=max(maxi,sum);    
            }
            
        }
        return maxi;
    }
};

//O(N^2)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
            for(int j=i;j<nums.size();j++)
            {
                
                sum+=nums[j];
                maxi=max(maxi,sum);    
            }
            
        }
        return maxi;
    }
};

//O(N) Kadane's algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            maxi=max(maxi,sum);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
};
