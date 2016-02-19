#include "stack_linked_list.h"
#include "iostream"
#include "stdexcept"
using namespace std;
struct Node{
    int element;
    Node* next;
};
Stack CreatStack(){
    Stack S=Stack(malloc(sizeof(Node)));
    if(S==nullptr)
        throw overflow_error("out of space!!!");
    S->next=nullptr;
    return S;
}
bool IsStackEmpty(Stack S){
    return S->next==nullptr;
}

void Push(int x,Stack S){
    Node* temp=Stack(malloc(sizeof(Node)));
    if(temp==nullptr)
        throw overflow_error("out of space!!!");
    temp->element=x;
    temp->next=S->next;
    S->next=temp;

}
int Pop(Stack S){
    if(IsStackEmpty(S))
        throw overflow_error("stack is empty");
    Node* temp=S->next;
    S->next=temp->next;
    free(temp);
}
int Top(Stack S){
    if(IsStackEmpty(S))
        throw overflow_error("stack is empty");
    cout<<S->next->element<<endl;
    return S->next->element;
}
