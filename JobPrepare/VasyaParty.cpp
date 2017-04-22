/*#include<iostream>
#define MOD 1000000007
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
long *know,currMax,total;
Node *adj;

void DFS(int v,bool *vis){
    vis[v]=true;
    Node *temp=adj[v].next;
    while(temp!=NULL){
        if(!vis[temp->data]){
            if(know[temp->data]>currMax){
                currMax=know[temp->data];
                total=1;
            }else if(know[temp->data]==currMax){
                total++;
            }
            DFS(temp->data,vis);
        }
        temp=temp->next;
    }
}

int main()
{
    cin>>n>>m;
    adj=new Node[n];
    know=new long[n];
    bool vis[n];
    long Sets[n];
    for(int i=0;i<n;i++){
        vis[i]=false;
        Sets[i]=0;
        adj[i].data=i;
        cin>>know[i];
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(a==b)continue;
        adj[a-1].insert(b-1);
        adj[b-1].insert(a-1);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            currMax=know[i];total=1;
            DFS(i,vis);
            Sets[c++]=total;
        }
    }

    long ans=Sets[0];
    //long long MOD=(long long)1000000007;
    if(c>1){
        for(int i=1;i<c;i++){
            long long x=Sets[i];
            ans=ans*x;
            ans=ans%MOD;
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/
