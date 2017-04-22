#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
bool isSumTree(struct node* node,int *s){

	if(node == NULL){
        *s=0;
		return true;
	}else if(node->left==NULL && node->right==NULL){
	    *s=node->data;
		return true;
	}
	int l=0,r=0;
	bool flag=isSumTree(node->left,&l) && isSumTree(node->right,&r);

    if(!flag)return false;
    *s=l+r+node->data;
    return l+r==node->data;
}

struct node* newNode(int data)
{
	struct node* node =
		(struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

bool isSumTreeMain(node *root){
    int x=0;
    return isSumTree(root,&x);
}

int main()
{
	struct node *root = newNode(26);
	root->left		 = newNode(10);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(6);
	root->right->right = newNode(3);
	if(isSumTreeMain(root))
		printf("The given tree is a SumTree ");
	else
		printf("The given tree is not a SumTree ");
	return 0;
}

