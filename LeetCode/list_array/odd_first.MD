
* 输入 链表1->2->3->4->5->nullptr(数字代表节点的编号，不是节点的值)
* 输出 1->3->5->2->4->nullptr 思路：使用双指针法，一个指针负责odd子链，一个负责even子链，注意不要形成环 代码：
代码：
```c++
#include "odd_list_first.h"
List odd_list_first(List L,int size){
     if(size<3)
         return L;
     Position odd=L->next;
     Position even=L->next->next;
     Position temp=even;
     for(int i=1;i<=size-2;++i){
         if(i%2==1)
         {
             odd->next=odd->next->next;
             odd=odd->next;
         }
         else
         {
             even->next=even->next->next;
             even=even->next;
         }

     }
     odd->next=temp;
     even->next=nullptr;
     return L;
}
```
