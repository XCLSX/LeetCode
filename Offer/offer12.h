#include <myinclude.h>

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size()==0||word.size()==0)
            return false;
        for(int i=0;i<board[0].size();i++)
            for(int j=0;j<board.size();j++)
              if(dfs(board,word,i,j,0))
                return true;
        return false;
    }
    bool dfs(vector<vector<char>>& board,string word,int x,int y,int k)
    {

        if(x<0||x>=board[0].size()||y<0||y>=board.size()||board[y][x]!=word[k])
        {
            return false;
        }
        if(k == word.size()-1)
            return true;
        char temp = board[y][x];
        board[y][x] = '\0';
        if(dfs(board,word,x-1,y,k+1))
            return true;
        if(dfs(board,word,x+1,y,k+1))
            return true;
        if(dfs(board,word,x,y-1,k+1))
            return true;
        if(dfs(board,word,x,y+1,k+1))
            return true;
        board[y][x] = temp;
        return false;
    }
};
