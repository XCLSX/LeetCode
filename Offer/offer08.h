#include <myinclude.h>
class CQueue {
private:
    stack<int> sk1;
    stack<int> sk2;
public:
    CQueue() {

    }

    void appendTail(int value) {
       sk1.push(value);
    }

    int deleteHead() {
        if(sk1.size()==0)
            return -1;
        int val;
        while(!sk1.empty())
        {
            sk2.push(sk1.top());
            sk1.pop();
        }
        val = sk2.top();
        sk2.pop();
        while(!sk2.empty())
        {
            sk1.push(sk2.top());
            sk2.pop();
        }
        return val;
    }
};

