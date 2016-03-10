* 输入：1 1 2 2 3 4 5 6 7
* 输出：7，并将输入array的前7个元素变为1 2 3 4 5 6 7(inpalce,需要传递引用)

>思路：
初始：慢指针slow指向第一个元素，快指针fast指向第二个元素
for fast不等于null：
    若*fast!=*slow:
       ++fast;
    else:
       *++slow=*fast;
        ++fast;
    并设置一个变量记录长度


代码：
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()>0){
        auto slow=nums.begin();
        auto fast=nums.begin();
        ++fast;
        int size=1;
        while(fast!=nums.end()){
            if(*fast==*slow)
              ++fast;
            else{
                slow=slow+1;
                *slow=*fast;
                ++fast;
                ++size;
            }
        }
        
        return size;
        }
        else{
            return nums.size();
        }
    }
}
```
