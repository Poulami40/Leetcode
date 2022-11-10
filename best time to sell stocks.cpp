//O(N^2)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,p=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                p=prices[j]-prices[i];
                    maxi=max(p,maxi);
                
            }
        }
        return maxi;
    }
};

//O(N)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,p=0,mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);   
        }
        return maxi;
    }
};
