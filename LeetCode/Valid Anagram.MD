###给定两个字符串s和t，判断两个字符串中的字符是否种类和频次都相同
>比如'abbc'符合条件，但是'aabc'就不符合条件。
* 在C++中，'z'-'a'=25,'z'-'A'=57,所以如果字符全是小写的，只需要一个长为26的数组用来记录每个字母出现的次数。
* 因为经过判断语句之后只剩下对相同长度字符串的处理，因此只有s和t完全相同时才能保证不小于0.

代码如下：
'''c++
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
             return false;
        else{
            vector<int> a(26,0);
            int len=s.size();
            for(int i=0;i<len;++i)
                ++a[s[i]-'a'];

            for(int j=0;j<len;++j)
              {
                  if(--a[t[j]-'a']<0)
                    return false;

              }

            return true;
        }

    }
};
'''
