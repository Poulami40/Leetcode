class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long int s=0,sum=0,c=0;
        if(coins<costs[0])
        return 0;
        for(int i=0;i<costs.size();i++)
        {
            s=s+costs[i];
            c++;
        }
        if(s<=coins)
            return c;
        for(int i=0;i<costs.size();i++)
        {
            sum=0;
            c=0;
            for(int j=i;j<costs.size();j++)
            {
                sum=sum+costs[j];
                c++;
                if(sum==coins)
                    return c;
                if(sum>coins)
                    return c-1;
            }
            if(sum<coins)
                return c;
        }
        return 0;
    }
};

//Greedy

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int i=0;
        while(i<n&&costs[i]<=coins)
        {
            coins-=costs[i];
            i++;
        }
        return i;
    }
};

