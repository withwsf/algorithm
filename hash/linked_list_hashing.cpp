#include "linked_list_hashing.h"
#include "iostream"
using std::cout;
using std::endl;

struct ListNode{
    char* ptrKey;
    ptrNode next;
};

struct HashTable{
  int TableSize;
  ptrLists lists;
};
ptrHash initHash(int tableSize){
    ptrHash H=(ptrHash)malloc(sizeof(HashTable));
    if(H==nullptr){
        cout<<"out of space"<<endl;
        return nullptr;
    }
    H->TableSize=tableSize;
    H->lists=(ptrLists)malloc(sizeof(ptrNode)*H->TableSize);
    if(H->lists==nullptr){
        cout<<"out of space"<<endl;
        return nullptr;
    }
    for(int i=0;i<H->TableSize;++i){
        H->lists[i]=ptrNode(malloc(sizeof(ListNode)));
        if(H->lists[i]=nullptr)
        {
            cout<<"out of space"<<endl;
            return nullptr;
        }
        H->lists[i]->next=nullptr;
        H->lists[i]->ptrKey=nullptr;
    }

}
void destroyHash(ptrHash H){
    if(H==nullptr)
        return;
    for(int i=0;i<H->TableSize;++i){
        ptrNode l=H->lists[i];
        while(l!=nullptr){
            ptrNode temp=l->next;
            free(l->ptrKey);
            free(l);
            l=temp;
        }
    }
    free(H->lists);
    free(H);
}

int hashFunction(char *key, int tableSize){
    if(key==nullptr)
    {
        cout<<"Empty char"<<endl;
        return -1;
    }
    int count=0;
    while(*key!='\0'){
        count+=*key;
        key++;
    }
    return count%tableSize;

}

ptrNode findHash(char *key, ptrHash H){
    int loc=hashFunction(key,H->TableSize);
    ptrNode l=H->lists[loc];
    l=l->next;
    while(l!=nullptr&&*l->ptrKey!=*key)
        l=l->next;
    return l;
}
void insertHash(char *key, ptrHash H){
    int loc=hashFunction(key,H->TableSize);
    ptrNode l=H->lists[loc];
    l=l->next;
    while(l!=nullptr&&*l->ptrKey!=*key)
        l=l->next;
    if(l==nullptr){
        ptrNode temp=(ptrNode)malloc(sizeof(ListNode));
        if(temp==nullptr){
            cout<<"out of space!"<<endl;
            return;
        }
        temp->ptrKey=key;
        temp->next=H->lists[loc]->next;
        H->lists[loc]->next=temp;
    }
}

bool deleteHash(char *key, ptrHash H){
      int loc=hashFunction(key,H->TableSize);
      ptrNode l=H->lists[loc];
      ptrNode p=l;
      while(p->next!=nullptr &&*p->next->ptrKey!=*key)
          p=p->next;
      if(p->next!=nullptr){
          ptrNode temp=l->next;
          p->next=temp->next;
          free(temp->ptrKey);
          free(temp);
          return true;
      }
      return false;
}


