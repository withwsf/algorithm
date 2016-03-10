####反转链表
常规的思路，不过值得注意的是最后要将head的next设为nullptr，防止形成环。

代码：
```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)
           return head;
        else{
            if(head->next==nullptr)
               return head;
            else{
                ListNode* trueHead= reverseList(head->next);
                head->next->next=head;
                head->next=nullptr;
                return trueHead;
                
            }
        }
        
    }
};
```

