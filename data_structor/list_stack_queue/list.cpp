#include "list.h"
#include "iostream"
using std::cout;
using std::endl;

bool IsEmpty(List L){
    return L->next==nullptr;
}
bool IsLast(Position P){
    return P->next==nullptr;
}
Position Find(int x,List L){
    Position P=L->next;
    while(P!=nullptr&&P->element!=x)
        P=P->next;
    return P;
}
Position FindPrevious(int x, List L){
    Position P=L;
    while(P->next!=nullptr){
        if(P->next->element==x)
            return P;
        P=P->next;//do not use P->next=P->next->next
        //because P do not change
    }
    return nullptr;
}

bool Delete(int x,List L){
    Position P=FindPrevious(x,L);
    if(P!=nullptr){
        Position temp=P->next;
        P->next=P->next->next;
        free(temp);
        return true;
    }
    else
        return false;
}

bool Insert(int x, List L, Position P)
{
    Position temp=Position(malloc(sizeof(struct Node)));
    if(P==nullptr||temp==nullptr)
        return false;
    else{
        temp->element=x;
        temp->next=P->next;
        P->next=temp;
        return true;
    }
}

void PrintList(List L){
    cout<<"begin..."<<endl;
    Position P=L->next;
    while(P!=nullptr){
        cout<<P->element<<endl;
        P=P->next;
    }
    cout<<"end..."<<endl;

}

List MakeEmpty(){
    List header=List(malloc(sizeof(struct Node)));
    return header;
}

List CreateList(){
    List header=MakeEmpty();
    cout<<"Input the int element of list please, Use ctrl+D to end input"<<endl;
    int element;
    Position P=header;
    while(std::cin>>element){
        Insert(element,nullptr,P);
        P=P->next;
    }
    return header;
}


