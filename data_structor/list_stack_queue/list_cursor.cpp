#include "list_cursor.h"
#include "iostream"
using std::cout;
using std::cin;
using std::endl;
struct Node NodeList[1000];//only declariation can put in header file, or will have multi defination!!!!
void initlizeNodeList(int size){
    for(int i=0;i<size-1;++i){
        NodeList[i].next=i+1;
    }
    NodeList[size-1].next=0;
}
static Position cursorMalloc(){
    Position temp;

    temp=NodeList[0].next;
    NodeList[0].next=NodeList[temp].next;
    return temp;
}
static bool cursorFree(Position P){
    NodeList[P].next=NodeList[0].next;
    NodeList[0].next=P;
}

List makeEmpty(){
    List L=cursorMalloc();
    NodeList[L].next=0;
    return L;
}
List CreateCursorList(){
    List L=makeEmpty();
    int temp;
    Position tail=L;
    cout<<"Please the int element of the cursor list !"<<endl;
    cout<<"You can use ctrl+D to end the input"<<endl;
    while(cin>>temp){
        Position P=cursorMalloc();
        NodeList[P].element=temp;
        NodeList[P].next=NodeList[tail].next;
        NodeList[tail].next=P;
        tail=P;
    }
    return L;
}

Position Find(int x, List L){
    Position P=NodeList[L].next;
    while(P!=0&&NodeList[P].element!=x)
        P=NodeList[P].next;
    return P;
}
Position FindPrevious(int x, List L){
    Position P=L;
    while(NodeList[P].next!=0&&NodeList[NodeList[P].next].element!=x)
        P=NodeList[P].next;
    if(NodeList[P].next==0)
        return 0;
    else
        return P;
}
bool Insert(int x, Position P){
    Position temp=cursorMalloc();
    if(temp==0)
        return false;
    else{
    NodeList[temp].element=x;
    NodeList[temp].next=NodeList[P].next;
    NodeList[P].next=temp;
    return true;
    }
}
bool Delete(int x, List L){
    Position P=FindPrevious(x,L);
    if(P==0)
        return false;
    else{
        Position temp;
        temp=NodeList[P].next;
        NodeList[P].next=NodeList[temp].next;
        cursorFree(temp);
        return true;

    }

}
void PrintList(List L){
    Position P=NodeList[L].next;
    cout<<"begin....."<<endl;
    while(P!=0){
        cout<<NodeList[P].element<<endl;
        P=NodeList[P].next;
    }
    cout<<"end...."<<endl;
}
