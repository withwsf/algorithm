#include "binarysearchtree.h"
#include "stdexcept"
#include "iostream"
using std::overflow_error;
using std::cout;
using std::cin;
using std::endl;
struct treeNode{
    int val;
    Position left;
    Position right;
};
searchTree makeEmpty(searchTree T){
    if(T!=nullptr){
        makeEmpty(T->left);
        makeEmpty(T->right);
        free(T);
    }
    return nullptr;
}
/*searchTree insert(int x, searchTree T){
    if(T!=nullptr){
    if(x<T->val){
        if(T->left==nullptr)
         {
            Position P=Position(malloc(sizeof(treeNode)));
            P->val=x;
            P->left=nullptr;
            P->right=nullptr;
            T->left=P;
        }
        else{
            insert(x,T->left);
        }
    }
    else if(x>T->val){
        if(T->right==nullptr)
         {
            Position P=Position(malloc(sizeof(treeNode)));
            P->val=x;
            P->left=nullptr;
            P->right=nullptr;
            T->right=P;
        }
        else{
            insert(x,T->right);
        }

    }
   }
   else{
        Position P=Position(malloc(sizeof(treeNode)));
        P->val=x;
        P->left=nullptr;
        P->right=nullptr;
        T=P;
    }
    return T;
}*/
searchTree insert(int x, searchTree T){
    if(T==nullptr){
        Position P=Position(malloc(sizeof(treeNode)));
        if(P==nullptr)
            overflow_error("out of space!!!");
        P->val=x;
        P->left=nullptr;
        P->right=nullptr;
        T=P;
    }
    else if(x<T->val)
        T->left=insert(x,T->left);//important, easy to forget!!!
    else if(x>T->val)
        T->right=insert(x,T->right);//important, easy to forget!!!
    return T;//do not forget
}
Position find(int x, searchTree T){
    if(T==nullptr)
        return nullptr;
    else if(x==T->val)
        return T;
    else if(x<T->val)
        return find(x,T->left);
    else
        return find(x,T->right);
}
Position findmax(searchTree T){
    if(T==nullptr)
        return nullptr;
    else if(T->right==nullptr)
        return T;
    else
        return findmax(T->right);
}
Position findmin(searchTree T){
    if(T==nullptr)
        return nullptr;
    else if(T->left==nullptr)
        return T;
    else
        return findmin(T->left);
}
/*searchTree delete_node(int x, searchTree T){
    Position P=find(x,T);//has problem!!!
    if(P==nullptr)
        overflow_error("error, not found!!!");
    if(P->left==nullptr&&P->right==nullptr)
        free(P);
    else if(P->left==nullptr){
        Position temp=P->right;
        P->val=temp->val;
        P->left=temp->left;
        P->right=temp->right;
        free(temp);
    }
    else if(P->right==nullptr){
        Position temp=P->left;
        P->val=temp->val;
        P->left=temp->left;
        P->right=temp->right;
        free(temp);
    }
    else{
        Position temp=findmin(P->right);
        P->val=temp->val;
        delete_node(temp->val,temp);

    }
    return T;
}*/



searchTree delete_node(int x, searchTree T){
    if(T==nullptr)
        overflow_error("not find!");
    else if(x<T->val)
        T->left=delete_node(x,T->left);//also wrong here
    else if(x>T->val)
        T->right=delete_node(x,T->right);
    else{
        if(T->left!=nullptr&&T->right!=nullptr){
            Position P=findmin(T->right);
            T->val=P->val;
            T->right=delete_node(P->val,T->right);
        }
        else{
            /*if(T->left==nullptr&&T->right==nullptr)
            {    free(T);
                 T=nullptr;
            }
            else{
            Position P=T;
            if(T->right!=nullptr)
             T=T->right;
            if(T->left!=nullptr)
             T=T->left;
            free(P);
            }*/

            Position TempCell;
            TempCell=T;//full of tricks
            if(T->left==nullptr)
                T=T->right;
            else if(T->right==nullptr)
                T=T->left;
            free(TempCell);
        }
    }
    return T;
}
