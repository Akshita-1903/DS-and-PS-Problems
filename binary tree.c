#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;

}node;
struct node*getNzaode(int val)
{
    struct node*p;
    p=malloc(sizeof(struct node));
    p->data=val;
    p->left=NULL;
    p->right=NULL;

   return p;

}
void Preorder(struct node*root){
if(root!=NULL)
{
    printf("%d",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
else
    return;
}
void Postorder(struct node*root){
if(root!=NULL)
{
    Postorder(root->left);
    Postorder(root->right);
    printf("%d",root->data);
    }
    else
        return;
}
void Inorder(struct node*root){
if(root!=NULL)
{
    Inorder(root->left);
    Inorder(root->right);
    printf("%d",root->data);
    }
    else
        return;
}
void main()
{

struct node* root = getNode(1);
    root->left =getNode(2);
    root->right = getNode(3);
    root->left->left = getNode(4);
    root->left->right = getNode(5);

 printf("\nPreorder traversal of binary tree is \n");
    Preorder(root);
     printf("\nPostorder traversal of binary tree is \n");
    Postorder(root);
     printf("\nInorder traversal of binary tree is \n");
    Inorder(root);
}

