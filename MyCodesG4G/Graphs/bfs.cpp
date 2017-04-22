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

int **adj,V,M;
bool *visited;

int main(){
    //int V,M;
    cin>>V>>M;
    visited=new bool[V+1];
    adj=new int*[V+1];
    for(int i=0; i<=V; i++)
    {
        adj[i]=new int[V+1];
        visited[i]=false;
    }
    for(int i=0; i<=V; i++)
    {
        for(int j=0; j<=V; j++)
        {
            adj[i][j]=0;
        }
}

for(int i=0; i<M; i++)
{
    int a,b;
    cin>>a>>b;
    adj[a][b]=1;
    adj[b][a]=1;
}
    Queue Q(V);
    Q.add(1);

    while(!Q.isEmpty()){
        int v=Q.remove();
        visited[v]=true;
        cout<<" "<<v;
        for(int i=1;i<=V;i++){
            if(adj[v][i]==1 && !visited[i] && !Q.check(i)){
                Q.add(i);
            }
        }
    }


    cout<<endl;
    system("pause");
    return 0;
}
*/
