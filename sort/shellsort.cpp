#include "shellsort.h"
#include "stdio.h"
void shellSort(int *a, int size){
    if(a==nullptr){
        printf("Your input to shell sort is nullptr!!!");
        return;
    }
    int stepSize,toInsert,insertPositon,toInsertNum;
    for(stepSize=size/2;stepSize>0;stepSize/=2){
        for( toInsert=stepSize;toInsert<size;++toInsert){
             insertPositon=toInsert;
             toInsertNum=a[toInsert];
            while(insertPositon-stepSize>=0&&toInsertNum<a[insertPositon-stepSize])
            {
                a[insertPositon]=a[insertPositon-stepSize];
                insertPositon-=stepSize;
            }
            a[insertPositon]=toInsertNum;

        }
    }

}
