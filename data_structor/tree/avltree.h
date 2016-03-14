#ifndef AVLTREE
#define AVLTREE
//不要忘了更新高度
struct avlNode;//声明结构体
typedef struct avlNode* PtrToAvlNode;
typedef PtrToAvlNode avlTree;
typedef PtrToAvlNode avlPosition;
avlTree makeAvlEmpty(avlTree T);//清空一个ａｖｌ树
avlTree insertToAvl(int x,avlTree T);//插入到ａｖｌ书中，插入之后可能导致ａｖｌ条件不满足，当插入之后左右子树的高度差超过１时
//可以进行分情况的讨论
avlPosition findInAvl(int x,avlTree T);//同二叉树
avlPosition findAvlMax(avlTree T);//同二叉树
avlPosition findAvlMin(avlTree T);//同二叉树
avlTree deleteNodeInAvll(int x,avlTree);//使用lazy delete
void printAvlFirst(avlTree T);
void printAvlMiddle(avlTree T);
void printAvlBack(avlTree T);
int leafCount(avlTree T);

#endif // AVLTREE

