

#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

node* create_node(int x)
{
    struct node* new_node = (node*) malloc(sizeof(struct node));
    new_node->data=x;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}


node* insert_node(node* root,int x)
{
    if(root==NULL)
    {
       return create_node(x);
    }

    if(x>=root->data)
    {
        root->right=insert_node(root->right,x);
    }
    else
    {
        root->left=insert_node(root->left,x);
    }


    return root;
}



void inorder_traversal(node *root)
{
    if(root)
    {
        inorder_traversal(root->left);
        cout << root->data <<" ";
        inorder_traversal(root->right);
    }

}


void preorder_traversal(node* root)
{
    if(root)
    {
        cout << root->data <<" ";
        inorder_traversal(root->left);
        inorder_traversal(root->right);
    }
}

void postorder_traversal(node* root)
{
    if(root)
    {
        inorder_traversal(root->left);
        inorder_traversal(root->right);
        cout << root->data <<" ";
    }
}

struct node* search_tree(struct node* root,int x)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->data==x)
    {
        return root;
    }
    else if(x>=root->data)
    {
        return search_tree(root->right,x);
    }
    else
    {
        return search_tree(root->left,x);
    }
}



struct node * minValueNode(struct node* root)
{
   if(root==NULL)
   {
       return NULL;
   }

    if(root->left==NULL)
    {
        return root;
    }

    minValueNode(root->left);
}

node* delete_node(node* root,int x)
{
    if(root==NULL)
    {
        return root;
    }

    if(root->data>=x)
    {
        root->right=delete_node(root->right,x);
    }
    else if(root->data<x)
    {
        root->left=delete_node(root->left,x);
    }

    else
    {
        if(root->left!=NULL && root->right!=NULL)
        {
            struct node* tre=minValueNode(root->right);
            root->data=tre->data;
            root->right=delete_node(root->right,root->data);
            return root;

        }
        else if(root->left==NULL)
        {
            root=root->right;
            return root;

        }
        else if(root->right==NULL)
        {
            root=root->left;
            return root;
        }
        else if(root->left=NULL && root->right==NULL)
        {
            return NULL;
        }

    }

    return root;
}
int main()
{
    struct node *root = NULL;
    root = insert_node(root, 50);
    root=insert_node(root,10);
    root=insert_node(root,20);
    root=insert_node(root,40);
    root=insert_node(root,100);
    inorder_traversal(root);
    cout <<"\n";
    cout<<search_tree(root,200)<<"\n";
    root=delete_node(root,20);
    inorder_traversal(root);
}

