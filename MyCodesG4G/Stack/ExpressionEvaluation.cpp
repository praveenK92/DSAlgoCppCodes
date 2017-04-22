/*#include<iostream>
#include<stdio.h>
using namespace std;

class StackChar{
public:
    int top,s;
    char *arr;
public:
    StackChar(){
        top=-1;s=10;
        arr=new char[s];
    }
    StackChar(int s){
        this->s=s;
        top=-1;
        arr=new char[s];
    }
    void push(char data){
        if(!isFull()){
            arr[++top]=data;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    char peek(){
        return arr[top];
    }
    char pop(){
        if(!isEmpty()){
            return arr[top--];
        }else{
            return 's';
        }
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==s-1;
    }
};
class StackInt{
public:
    int top,s,*arr;
public:
    StackInt(){
        top=-1;s=10;
        arr=new int[s];
    }
    StackInt(int s){
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

bool isDigit(char c){
    int cc=c-'0';
    if(cc>=0 && cc<=9)return true;
    else return false;
}
int hasPrecedence(char c){
    switch(c){
        case'+':return 1;
        case'-':return 1;
        case'*':return 2;
        case'/':return 3;
        case'(':return 0;
        default:return 10;
    }
}
int result(int a,int b,char c){
    switch(c){
        case'+':return a+b;
        case'-':return b-a;
        case'*':return a*b;
        case'/':return b/a;
        default:return -1;
    }
}
int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Stack/StackInputOutput/ExpressionEvaluation.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        char ch[n];
        StackChar op(n);
        StackInt opV(n);
        cin>>ch;
        cout<<"Case #"<<t<<": "<<endl;
        for(int i=0;i<n;i++){
            char c=ch[i];
            if(isDigit(c)){
                opV.push(c-'0');
                continue;
            }else{
                if(op.isEmpty() || c=='('){
                    op.push(c);
                    continue;
                }
                else if(c==')'){
                    while(op.peek()!='('){
                        char temp=op.pop();
                        int a=opV.pop(),b=opV.pop(),c1;
                        c1=result(a,b,temp);
                        cout<<"Operation: "<<b<<temp<<a<<" = "<<c1<<endl;
                        opV.push(c1);
                    }
                    op.pop();
                    continue;
                }

                while(!op.isEmpty() && hasPrecedence(c)<hasPrecedence(op.peek())){
                    char temp=op.pop();
                    int a=opV.pop(),b=opV.pop(),c1;
                    c1=result(a,b,temp);
                    cout<<"Operation: "<<b<<temp<<a<<" = "<<c1<<endl;
                    opV.push(c1);
                }
                op.push(c);
            }
        }
        while(!op.isEmpty()){
            char temp=op.pop();
            int a=opV.pop(),b=opV.pop(),c1;
            c1=result(a,b,temp);
            cout<<"Operation: "<<b<<temp<<a<<" = "<<c1<<endl;
            opV.push(c1);
        }
        int res=opV.pop();
        if(!opV.isEmpty())res=-1;

        cout<<ch<<"="<<res<<endl<<endl;
    }
    return 0;
}
*/
