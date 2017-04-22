/*#include<iostream>
#include<stdio.h>

using namespace std;

int V,M;
bool *vis,**wt;

void DFS(int v){
    vis[v]=true;
    for(int i=1;i<=V;i++){
        if(!vis[i] && wt[v][i]){
            DFS(i);
        }
    }
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/MotherVertexInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/MotherVertexOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>V>>M;
        wt=new bool*[V+1];
        vis=new bool[V+1];
        for(int i=0;i<=V;i++){
            wt[i]=new bool[V+1];
            vis[i]=false;
        }
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                wt[i][j]=false;
            }
        }
        for(int i=0;i<M;i++){
            int a,b;
            cin>>a>>b;
            //only for Directed Connected Graph(Acyclic)
            wt[a][b]=true;
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
