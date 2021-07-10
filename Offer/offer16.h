#ifndef OFFER16_H
#define OFFER16_H
#include <myinclude.h>
//快速幂
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n == 0||x == 1)
            return 1;
        else if(x == 0)
            return 0;
        if(n<0)
        x = 1/x;
        int temp = abs(n);
        int times = 1;
        while(temp>0)
        {
            if(temp&1)
            ans = ans * x;
            x*=x;
            temp  = temp >> 1;
        }
        return ans;
    }
};
#endif // OFFER16_H
