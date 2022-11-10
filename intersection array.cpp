//O(NlogN)

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> res;
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]==nums2[j])
            {
                res.push_back(nums1[i]);
                i--;
                j--;
            }
            else if(nums1[i]<nums2[j])
                j--;
            else if(nums2[j]<nums1[i])
                i--;
        }
        return res;
    }
};

//O(logn)

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map <int,int> M;
        for(int i=0;i<nums1.size();i++)
        {
            M[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++)
        {
            auto it=M.find(nums2[j]);
            if(it!=M.end()&&it->second>0)
            {
                res.push_back(nums2[j]);
                it->second--;
            }
        }
        return res;
    }
};
