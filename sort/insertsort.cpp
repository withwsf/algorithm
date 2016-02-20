#include "insertsort.h"
#include "iostream"
int* insertSort(int a[], int size){
    if(a==nullptr){
        std::cout<<"the array is empty"<<std::endl;
        return nullptr;
    }
    for(int i=0;i<size-1;++i){
        int j=i+1;
        int toInsert=a[j];
        while(j>0&toInsert<a[j-1])
        {
            a[j]=a[j-1];
            --j;
        }
        a[j]=toInsert;
    }
    return a;
}
