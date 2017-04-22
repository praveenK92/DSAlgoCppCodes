/*#include<iostream>
#include<stdio.h>
using namespace std;

bool **adj,*vis;
int N,E,*path,start;

void printPath(){
    for(int i=0;i<N;i++)
        cout<<path[i]<<" ";
    cout<<endl;
}
// This looks for all possible combinations & prints successful combinations
int HamilTonianCycleDetect(int v,int visited){
    if(visited==N){
        return visited;
    }

    for(int i=1;i<=N;i++){
        if(adj[v][i] && !vis[i]){
            path[visited]=i;
            vis[i]=true;
            if(HamilTonianCycleDetect(i,visited+1)==N && adj[i][start]){
                printPath();
            }
            //we backtrack
            path[visited]=0;
            vis[i]=false;
        }
    }
    return visited;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/BackTracking/BackTrackingInputOutput/HamiltonianPathInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/HamiltonianPathOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>N>>E;
        adj=new bool*[N+1];
        path=new int[N+1];
        vis=new bool[N+1];
        for(int i=0;i<=N;i++){
            adj[i]=new bool[N+1];
        }
        for(int i=0;i<=N;i++){
            path[i]=0;
            vis[i]=false;
            for(int j=0;j<=N;j++){
                adj[i][j]=false;
            }
        }
        for(int i=0;i<E;i++){
            int a,b;
            cin>>a>>b;
            adj[a][b]=true;
            adj[b][a]=true;
        }
        cout<<"Case #"<<t<<endl;
        for(int i=1;i<=N;i++){
            start=i;
            vis[start]=true;
            path[0]=start;
            HamilTonianCycleDetect(start,1);
            //here also we backtrack
            vis[start]=false;
            path[0]=0;
        }
    }
    return 0;
}
*/
