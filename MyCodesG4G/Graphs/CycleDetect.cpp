/*#include<iostream>

using namespace std;

bool CycleDetect(int v);

int **adj,V,M,*path;
bool *visited,*Stack;

int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>V>>M;
        adj=new int*[V+1];
        visited=new bool[V+1];
        Stack=new bool[V+1];
        path=new int[V+1];
        for(int i=0;i<=V;i++){
            adj[i]=new int[V+1];
            visited[i]=false;
            Stack[i]=false;
            path[i]=-1;
        }
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                adj[i][j]=0;
            }
        }
        for(int i=0; i<M; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a][b]=1;
        }
        bool flag=false;
        for(int i=1;i<=V;i++){
            if(!visited[i])
                flag=CycleDetect(i);
            if(flag)break;
        }
        if(flag){
            cout<<"Cycle exists"<<endl;
        }



    }

    return 0;
}
bool CycleDetect(int v){
    visited[v]=true;
    Stack[v]=true;
    for(int i=1;i<=V;i++){
        if(adj[v][i]!=1)continue;
        else{
            if(Stack[i]){
                path[i]=v;
                return true;
            }
            else if(!visited[i] && CycleDetect(i))
            {
                path[i]=v;
                return true;
            }
        }
    }
    Stack[v]=false;
    return false;

}
*/
