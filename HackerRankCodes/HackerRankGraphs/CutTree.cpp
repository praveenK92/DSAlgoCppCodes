/*#include <iostream>
#include<stdio.h>
#include<cmath>
#define MAX 9999999
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
            return;
        }

        Node *tt=next;
        while(tt->next!=NULL){
            tt=tt->next;
        }
        tt->next=t;
    }

    void remove(int d){
        Node *t=next,*prev=this;
        while(t->next!=NULL && t->data!=d){
            prev=t;
            t=t->next;
        }
        prev->next=t->next;
    }
};

long min(long a,long b){
    return a<b?a:b;
}
void printArray(long *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int n;
long **nodes,total,ans;
bool *vis;
Node *adj;

long DFS(int v){
    vis[v]=true;
    long c=nodes[v][0];
    Node *t=adj[v].next;

    while(t!=NULL){
        if(!vis[t->data])c+=DFS(t->data);
        t=t->next;
    }
    nodes[v][1]=c;
    return c;
}
void DFS2(int v){
    vis[v]=true;
    Node *t=adj[v].next;
    while(t!=NULL){
        if(!vis[t->data]){
            long a1=nodes[t->data][1];
            long a2=total-a1;
            ans=min(ans,abs(a1-a2));
            DFS2(t->data);
        }
        t=t->next;
    }
}

int main()
{
    cin>>n;
    nodes=new long*[n];
    adj=new Node[n];
    vis=new bool[n];
    total=0;

    for(int i=0;i<n;i++){
        int a;cin>>a;
        nodes[i]=new long[2];
        nodes[i][0]=a;
        total+=a;
        vis[i]=false;
        adj[i].data=a;
    }

    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        adj[a-1].insert(b-1);
        adj[b-1].insert(a-1);
    }
    DFS(0);
    for(int i=0;i<n;i++){
        vis[i]=false;
    }
    ans=MAX;
    DFS2(0);
    cout<<ans<<endl;
    return 0;
}
*/
