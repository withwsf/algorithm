#ifndef LIST_CURSOR
#define LIST_CURSOR

typedef int PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
static Position cursorMalloc();
static bool cursorFree(Position P);
List makeEmpty();
bool Insert(int x,Position P);
bool Delete(int x,List L);
Position Find(int x,List L);
Position FindPrevious(int x,List L);
List CreateCursorList();
void PrintList(List L);
struct Node{
    int element;
    int next;
};
void initlizeNodeList(int size);
#endif // LIST_CURSOR

