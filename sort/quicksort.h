#ifndef QUICKSORT
#define QUICKSORT
#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;
template<typename T>
void my_swap(vector<T>& a,int ex_a,int ex_b){//do not use the same name of bulit in.
    T temp=a[ex_a];
    a[ex_a]=a[ex_b];
    a[ex_b]=temp;

}
template<typename T>
int get_Mid(const vector<T>&v,int a,int b,int c ){
    if((v[b]<=v[a]&&v[a]<=v[c])||(v[c]<=v[a]&&v[a]<=v[b]))
        return a;
    else if((v[a]<=v[b]&&v[b]<=v[c])||(v[c]<=v[b]&&v[b]<=v[a]))
        return b;
    else
        return c;

}
/*template<typename T>

void QSort(vector<T>& a,int head,int tail){
    if(head>=tail)
        return;
    int middle,gap;
    middle=(head+tail)/2;
    gap=get_Mid(a,head,tail,middle);
    my_swap(a,tail,gap);
    int ptri,ptrj,ptrm;
    ptri=head;
    ptrj=tail-1;
    ptrm=tail;
    while(ptri<ptrj){
        while(a[ptri]<a[ptrm]&&ptri<ptrj)
            ++ptri;
        while(a[ptrj]>a[ptrm]&&ptri<ptrj)
            --ptrj;
        if(ptri==ptrj)
            break;
        else{
            my_swap(a,ptri,ptrj);
            ++ptri;
            --ptrj;
        }
    }
    if(a[ptri]<a[ptrm])
        ++ptri;
    my_swap(a,ptri,ptrm);
    QSort(a,head,ptri-1);
    QSort(a,ptri+1,tail);

}*/
template<typename T>
void QSort(vector<T>& a,int head,int tail ){
    if(head>=tail)
        return;
    int ptri=head;
    int ptrj=tail-1;
    int m=a[tail];
    while(ptri<ptrj){
        while(a[ptri]<m&&ptri<ptrj)
            ptri++;
        while(a[ptrj]>=m&&ptri<ptrj)
            ptrj--;
        my_swap(a,ptri,ptrj);
    }
    if(a[ptri]>=a[tail])
        my_swap(a,ptri,tail);
    else
        ++ptri;
    QSort(a,head,ptri-1);
    QSort(a,ptri+1,tail);

}
template<typename T>
void  QuickSort(vector<T>& a){
    int size=a.size();
    QSort(a,0,size-1);
}
#endif // QUICKSORT

