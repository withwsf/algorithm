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
