class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
       
        for(int row=0;row<board.size();row++)
        {
            map<char,int> rmap;
            for(int col=0;col<board[row].size();col++)
            {
                rmap[board[row][col]]++;
                if(board[row][col]!='.'&&rmap[board[row][col]]>1)
                    return false;
            }
        }
        
        for(int row=0;row<board.size();row++)
        {
            map<char,int>cmap;
            for(int col=0;col<board[row].size();col++)
            {
                cmap[board[col][row]]++;
                if(board[col][row]!='.'&&cmap[board[col][row]]>1)
                    return false;
            }
        }
        int r=0,c=0;
        while(r<9)
        {
            map<char,int>m;
            for(int row=r;row<r+3;row++)
            {
                for(int col=c;col<c+3;col++)
                {
                    m[board[row][col]]++;
                    if(board[row][col]!='.'&&m[board[row][col]]>1)
                        return false;
                }
            }
        
    c+=3;
        if(c>=9){
            r+=3;
            c=0;
        }
    }
        return true;
    }
};
