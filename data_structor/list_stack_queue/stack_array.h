#ifndef STACK_ARRAY
#define STACK_ARRAY
struct Stack_array;
typedef Stack_array* PtrToStack;
typedef int* PtrToArray;
PtrToStack CreateSatakArray(int maxSize);
bool IsSatckArrayEmpty(PtrToStack S);
void PushSatckArray(int x,PtrToStack S);
int PopStackArray(PtrToStack S);
void DestroyStackArray(PtrToStack S);
#endif // STACK_ARRAY

