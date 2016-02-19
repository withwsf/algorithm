#include <iostream>
#include "binarysearchtree.h"
using namespace std;

int main()
{
    searchTree T=makeEmpty(nullptr);
    T=insert(6,T);
    T=insert(2,T);
    T=insert(8,T);
    T=insert(4,T);
    T=insert(1,T);
    T=insert(3,T);
    T=insert(5,T);
    Position P1=find(2,T);
    Position P2=find(3,T);
    Position P3=find(5,T);
    Position P4=find(100,T);
    Position P5=findmax(T);
    Position P6=findmin(T);
    searchTree T1=delete_node(8,T);


    cout << "Hello World!" << endl;
    return 0;
}

