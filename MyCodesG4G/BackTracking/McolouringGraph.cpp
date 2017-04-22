/*#include<iostream>
#include<stdio.h>
using namespace std;

bool **adj;
int N,E,M,*color;

bool isSafe(int v,int c){
    for(int i=1;i<=N;i++){
        if(adj[v][i] && color[i]==c )return false;
    }
    return true;
}

void printAll(){
    for(int i=1;i<=N;i++)
        cout<<i<<": "<<color[i]<<" ";
    cout<<endl;
}

bool ColorGraph(int v){
    if(v==N+1){
        printAll();
        return true;
    }
    for(int j=1;j<=M;j++){
        if(isSafe(v,j)){
            color[v]=j;
            if(ColorGraph(v+1))return true;
            //backtrack
            color[v]=0;
        }
    }
    return false;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/BackTracking/BackTrackingInputOutput/MColouredGraph.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/SubSetSumOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>N>>E;
        adj=new bool*[N+1];
        color=new int[N+1];
        for(int i=0;i<=N;i++){
            adj[i]=new bool[N+1];
        }
        for(int i=0;i<=N;i++){
            color[i]=0;
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
        cin>>M;
        //color[1]=1;
        cout<<"Case #"<<t<<endl;
        if(ColorGraph(1))cout<<"Soln exists"<<endl;
        else cout<<"No Soln exists"<<endl;
    }

    return 0;
}
*/
