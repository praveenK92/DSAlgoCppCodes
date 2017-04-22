/*#include<iostream>
#include<stdio.h>
#define MAX 999999
using namespace std;

bool *spSet;
int V,M,**wt,*dist;

int MinIndex(){
    int index=-1,min=MAX;
    for(int i=1;i<=V;i++){
        if(!spSet[i] && min>dist[i]){
            min=dist[i];index=i;
        }
    }
    return index;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneIP.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int dest,src;
        cin>>V>>M;
        wt=new int*[V+1];
        dist=new int[V+1];
        spSet=new bool[V+1];
        for(int i=0;i<=V;i++){
            wt[i]=new int[V+1];
            spSet[i]=false;
            dist[i]=MAX;
        }
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                wt[i][j]=-1;
            }
        }
        for(int i=0;i<M;i++){
            int a,b,c;
            cin>>a>>b>>c;
            wt[a][b]=c;
            wt[b][a]=c;
        }
        cin>>src>>dest;
        dist[src]=0;
        for(int z=1;z<V;z++){
            int v=MinIndex();
            if(v==-1)break;
            spSet[v]=true;
            if(v==dest)break;
            for(int i=1;i<=V;i++){
                if(wt[v][i]!=-1 && !spSet[i] && dist[v]!=MAX){
                    int cost=dist[v]+wt[v][i];
                    dist[i]=cost<dist[i]?cost:dist[i];
                }
            }
        }
        cout<<"Case #"<<t<<" Distance of src: "<<src<<" from dest:"<<dest<<" is: "<<dist[dest]<<endl;
    }
    return 0;
}
*/
