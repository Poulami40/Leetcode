class Solution {
public:
    string categorizeBox(int length,int width,int height,int mass) {
        long long vol=(long long)length*(long long)width*(long long)height;
        int s1=0,s2=0;
        if(length>=1e4||width>=1e4||height>=1e4||mass>=1e4||vol>=1e9)
           s1=1;
        if(mass>=100)
            s2=1;
          if(s1&&s2)
            return "Both";
           
           else if(s1)
            return "Bulky";
             else if(s2)
              return "Heavy";
              else
              return "Neither";
    }
};
