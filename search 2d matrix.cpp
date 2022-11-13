//O(m*n)->Linear search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
};

//O(m+n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        while(row<matrix.size()&&col>=0)
        {
            if(matrix[row][col]==target)
                return true;
            if(matrix[row][col]<target)
                row++;
            else
                col--;
        }
        return false;
    }
};

//O(log(n*m))

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,row=matrix.size(),mid,col=matrix[0].size(),high=row*col-1;
        if(matrix.size()==0)
            return false;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(matrix[mid/col][mid%col]==target)
                return true;
            else if(matrix[mid/col][mid%col]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};
