#include <iostream>
#include "binarysearchtree.h"
#include "avltree.h"
using namespace std;

int main()
{
    /*searchTree T=makeEmpty(nullptr); //code to test binary search tree!
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
*/
    avlTree T=makeAvlEmpty(nullptr);
    T=insertToAvl(3,T);
    T=insertToAvl(2,T);
    T=insertToAvl(1,T);
    T=insertToAvl(4,T);
    T=insertToAvl(5,T);
    T=insertToAvl(6,T);
    T=insertToAvl(7,T);
    T=insertToAvl(16,T);
    T=insertToAvl(15,T);
    T=insertToAvl(14,T);
    T=insertToAvl(13,T);
    T=insertToAvl(12,T);
    T=insertToAvl(11,T);
    T=insertToAvl(8,T);
    T=insertToAvl(10,T);
    T=insertToAvl(9,T);
    cout<<leafCount(T)<<endl;
    printAvlFirst(T);
    printAvlMiddle(T);
    printAvlBack(T);
    cout << "Hello World!" << endl;
    return 0;
}

