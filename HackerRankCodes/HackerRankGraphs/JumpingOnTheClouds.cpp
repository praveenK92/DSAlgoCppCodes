/*#include<iostream>
using namespace std;
class Queue{
public:
    int n,front,rear,*arr;
public:
    Queue(int x){
        n=x;
        arr=new int[n];
        front=rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    void add(int d){
        if(front==-1){
            front=rear=0;
            arr[rear]=d;
        }
        else{
            rear=(rear+1)%n;
            arr[rear]=d;
        }
    }
    int remove(){
        int t=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }
        return t;
    }
    bool check(int x){
        for(int i=front;i<=rear;){
            if(arr[i]==x)return true;
            i=(i+1)%n;
        }
        return false;
    }
};
int *arr,*sol;
bool *vis;

int main(){
    int N;
    cin>>N;
    arr=new int[N+1];
    sol=new int[N+1];
    vis=new bool[N+1];
    for(int i=1;i<=N;i++){
        arr[i]=-1;
        sol[i]=-1;
        vis[i]=false;
        cin>>arr[i];
    }
    Queue Q(N);
    Q.add(1);
    sol[1]=0;
    vis[1]=true;
    while(!Q.isEmpty()){
        int v=Q.remove();
        if(v+1<=N && !vis[v+1] && arr[v+1]==0){
            sol[v+1]=sol[v]+1;
            vis[v+1]=true;
            Q.add(v+1);
        }
        if(v+2<=N && !vis[v+2] && arr[v+2]==0){
            sol[v+2]=sol[v]+1;
            vis[v+2]=true;
            Q.add(v+2);
        }
    }
    cout<<sol[N]<<endl;

    return 0;
}*/
