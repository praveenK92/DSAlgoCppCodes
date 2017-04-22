/*#include<iostream>

using namespace std;
int **adj,V,M;
bool *visited;

void DFS(int v);
int main(){
    //int V,M;
    cin>>V>>M;
    visited=new bool[V+1];
    adj=new int*[V+1];
    for(int i=0;i<=V;i++){
        adj[i]=new int[V+1];
        visited[i]=false;
    }
    for(int i=0;i<=V;i++){
        for(int j=0;j<=V;j++){
            adj[i][j]=0;
        }
    }

    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }

    for(int i=1;i<=V;i++){
        if(!visited[i])
            DFS(i);
    }


    cout<<endl;
    system("pause");
    return 0;
}
void DFS(int v){
    visited[v]=true;
    for(int i=1;i<=V;i++){
        if(adj[v][i]==1 && !visited[i]){
            cout<<" "<<i;
            DFS(i);
        }
    }
}
*/
