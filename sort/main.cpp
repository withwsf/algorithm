#include <iostream>
#include "insertsort.h"
#include "bubblesort.h"
#include "shellsort.h"
#include "mergesort.h"
#include "vector"
#include "stdlib.h"
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

{   struct aq{
    int x;
    int y;
    };
    int* b=nullptr;
    int c[]={10,8,2,17,15,19};
    int a[]={1};
    //insertSort(a,1);
    //printArray(a,1);
    //insertSort(b,0);
    //printArray(b,0);
    //insertSort(c,6);
    //printArray(c,6);
    vector<int> d{1};
    vector<int> e{10,8,2,17,15,19,1002,232,331,32,45235,3215,3131,1315,45325,213415353,};
    BubbleSort(d);
    //BubbleSort(e);
    shellSort(a,1);
    printArray(a,1);
    shellSort(b,0);
    printArray(b,0);
    vector<float> fff{9993.4,1254.3,433.45,3432.3};
    mergeSort(e);
    mergeSort(fff);

    cout << "Hello World!" << endl;
    return 0;
}

