#include <offer04.h>

int main()
{
    Solution so;
    vector<vector<int>> martix = {{1,4,7,11, 15}
                                 ,{2,   5,  8, 12, 19}
                                 ,{3,   6,  9, 16, 22}
                                 ,{3,   6,  9, 16, 22}
                                 ,{18, 21, 23, 26, 30}};
    so.findNumberIn2DArray(martix,5);
}
