/*#include "mergesort.h"
#include "stdlib.h"
#include "iostream"
#include "vector"
using namespace std;
template<typename T>
void merger(vector<T>&a,int head,int tail,int middle,vector<T>&temp){
int ptra=head;
int ptrb=middle+1;
int ptrc=head;
while (ptra<=middle&&ptrb<=tail) {
    if(a[ptra]<a[ptrb])
        temp[ptrc++]=a[ptra++];
    else
        temp[ptrc++]=a[ptrb++];

}
while(ptra<=middle)
    temp[ptrc++]=a[ptra++];
while(ptrb<=tail)
    temp[ptrc++]=a[ptrb++];
for(int i=head;i<=tail;++i)
    a[i]=temp[i];

}
template<typename T>
void MSort(vector<T>& a,int head,int tail,vector<T>& temp){
    if(head==tail)
        return;
    else{
            int middle=(head+tail)/2;
            MSort(a,head,middle,temp);
            MSort(a,middle+1,tail,temp);
            merger(a,head,tail,middle,temp);
        }

}
template<typename T>
void mergeSort(vector<T> &a){
    int length=a.size();
    vector<T> temp(length);
    MSort(a,0,length-1,temp);

}
*/
