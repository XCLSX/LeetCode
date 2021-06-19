#include <myinclude.h>


//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
//输入：s = "We are happy."
//输出："We%20are%20happy."


//遍历string 遇到空格把空格变为'%'然后在后面插入20

class Solution {
public:
    string replaceSpace(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                s[i] = '%';
                s.insert(i+1,"20");
            }
        }
        return s;
    }
};
