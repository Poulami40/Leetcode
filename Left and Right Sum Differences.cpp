class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector <int> leftsum,rightsum,ans;
        int suml=0,sumr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                leftsum.push_back(0);
                continue;
            }
            else
            {
                for(int j=0;j<i;j++)
                    suml+=nums[j];
            }
            leftsum.push_back(suml);
            suml=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i==(nums.size()-1))
            {
                rightsum.push_back(0);
                continue;
            }
            else
            {
                for(int j=nums.size()-1;j>i;j--)
                    sumr+=nums[j];
            }
            rightsum.push_back(sumr); 
            sumr=0;
        }
        for(int i=0;i<leftsum.size();i++)
        {
            if(leftsum[i]>rightsum[i])
            ans.push_back(leftsum[i]-rightsum[i]);
            else
                ans.push_back(rightsum[i]-leftsum[i]);
        }
        return ans;
    }
};
