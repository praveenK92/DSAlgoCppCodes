/*#include<iostream>
#include<stdio.h>
#define MAX 999999
using namespace std;

bool *cutVertex,**adj,*vis;
int V,M,*low,*dfsTree,*parent,time;

int min(int x,int y){
    return x<y?x:y;
}

void CalculateAP(int u){
    dfsTree[u]=low[u]=++time;
    vis[u]=true;
    int child=0;
    for(int v=1;v<=V;v++){
        if(!vis[v] && adj[u][v]){
            parent[v]=u;
            child++;

            CalculateAP(v);
            low[u]=min(low[u],low[v]);
            // root no parent & 2 or more child
            if(parent[u]==0 && child>1){
                cutVertex[u]=true;
            }
            // not root but child has no backedge
            if(parent[u]!=0 && low[v]>=dfsTree[u]){
                cutVertex[u]=true;
            }
        }
        else if(v!=parent[u] && adj[u][v]){
            low[u]=min(low[u],dfsTree[v]);
        }
    }

}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/CutVertex.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>V>>M;
        adj=new bool*[V+1];
        low=new int[V+1];
        dfsTree=new int[V+1];
        cutVertex=new bool[V+1];
        vis=new bool[V+1];
        parent=new int[V+1];
        for(int i=0;i<=V;i++){
            adj[i]=new bool[V+1];
            cutVertex[i]=false;
            vis[i]=false;
            low[i]=0;
            dfsTree[i]=0;
            parent[i]=0;
        }
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                adj[i][j]=false;
            }
        }
        for(int i=0;i<M;i++){
            int a,b;
            cin>>a>>b;
            adj[a][b]=true;
            adj[b][a]=true;
        }
        time=0;
        for(int i=1;i<=V;i++){
            if(!vis[i])CalculateAP(i);
        }
        cout<<"Case #"<<t<<" ArticulationPoints:"<<endl;
        for(int i=1;i<=V;i++){
            if(cutVertex[i])cout<<i<<" ";
        }
        cout<<endl;
        for(int i=1;i<=V;i++){
            cout<<i<<" Low :"<<low[i]<<" DiscoveryTime: "<<dfsTree[i]<<endl;
        }
    }
    return 0;
}
*/
