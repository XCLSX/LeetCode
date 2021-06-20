#include <myinclude.h>

class Solution {
public:
    int minArray(vector<int>& numbers) {
        int begin = 0;
        int end = numbers.size()-1;
        int mid = begin+(end-begin)/2;
        while(begin<end)
        {
            mid = begin+(end-begin)/2;

           if(numbers[mid]>numbers[end])
                begin = mid+1;
            else if(numbers[mid] == numbers[end])
                end--;
            else
                end  = mid;
        }
        return numbers[begin];
    }
};
