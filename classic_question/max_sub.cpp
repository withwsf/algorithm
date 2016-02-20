#include "max_sub.h"
#include "iostream"
using namespace std;
int maxThree(int a,int b,int c){
    int temp;
    if(a>b)
        temp=a;
    else
        temp=b;
    if(c>temp)
        temp=c;
    return temp;
}
int naive_max_sub(int *a, int size){
    if(a==nullptr){
        cout<<"The array is empty!"<<endl;
        exit(-1);
    }
    else{
        int MaxSum=0;
        for(int i=0;i<size;++i){
            int subSum=0;
            for(int j=i;j>=0;--j){
                subSum+=a[j];
                if(subSum>MaxSum)
                    MaxSum=subSum;

            }
        }
        cout<<MaxSum<<endl;
        return MaxSum;
    }

}
int recursion_max_sub(int *a, int begin, int end){
    if(a==nullptr){
        cout<<"Input array is null!"<<endl;
        exit(-1);
    }
    else{
        if(begin==end){
            if(a[begin]>0)
                return a[begin];
            else
                return 0;
        }
        else{
            int middle=(begin+end)/2;
            int leftMax=recursion_max_sub(a,begin,middle);
            int rightMax=recursion_max_sub(a,middle+1,end);

            int leftBoard=0;
            int maxLeftBoard=0;
            int rightBoard=0;
            int maxRightBoard=0;
            for(int i=middle;i>=begin;--i){
                leftBoard+=a[i];
                if(leftBoard>maxLeftBoard)
                    maxLeftBoard=leftBoard;
            }
            for(int j=middle+1;j<=end;++j){
                rightBoard+=a[j];
                if(rightBoard>maxRightBoard)
                    maxRightBoard=rightBoard;
            }
            int maxBoard=maxLeftBoard+maxRightBoard;
            return maxThree(leftMax,rightMax,maxBoard);
        }
    }
}
int recursion_max_sub_packup(int *a, int size){

    if(size>0){
     int max_=recursion_max_sub(a,0,size-1);
     cout<<max_<<endl;
     return max_;}
    else{
        cout<<"size of array are error"<<endl;
        exit(-1);
    }
}
int best_max_sub(int *a, int size){
 if(a==nullptr){
     cout<<"Array is null"<<endl;
     exit(-1);
 }
 int maxSub=0;
 int thisSub=0;
 for(int i=0;i<size;++i){
     thisSub+=a[i];
     if(thisSub>maxSub)
         maxSub=thisSub;
     else if(thisSub<0)
         thisSub=0;
 }
 cout<<maxSub<<endl;
 return maxSub;
}
