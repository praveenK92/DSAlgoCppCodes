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

int *arr,*sol;
int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Stack/StackInputOutput/NextGreaterElement.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        arr=new int[n];
        sol=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sol[i]=-1;
        }
        Stack s(n);
        s.push(0);
        for(int i=1;i<n;i++){
            if(!s.isEmpty()){
                int v=s.pop();
                while(arr[v]<arr[i]){
                    sol[v]=arr[i];
                    if(!s.isEmpty())v=s.pop();
                    else break;
                }
                if(arr[v]>=arr[i])s.push(v);
            }
            s.push(i);
        }

        cout<<"Case #"<<t<<": "<<endl;
        for(int i=0;i<n;i++)cout<<sol[i]<<" ";
        cout<<endl;
    }
    return 0;
}*/
