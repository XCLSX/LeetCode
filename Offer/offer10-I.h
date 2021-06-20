#include <myinclude.h>

class Solution {
public:
    int fib(int n) {
        if(n<=0)
            return 0;
        int res[n+1];
        res[0] = 0;
        res[1] = 1;
        for(int i = 2;i<=n;i++)
        {
            res[i] = (res[i-1]+res[i-2])%100000007;
        }
        return res[n];
    }
};
