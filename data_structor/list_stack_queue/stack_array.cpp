#include "stack_array.h"
#include "iostream"
#include "stdexcept"
using namespace std;
struct Stack_array{
    int TopOfStack;
    int MaxSize;
    int* array;
};
PtrToStack CreateSatakArray(int maxSize)
{
    PtrToStack S=PtrToStack(malloc(sizeof(Stack_array)));
    if(S==nullptr)
        throw overflow_error("Out of space!");
    S->TopOfStack=-1;
    S->MaxSize=maxSize;
    int* temp= PtrToArray(malloc(sizeof(int)*maxSize));
    if(temp==nullptr)
        throw overflow_error("Out of space!");
    S->array=temp;
    return S;
}
bool IsSatckArrayEmpty(PtrToStack S){
    return S->TopOfStack==-1;
}
void PushSatckArray(int x, PtrToStack S){
    if(S->TopOfStack<S->MaxSize){
        S->array[++S->TopOfStack]=x;
    }
    else{
        throw overflow_error("out of space");
    }
}
int PopStackArray(PtrToStack S){
    if(IsSatckArrayEmpty(S))
        throw overflow_error("stacl is empty!!!");
    int temp=S->TopOfStack;
    S->TopOfStack--;
    return S->array[temp];


}
