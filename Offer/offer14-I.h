#ifndef OFFER14I_H
#define OFFER14I_H
#include<myinclude.h>
//贪心 n>4时尽可能分为长度为3的一段(数学验证)
class Solution {
public:
    int cuttingRope(int n) {
        class Solution {
        public:
            int cuttingRope(int n) {
             if(n == 1)
                return 1;
             else if(n<4)
                return n-1;
             int res = 1;
             while(n>4)
             {
                 res*=3;
                 n-=3;
             }
             res *= n;
             return res;
            }
        };
};
#endif // OFFER14I_H
