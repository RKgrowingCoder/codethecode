#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int d)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=d;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
void postorder(struct node *ptr)
{
    if(ptr!=NULL)
    {
    printf("%d ",ptr->data);
    postorder(ptr->right);
    postorder(ptr->left);
    }
}
int main()
{
    struct node *r=create(4);
    r->left=create(5);
    r->right=create(8);
    r->left->left=create(2);
    r->left->left->left=create(3);
    postorder(r);
}

