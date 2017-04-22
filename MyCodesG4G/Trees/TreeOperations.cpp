/*#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;
public:
    Node(){
        data=-1;
        left=right=NULL;
    }
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
class Stack{
public:
    int top,s;
    Node **arr;
public:
    Stack(){
        s=10;top=-1;arr=new Node*[s];
    }
    Stack(int siz){
        s=siz;top=-1;arr=new Node*[s];
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==s-1;
    }
    void push(Node *node){
        if(!isFull()){
            arr[++top]=node;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    Node* pop(){
        if(!isEmpty()){
            Node *temp=arr[top--];
            return temp;
        }else{
            return NULL;
        }
    }
    Node* peek(){
        if(!isEmpty()){
            Node *temp=arr[top];
            return temp;
        }else{
            return NULL;
        }
    }
};

void preOrderRecursive(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrderRecursive(root->left);
        preOrderRecursive(root->right);
    }
}
void inOrderRecursive(Node *root){
    if(root!=NULL){
        inOrderRecursive(root->left);
        cout<<root->data<<" ";
        inOrderRecursive(root->right);
    }
}
void postOrderRecursive(Node *root){
    if(root!=NULL){
        postOrderRecursive(root->left);
        postOrderRecursive(root->right);
        cout<<root->data<<" ";
    }
}

int TotalNodes(Node *root){
    if(!root)return 0;
    int left=TotalNodes(root->left),right=TotalNodes(root->right);
    return left+right+1;
}
int TotalNodesIterative(Node *root){
    if(root==NULL)return 0;
    int ans=0;
    Stack s(10);
    while(1){
        if(root!=NULL){
            ans++;
            s.push(root);
            root=root->left;
        }else{
            if(!s.isEmpty()){
                root=s.pop();
                //ans++;
                root=root->right;
            }else {
                break;
                }
        }
    }
    return ans;
}

void preOrderIterative(Node *root){
    if(root==NULL)return;
    Stack s(TotalNodes(root));
    Node *curr=root;
    cout<<"PreOrder Traversal: ";
    while(true){
        if(curr!=NULL){
            cout<<curr->data<<" ";
            s.push(curr);
            curr=curr->left;
        }else{
            if(!s.isEmpty()){
                curr=s.pop();
                curr=curr->right;
            }else{
                break;
            }

        }
    }
    cout<<endl;
}
void inOrderIterative(Node *root){
    if(root==NULL)return;
    Stack s(TotalNodes(root));
    Node *curr=root;
    cout<<"Inorder Traversal: ";
    while(true){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }else{
            if(!s.isEmpty()){
                curr=s.pop();
                cout<<curr->data<<" ";
                curr=curr->right;
            }else{
                break;
            }

        }
    }
    cout<<endl;
}
void postOrderIterative1(Node *root){
    if(root==NULL)return;
    int n=TotalNodes(root);
    Stack s1(n),s2(n);
    Node *curr=root;
    s1.push(curr);
    cout<<"PostOrder Traversal: ";
    while(!s1.isEmpty()){
        curr=s1.pop();
        s2.push(curr);
        if(curr->left)s1.push(curr->left);
        if(curr->right)s1.push(curr->right);
    }
    while(!s2.isEmpty()){
        curr=s2.pop();
        cout<<curr->data<<" ";
    }
    cout<<endl;
}
void postOrderIterative2(Node *root){
    if(root==NULL)return;
    int n=TotalNodes(root);
    Stack s(n);
    Node *curr=root;
    cout<<"PostOrder Traversal: ";
    while(true){
        if(curr){
            if(curr->right)s.push(curr->right);
            s.push(curr);
            curr=curr->left;
        }else{
            if(!s.isEmpty()){
                curr=s.pop();
                if(!curr->right){
                    cout<<curr->data<<" ";
                    curr=NULL;
                }
                else if(curr->right && curr->right!=s.peek()){
                    cout<<curr->data<<" ";
                    curr=NULL;
                }else if(curr->right && curr->right==s.peek()){
                    s.pop();
                    s.push(curr);
                    curr=curr->right;
                }
            }else break;
        }
    }

    cout<<endl;
}

int max(int a,int b){
    return a>b?a:b;
}
int heightRecursive(Node *root){
    if(!root)return 0;
    int left=heightRecursive(root->left),right=heightRecursive(root->right);
    return 1+max(left,right);
}

int main()
{
    Node *tree=new Node[8];
    for(int i=1;i<=7;i++){
        tree[i].data=i;
    }
    for(int i=1;i<4;i++){
        tree[i].left=&tree[i*2];
        tree[i].right=&tree[i*2+1];
    }
    cout<<"Total Nodes= "<<TotalNodes(&tree[1])<<endl;
    //cout<<"PreOrder Traversal: ";
    //preOrderRecursive(&tree[1]);cout<<endl<<"Inorder Traversal: ";
    //inOrderRecursive(&tree[1]);cout<<endl<<"PostOrder Traversal: ";
    //postOrderRecursive(&tree[1]);cout<<endl;

    preOrderIterative(&tree[1]);
    inOrderIterative(&tree[1]);
    postOrderIterative1(&tree[1]);
    postOrderIterative2(&tree[1]);
    cout<<"Height Of Tree: "<<heightRecursive(&tree[1]);
}
*/
