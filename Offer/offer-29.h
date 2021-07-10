#ifndef OFFER29_H
#define OFFER29_H
#include<myinclude.h>
//打印二维数组
class Solution {

public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0)
            return {};
        vector<int> ans(matrix.size() * matrix[0].size());
        int pos = 0;
        int l = 0;
        int r = matrix[0].size() - 1;
        int t = 0;
        int b = matrix.size() - 1;
        while (true)
        {
            for (int i = l; i <= r; i++)
            {
                ans[pos++] = matrix[t][i];
            } if(++t>b)break;
            for (int i = t; i <= b; i++)
            {
                ans[pos++] = matrix[i][r];
            } if(--r<l)break;

            for (int i = r; i >= l; i--)
            {
                ans[pos++] = matrix[b][i];
            } if(--b<t)break;
            for (int i = b; i >= t; i--)
            {
                ans[pos++] = matrix[i][l];
            } if(++l>r)break;
        }
        return ans;
    }
};
#endif // OFFER29_H
