/*#include <iostream>
#include<stdio.h>
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
};

int n,m;
Node *adj;
int DFS(int v,bool *vis){
    vis[v]=true;
    Node *temp=adj[v].next;
    int c=1;
    while(temp!=NULL && !vis[temp->data]){
        c+=DFS(temp->data,vis);
        temp=temp->next;
    }
    return c;
}

int main()
{
    cin>>n>>m;
    adj=new Node[n];
    bool vis[n];
    int TotalSet[n];
    for(int i=0;i<n;i++){
        vis[i]=false;
        TotalSet[i]=0;
        adj[i].data=i;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int v=DFS(i,vis);
            TotalSet[c++]=v;
        }
    }
    //sort(TotalSet,TotalSet+n,greater<int>());

    long ans=0;
    for(int i=0;i<n;i++){
        if(TotalSet[i]==0)break;
        for(int j=i+1;j<n;j++){
            if(TotalSet[j]==0)break;
            else ans+=TotalSet[i]*TotalSet[j];
        }
    }
    cout<<ans<<endl;

    return 0;
}
*/
