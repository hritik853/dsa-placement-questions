class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r,c,a=0,i,j;
        for( i=0;i<8;i++)
        {
            for( j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                {
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        for( i=c;i<8;i++)
            {
                if(board[r][i]=='p')
                {
                    a++;
                    break;
                }
                else if(board[r][i]=='B')
                {
                    break;
                }

            }
            for(i=c;i>=0;i--)
            {
                 if(board[r][i]=='p')
                {
                    a++;
                    break;
                }
                else if(board[r][i]=='B')
                {
                    break;
                }

            }
            for(i=r;i>=0;i--)
            {
                if(board[i][c]=='p')
                {
                    a++;
                    break;
                }
                else if(board[i][c]=='B')
                    break;

            }
            for(i=r;i<8;i++)
            {
                if(board[i][c]=='p')
                {
                    a++;
                    break;
                }
                else if(board[i][c]=='B')
                    break;

            }
        return a;
    }
};
