#include "avltree.h"
#include "stdlib.h"
#include "iostream"
struct avlNode{
    int element;
    avlTree left;
    avlTree right;
    int height;
};
int height(avlTree T){//if a tree is empty, the height is -1
    if(T==nullptr)//规定空树的高度为－１；非空树的高度为左右子树较高者的高度加一
        return -1;
    else
        return T->height;
}
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
avlTree updateHeight(avlTree T){
    T->height=max(height(T->left),height(T->right))+1;
    return T;
}
avlTree leftSingleRotate(avlTree T){
    avlPosition k1=T;
    avlPosition k2=T->left;
    k1->left=k2->right;
    k2->right=k1;
    k1=updateHeight(k1);
    k2=updateHeight(k2);
    return k2;
}
avlTree rightSingleRotate(avlTree T){
    avlPosition k1=T;
    avlPosition k2=T->right;
    k1->right=k2->left;
    k2->left=k1;
    k1=updateHeight(k1);//it's very easy to forget!!! remeber it!!!
    k2=updateHeight(k2);
    return k2;

}
avlTree leftDoubleRotate(avlTree T){//可以作图进行更直观的观察；顾名思义，双旋转，就是进行两次单旋转
      T->left=rightSingleRotate(T->left);
      return leftSingleRotate(T);
}

avlTree rightDoubleRotate(avlTree T){
    T->right=leftSingleRotate(T->right);
    return rightSingleRotate(T);

}

avlTree makeAvlEmpty(avlTree T){
    if(T!=nullptr){
        makeAvlEmpty(T->left);
        makeAvlEmpty(T->right);
        free(T);
    }
    return nullptr;
}
avlTree insertToAvl(int x, avlTree T){
     if(T==nullptr){
        T=avlPosition(malloc(sizeof(avlNode)));
         if(T==nullptr)
         {
             std::cout<<"out of space!"<<std::endl;
             exit(-1);
         }
         T->element=x;
         T->height=0;
         T->left=nullptr;
         T->right=nullptr;
     }
     else if(x<T->element){
         T->left=insertToAvl(x,T->left);
         if((height(T->left)-height(T->right))>=2){
             if(x<T->left->element)
                 T=leftSingleRotate(T);
             else if(x>T->left->element)
                 T=leftDoubleRotate(T);
         }
     }
     else if(x>T->element){
        T->right=insertToAvl(x,T->right);
        if((height(T->right)-height(T->left)>=2)){
            if(x>T->right->element)
                T=rightSingleRotate(T);
            else if(x<T->right->element)
                T=rightDoubleRotate(T);
        }
     }
     T=updateHeight(T);
     return T;
}

void printAvlFirst(avlTree T){
    if(T!=nullptr){
        std::cout<<T->element<<std::endl;
        printAvlFirst(T->left);
        printAvlFirst(T->right);
    }
}
void printAvlMiddle(avlTree T){
    if(T!=nullptr){
        printAvlMiddle(T->left);
        std::cout<<T->element<<std::endl;
        printAvlMiddle(T->right);
    }
}
void printAvlBack(avlTree T){
    if(T!=nullptr){
        printAvlBack(T->left);
        printAvlBack(T->right);
        std::cout<<T->element<<std::endl;
    }
}

int leafCount(avlTree T){
    if(T==nullptr)
        return 0;
    else if(T->left==nullptr&&T->right==nullptr)
        return 1;
    else
        return leafCount(T->left)+leafCount(T->right);
}
