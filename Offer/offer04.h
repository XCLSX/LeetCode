#include <myinclude.h>

//在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

//[
//  [1,   4,  7, 11, 15],
//  [2,   5,  8, 12, 19],
//  [3,   6,  9, 16, 22],
//  [10, 13, 14, 17, 24],
//  [18, 21, 23, 26, 30]
//]

//5


class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        int row = 0;
        int col = matrix[0].size()-1;
        while(row>=0&&row<matrix.size()&&col>=0&&col<matrix[0].size())
        {
            if(matrix[row][col]== target)
                return true;
            else if(matrix[row][col]<target)
            {
                row++;
            }
            else
            {
                col--;
            }
        }
        return false;
    }
};
