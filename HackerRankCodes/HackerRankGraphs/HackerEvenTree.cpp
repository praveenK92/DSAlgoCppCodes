/*#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
public:
    Node(){
        next=NULL;
        data=-1;
    }
    Node(int d){
        data=d;
        next=NULL;
    }
    void insert(int data){
        Node *t=new Node(data);
        if(next==NULL){
            next=t;
        }else{
            t->next=next;
        }
        next=t;
    }
    void del(int d){
        Node *t=next,*prev=next;
        while(t!=NULL && t->data!=d){
            prev=t;
            t=t->next;
        }
        if(t==NULL)return;
        prev->next=t->next;
        //delete(t);
    }
};

class Edge{
public:
    int x,y;bool tak;
public:
    Edge(){
        x=-1;y=-1;tak=false;
    }
    Edge(int a,int b){
        x=a;y=b;tak=false;
    }
};

int N,M;
bool *vis;
Edge *ed;
bool **adj;

int DFS(int v){
    vis[v]=true;
    int co=1;
    for(int i=0;i<N;i++){
        if(adj[v][i] && !vis[i]){
            co+=DFS(i);
        }
    }
    vis[v]=false;
    return co;
}

int main(){
    cin>>N>>M;
    adj=new bool*[N];
    vis=new bool[N];
    ed=new Edge[M];

    for(int i=0;i<N;i++){
        vis[i]=false;
        adj[i]=new bool[N];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            adj[i][j]=false;
        }
    }

    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        ed[i].x=a-1;ed[i].y=b-1;ed[i].tak=false;
        adj[a-1][b-1]=true;
        adj[b-1][a-1]=true;
    }
    for(int i=0;i<M;i++){
        int x=ed[i].x,y=ed[i].y;
        adj[x][y]=false;adj[y][x]=false;
        if(DFS(x)%2==0 && DFS(y)%2==0){
            ed[i].tak=true;
        }else{
            adj[x][y]=true;adj[y][x]=true;
        }
    }
    int ans=0;
    for(int i=0;i<M;i++){
        if(ed[i].tak)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
*/
