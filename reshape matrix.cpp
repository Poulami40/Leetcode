//O(N^2)

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>>res(r,vector<int>(c));
        
        int row=0,col=0;
        if(mat.size()*mat[0].size()==r*c)
        {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                res[row][col]=mat[i][j];
                col++;
                if(col==c)
                {
                    row++;
                    col=0;
                }
                
            }
        }
        }
        else
            return mat;
        return res;
        
    }
};

//O(N)

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>>res(r,vector<int>(c));
        int m=mat.size(),n=mat[0].size();
        if(m*n!=r*c)
            return mat;
       
        for(int i=0;i<m*n;i++)
        {
            res[i/c][i%c]=mat[i/n][i%n];
        }
        
       
        return res;
        
    }
};
