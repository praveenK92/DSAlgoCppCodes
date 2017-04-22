/*#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
class StackNode{
public:
	int data;
	struct StackNode* next;
};
class Stack{
private:
    StackNode *root;
    StackNode* newNode(int data){
    	struct StackNode* stackNode =
    			(struct StackNode*) malloc(sizeof(struct StackNode));
    	stackNode->data = data;
    	stackNode->next = NULL;
    	return stackNode;
    }
public:
    Stack(){
        root=NULL;
    }
    int isEmpty(struct StackNode *root){
    	return !root;
    }
    void push(int data){
    	struct StackNode* stackNode = newNode(data);
    	stackNode->next =root;
    	root = stackNode;
    	printf("%d pushed to stack\n", data);
    }
    int pop(){
    	if (!root)
    		return INT_MIN;
    	StackNode* temp = root;
    	root = root->next;
    	int popped = temp->data;
    	free(temp);

    	return popped;
    }
    int peek(){
    	if (isEmpty(root))
    		return INT_MIN;
    	return root->data;
    }
};

int main(){
    Stack *s=new Stack();
    s->push(10);
    s->push(20);
    s->push(30);

	printf("%d popped from stack\n", s->pop());

	printf("Top element is %d\n", s->peek());

	return 0;
}
*/
