#ifndef STACK_LINKED_LIST
#define STACK_LINKED_LIST
struct Node;
typedef struct Node* Stack;
Stack CreatStack();
void Push(int x,Stack S);
bool IsSatckEmpty(Stack S);
void ClearStack(Stack S);
int Top(Stack S);
int Pop(Stack S);
#endif // STACK_LINKED_LIST

