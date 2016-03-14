#ifndef BINARYSEARCHTREE
#define BINARYSEARCHTREE
struct treeNode;
typedef treeNode* PtrToTree;
typedef PtrToTree searchTree;
typedef PtrToTree Position;
searchTree makeEmpty(searchTree T);
searchTree insert(int x,searchTree T);
Position find(int x,searchTree T);
Position findmax(searchTree T);
Position findmin(searchTree T);
searchTree delete_node(int x, searchTree T);
#endif // BINARYSEARCHTREE

