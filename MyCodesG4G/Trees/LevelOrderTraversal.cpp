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

class Queue{
public:
    int front,rear,s;
    Node **arr;
public:
    Queue(){
        front=rear=-1;s=10;
        arr=new Node*[s];
    }
    Queue(int s){
        front=rear=-1;this->s=s;
        arr=new Node*[this->s];
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return (rear+1)%s==front;
    }
    void add(Node *data){
        if(!isFull()){
            if(isEmpty()){
                front=rear=0;
                arr[rear]=data;
            }else{
                rear=(rear+1)%s;
                arr[rear]=data;
            }
        }else{
            cout<<"Queue is Full"<<endl;
        }
    }
    Node* remove(){
        if(isEmpty())return NULL;
        else{
            Node *temp=arr[front];
            if(front==rear){
                front=rear=-1;
            }else{
                front=(front+1)%s;
            }
            return temp;
        }
    }
    int size(){
        return (rear-front+s+1)%s;
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

int TotalNodes(Node *root){
    if(!root)return 0;
    int left=TotalNodes(root->left),right=TotalNodes(root->right);
    return left+right+1;
}

int max(int a,int b){
    return a>b?a:b;
}
int heightRecursive(Node *root){
    if(!root)return 0;
    int left=heightRecursive(root->left),right=heightRecursive(root->right);
    return 1+max(left,right);
}
int heightIterative(Node *root){
    if(!root)return 0;
    Queue Q(TotalNodes(root));
    Q.add(root);
    int ans=0;
    while(!Q.isEmpty()){
        int n=Q.size();
        ans++;
        while(n>0){
            root=Q.remove();
            if(root->left){
                Q.add(root->left);;
            }
            if(root->right){
                Q.add(root->right);;
            }
            n--;
        }
    }
    return ans;
}
//Level Order Traversals
void LevelOrderTraversalRecursiveHelper(Node *root,int level){
    if(root==NULL)return;
    if(level==1){
        cout<<root->data<<" ";
    }
    LevelOrderTraversalRecursiveHelper(root->left,level-1);
    LevelOrderTraversalRecursiveHelper(root->right,level-1);
}
void LevelOrderTraversalRecursive(Node *root){
    int h=heightRecursive(root);
    cout<<"LevelOrder Traversal Recursive:"<<endl;
    for(int i=1;i<=h;i++){
        LevelOrderTraversalRecursiveHelper(root,i);
        cout<<endl;
    }
}
void LevelOrderTraversalIterative(Node *root){
    if(!root)return;
    Queue Q(TotalNodes(root));
    Q.add(root);
    cout<<"LevelOrder Traversal Iterative: "<<endl;
    while(!Q.isEmpty()){
        int n=Q.size();
        while(n>0){
            root=Q.remove();
            cout<<root->data<<" ";
            if(root->left){
                Q.add(root->left);;
            }
            if(root->right){
                Q.add(root->right);;
            }
            n--;
        }
        cout<<endl;
    }
}
//LevelOrder Traversal Spiral
void LevelOrderTraversalSpiralRecursiveHelper(Node *root,int level,bool f){
    if(root==NULL)return;
    if(level==1){
        cout<<root->data<<" ";
    }
    if(f){
        LevelOrderTraversalSpiralRecursiveHelper(root->left,level-1,f);
        LevelOrderTraversalSpiralRecursiveHelper(root->right,level-1,f);
    }else{
        LevelOrderTraversalSpiralRecursiveHelper(root->right,level-1,f);
        LevelOrderTraversalSpiralRecursiveHelper(root->left,level-1,f);
    }
}
void LevelOrderTraversalSpiralRecursive(Node *root){
    int h=heightRecursive(root);
    cout<<"LevelOrder Traversal Spiral Recursive:"<<endl;
    bool f=false;
    for(int i=1;i<=h;i++){
        LevelOrderTraversalSpiralRecursiveHelper(root,i,f);
        f=!f;
        cout<<endl;
    }
}

void LevelOrderTraversalSpiralIterative(Node *root){
    if(!root)return;
    int n=TotalNodes(root);
    cout<<"LevelOrder Traversal Spiral Iterative: "<<endl;
    Stack s1(n),s2(n);
    u666666s1.push(root);
    while(!s1.isEmpty() || !s2.isEmpty()){
        while(!s1.isEmpty()){
            root=s1.pop();
            cout<<root->data<<" ";
            if(root->right)s2.push(root->right);
            if(root->left)s2.push(root->left);
        }cout<<endl;
        while(!s2.isEmpty()){
            root=s2.pop();
            cout<<root->data<<" ";
            if(root->left)s1.push(root->left);
            if(root->right)s1.push(root->right);
        }cout<<endl;
    }
}
//Queue & a stack
void LevelOrderTraversalSpiralIterativeQueueType(Node *root){
	if(!root)return;
	int n=TotalNodes(root);
	Queue Q(n);
	Stack S(n);
	Q.add(root);
	bool f=true;
	cout<<"LevelOrder Traversal Spiral Iterative Queue Type: "<<endl;
	while(!Q.isEmpty()){
		int n1=Q.size();
		while(n1--){
			Node *curr=Q.remove();
			S.push(curr);
			cout<<curr->data<<" ";
		}
		cout<<endl;
		while(!S.isEmpty()){
			Node *curr=S.pop();
			if(!f){
				if(curr->right)Q.add(curr->right);
				if(curr->left)Q.add(curr->left);
			}else{
				if(curr->left)Q.add(curr->left);
				if(curr->right)Q.add(curr->right);
			}
		}

		f=!f;
	}
}

void mirror(Node *root){
    if(root){
        mirror(root->left);
        mirror(root->right);
        Node *temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
}


int diam=0;
int diameter(Node *root){
    //static int diam=0;
    if(root==NULL)return 0;
    int lh=heightRecursive(root->left),rh=heightRecursive(root->right);
    int ld=diameter(root->left),rd=diameter(root->right);
    diam=max(max(ld,rd),max(diam,1+lh+rh));
    return max(max(ld,rd),1+lh+rh);
}

int diameterBest(Node *root,int *h){
    if(root==NULL){
        *h=0;
        return 0;
    }
    int lh=0,rh=0;
    int ld=diameterBest(root->left,&lh),rd=diameterBest(root->right,&rh);
    *h=1+max(lh,rh);
    return max(1+lh+rh,max(ld,rd));
}


int main()
{
    Node *tree=new Node[8];
    for(int i=0;i<=7;i++){
        tree[i].data=i;
    }
    for(int i=1;i<4;i++){
        tree[i].left=&tree[i*2];
        tree[i].right=&tree[i*2+1];
    }
    tree[0].data=8;
    tree[7].left=&tree[0];

    cout<<"Total Nodes= "<<TotalNodes(&tree[1])<<endl;
    LevelOrderTraversalRecursive(&tree[1]);
    LevelOrderTraversalIterative(&tree[1]);
    cout<<"Height= "<<heightIterative(&tree[1])<<endl;

    LevelOrderTraversalSpiralRecursive(&tree[1]);
    LevelOrderTraversalSpiralIterative(&tree[1]);
    LevelOrderTraversalSpiralIterativeQueueType(&tree[1]);

    mirror(&tree[1]);cout<<"Mirror of tree: "<<endl;
    LevelOrderTraversalIterative(&tree[1]);
    diameter(&tree[1]);int ans=0;
    cout<<"Diameter= "<<diam<<" Best Approach= "<<diameterBest(&tree[1],&ans)<<endl;
}
*/
