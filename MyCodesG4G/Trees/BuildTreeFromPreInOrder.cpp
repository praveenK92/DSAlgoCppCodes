/*#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct node
{
    char data;
    struct node* left;
    struct node* right;
};

int search(char arr[], int strt, int end, char value);
struct node* newNode(char data);

struct node* buildTree(char in[], char pre[], int l, int h)
{
    static int p = 0;

    if(l > h)
        return NULL;

    struct node *curr = newNode(pre[p]);

    if(l == h){
        p++;
        return curr;
    }
    int x=l;
    for(int i=l;i<=h;i++){
        if(in[i]==pre[p]){
            x=i;break;
        }
    }
    p++;
    curr->left = buildTree(in, pre, l, x-1);
    curr->right = buildTree(in, pre, x+1, h);
    return curr;
}

struct node* newNode(char data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
void printInorder(struct node* node){
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%c ", node->data);
    printInorder(node->right);
}

int main(){
    char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
    int len = sizeof(in)/sizeof(in[0]);
    struct node *root = buildTree(in, pre, 0, len - 1);

    printf("Inorder traversal of the constructed tree is \n");
    printInorder(root);
    return 0;
}
*/
