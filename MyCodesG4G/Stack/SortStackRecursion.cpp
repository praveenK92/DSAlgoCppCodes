/*#include<iostream>
#include<stdio.h>
using namespace std;

class Stack{
public:
    int top,s,*arr;
public:
    Stack(){
        top=-1;s=10;
        arr=new int[s];
    }
    Stack(int s){
        this->s=s;
        top=-1;
        arr=new int[s];
    }
    void push(int data){
        if(!isFull()){
            arr[++top]=data;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    int peek(){
        return arr[top];
    }
    int pop(){
        if(!isEmpty()){
            return arr[top--];
        }else{
            return -1;
        }
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==s-1;
    }
};

int max1(int a,int b){
    return a>b?a:b;
}
Stack *s;

void SortedInsert(Stack *s1,int d){

    if(s1->isEmpty() || d<s1->peek()){
        s1->push(d);
        return;
    }
    int t=s1->pop();
    SortedInsert(s1,d);
    s1->push(t);
}

void RecursiveSort(Stack *s1){
    if(!s1->isEmpty()){
        int temp=s1->pop();
        RecursiveSort(s1);
        SortedInsert(s1,temp);
    }
}


int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Stack/StackInputOutput/StackRecursiveSort.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,t1;
        cin>>n;
        //s=new Stack(n);
        //Stack *s=(Stack*)malloc(sizeof(Stack));
        Stack s(n);
        for(int i=0;i<n;i++){
            cin>>t1;
            s.push(t1);
        }
        RecursiveSort(&s);

        cout<<"Case #"<<t<<": "<<endl;
        while(!s.isEmpty()){
            cout<<s.pop()<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
