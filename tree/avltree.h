#ifndef AVLTREE
#define AVLTREE
struct avlNode;
typedef struct avlNode* PtrToAvlNode;
typedef PtrToAvlNode avlTree;
typedef PtrToAvlNode avlPosition;
avlTree makeAvlEmpty(avlTree T);
avlTree insertToAvl(int x,avlTree T);
avlPosition findInAvl(int x,avlTree T);
avlPosition findAvlMax(avlTree T);
avlPosition findAvlMin(avlTree T);
avlTree deleteNodeInAvll(int x,avlTree);

#endif // AVLTREE

