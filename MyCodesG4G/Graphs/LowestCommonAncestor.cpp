/*#include<iostream>
#include<stdio.h>
#define MAX 999
using namespace std;

class Queue{
public:
    int n,front,rear,*arr;
public:
    Queue(int x){
        n=x;
        arr=new int[n];
        front=rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    void add(int d){
        if(front==-1){
            front=rear=0;
            arr[rear]=d;
        }
        else{
            rear=(rear+1)%n;
            arr[rear]=d;
        }
    }
    int remove(){
        int t=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }
        return t;
    }
    bool check(int x){
        for(int i=front;i<=rear;){
            if(arr[i]==x)return true;
            i=(i+1)%n;
        }
        return false;
    }
};

bool **adj,**revAdj,*vis;
int V,M,v,w,*distV,*distW;

int min(int x,int y){
    return x<y?x:y;
}


int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/LCAInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/LCAOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>V>>M;
        adj=new bool*[V+1];
        revAdj=new bool*[V+1];
        vis=new bool[V+1];
        distV=new int[V+1];
        distW=new int[V+1];
        for(int i=0;i<=V;i++){
            adj[i]=new bool[V+1];
            revAdj[i]=new bool[V+1];
            distV[i]=distW[i]=MAX;
            vis[i]=false;
        }
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                adj[i][j]=false;
                revAdj[i][j]=false;
            }
        }
        for(int i=0;i<M;i++){
            int a,b;
            cin>>a>>b;
            adj[a][b]=true;
            revAdj[b][a]=true;
        }
        cin>>v>>w;
        Queue Q1(V);
        Q1.add(v);
        distV[v]=0;
        while(!Q1.isEmpty()){
            int v1=Q1.remove();
            //cout<<""<<v1<<endl;
            for(int i=1;i<=V;i++){
                if(revAdj[v1][i] && distV[i]>1+distV[v1]){
                    distV[i]=1+distV[v1];
                    Q1.add(i);
                }
            }
        }
        Queue Q2(V);
        Q2.add(w);
        distW[w]=0;
        while(!Q2.isEmpty()){
            int w1=Q2.remove();
            for(int i=1;i<=V;i++){
                if(revAdj[w1][i] && distW[i]>1+distW[w1]){
                    distW[i]=1+distW[w1];
                    Q2.add(i);
                }
            }
        }
        int min1=V+1,minIndex=V+1;
        for(int i=1;i<=V;i++){
            if(distV[i]!=MAX && distW[i]!=MAX){
                if(min1>min(distV[i],distW[i])){
                    min1=min(distV[i],distW[i]);
                    minIndex=i;
                }
            }
            //cout<<"Vertex: "<<i<<" DistV: "<<distV[i]<<" DistW: "<<distW[i]<<endl;
        }
        cout<<"Case #"<<t<<endl;
        if(minIndex!=V+1){
            cout<<"LCA of Graph for Vertices ( "<<v<<","<<w<<" ) is: "<<minIndex<<endl;
        }else{
            cout<<"No Ancestor Man!"<<endl;
        }

    }
    return 0;
}
*/
