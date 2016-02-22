#include <iostream>
#include "insertsort.h"
#include "bubblesort.h"
#include "shellsort.h"
#include "vector"
using namespace std;
void printArray(int* a,int size){
    if(a==nullptr){
        cout<<"array is empty!"<<endl;
    }
    else{
        for(int i=0;i<size;++i)
            cout<<a[i]<<endl;
    }

}
int main()
{   int a[]={1};
    int* b=nullptr;
    int c[]={10,8,2,15,17,19};
    //insertSort(a,1);
    //printArray(a,1);
    //insertSort(b,0);
    //printArray(b,0);
    //insertSort(c,6);
    //printArray(c,6);
    vector<int> d{1};
    vector<int> e{10,8,2,15,17,19};
    BubbleSort(d);
    BubbleSort(e);
    shellSort(a,1);
    printArray(a,1);
    shellSort(b,0);
    printArray(b,0);
    shellSort(c,6);
    printArray(c,6);
    cout << "Hello World!" << endl;
    return 0;
}

