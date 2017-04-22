/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class LinkedList{
public:
    int data;
    LinkedList *next;
public:
    LinkedList(){
        data=-1;
        next=NULL;
    }
    LinkedList(LinkedList &a){
        data=a.data;
        next=a.next;
    }
    LinkedList(int d){
        data=d;
        next=NULL;
    }
    void add(int b){
        //LinkedList *a=(LinkedList*)malloc(sizeof(LinkedList));
        LinkedList *a=new LinkedList();
        a->data=b;
        a->next=NULL;

        if(next==NULL)next=a;
        else{
            a->next=next;
            next=a;
        }
    }
};

int V,M;
bool *vis,**wt;
LinkedList *adj;

void DFS(int v){
    vis[v]=true;
    LinkedList *temp=&adj[v];
    while(temp->next!=NULL){
        temp=temp->next;
        int i=temp->data;
        if(!vis[i]){
            DFS(i);
        }
        //temp=temp->next;
    }
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/MotherVertexInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/MotherVertexOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>V>>M;
        vis=new bool[V+1];
        adj=new LinkedList[V+1];
        for(int i=0;i<=V;i++){
            vis[i]=false;
            adj[i].data=i;
        }
        for(int i=0;i<M;i++){
            int a,b;
            cin>>a>>b;
            //only for Directed Connected Graph(Acyclic)
            adj[a].add(b);
        }
        int mother=-1;
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                DFS(i);
                mother=i;
            }
        }
        for(int i=1;i<=V;i++)vis[i]=false;
        DFS(mother);
        bool flag=false;
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                flag=true;
                break;
            }
        }
        cout<<"Case #"<<t<<endl;
        if(!flag)cout<<"Mother Vertex Exists! & She is: "<<mother<<endl;
        else cout<<"Mother Vertex Does Not Exists!"<<endl;
    }
    return 0;
}
*/
