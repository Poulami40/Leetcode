class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        map<int,int> M;
        int c=0;
        while(nums.empty()!=true)
        {
    
           int min=nums[0],max=nums[0];
            int indmax;
            int indmin;
        float avg;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<min){
                min=nums[i];
                indmin=i;
            }
            if(nums[i]>max){
                max=nums[i];
                indmax=i;
            }
        }
        avg=(min+max)/2.0; 
            
            M[avg]++;
            if(M[avg]==0)
                c++;
            
            nums.erase(nums.begin()+indmin);
            nums.erase(nums.begin()+indmax);
        }
        return c;
    }
    
   
};
