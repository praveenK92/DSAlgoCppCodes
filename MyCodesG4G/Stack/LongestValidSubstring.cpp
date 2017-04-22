/*#include<iostream>
#include<stdio.h>
#define MIN -999
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

char *ch;
int maxX;
int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Stack/StackInputOutput/LongestValidSubstring.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        ch=new char[n];
        cin>>ch;
        maxX=MIN;
        //int n=sizeof(ch)/sizeof(ch[0]);
        cout<<ch<<endl;
        Stack s(n);
        s.push(-1);
        for(int i=0;i<n;i++){
            char c=ch[i];
            if(c=='('){
                s.push(i);
            }else{
                s.pop();
                if(!s.isEmpty()){
                    maxX=max1(maxX,i-s.peek());
                }else{
                    s.push(i);
                }
            }
        }
        cout<<"Case #"<<t<<": "<<maxX<<endl;
    }
    return 0;
}*/
