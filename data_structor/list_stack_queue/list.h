#ifndef LIST_H
#define LIST_H
struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
List MakeEmpty();
List CreateList();
bool IsEmpty(List L);
bool IsLast(Position P);
bool Insert(int x,List L,Position P);
bool Delete(int x,List L);
Position Find(int x,List L);
Position FindPrevious(int x,List L);
void PrintList(List L);
struct Node{
  int element;
  Position next;
};
#endif // LIST_H

