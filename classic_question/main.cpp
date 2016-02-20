#include <iostream>
#include <max_sub.h>
using namespace std;

int main()
{
    int a[]={-2,11,-4,13,-5,-2};
    int b[]={-1};
    int c[]={20,5};
    int* d=nullptr;
    naive_max_sub(a,6);
    naive_max_sub(b,1);
    naive_max_sub(c,2);
   // naive_max_sub(d,0);
    recursion_max_sub_packup(a,6);
    recursion_max_sub_packup(b,1);
    recursion_max_sub_packup(c,2);
   // recursion_max_sub_packup(d,0);
    best_max_sub(a,6);
    best_max_sub(b,1);
    best_max_sub(c,2);
    best_max_sub(d,0);
    cout << "Hello World!" << endl;
    return 0;
}

