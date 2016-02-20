#include "bubblesort.h"
#include "vector"
using std::vector;
void BubbleSort(vector<int>& a){
    int size=a.size();
    for(int i=size-1;i>0;--i){
        for(int j=0;j<i;++j){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
