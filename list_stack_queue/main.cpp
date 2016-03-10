#include <iostream>
#include "list.h"
#include "odd_list_first.h"
using namespace std;

int main()
{
    List L=CreateList();
    PrintList(L);
    List odd_L=odd_list_first(L,5);
    PrintList(odd_L);
    return 0;



}

