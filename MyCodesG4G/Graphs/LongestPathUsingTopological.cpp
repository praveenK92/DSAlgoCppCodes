/*#include<iostream>
#include<stdio.h>
#define MIN -999
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
};

int **wt,V,M,*inDegree,*dist;
bool *vis;

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/LongestPathInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/LongestPathOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>V>>M;
        wt=new int*[V+1];
        vis=new bool[V+1];
        inDegree=new int[V+1];
        dist=new int[V+1];
        for(int i=0;i<=V;i++){
            wt[i]=new int[V+1];
            inDegree[i]=0;
            dist[i]=MIN;
            vis[i]=false;
        }
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                wt[i][j]=0;
            }
        }
        for(int i=0;i<M;i++){
            int a,b,c;
            cin>>a>>b>>c;
            wt[a][b]=c;
            inDegree[b]++;
        }

        Queue Q(V);
        Queue TSQ(V);
        for(int i=1;i<=V;i++){
            if(inDegree[i]==0){
                Q.add(i);
                TSQ.add(i);
                dist[i]=0;
                vis[i]=true;
            }
        }
        while(!Q.isEmpty()){
            int v=Q.remove();
            //vis[v]=false;
            for(int i=1;i<=V;i++){
                if(wt[v][i]!=0){
                    if(!vis[i]){
                        Q.add(i);
                        TSQ.add(i);
                        vis[i]=true;
                    }
                }
            }
        }
        cout<<"Case #"<<t<<endl;
        while(!TSQ.isEmpty()){
            int v=TSQ.remove();
            cout<<v<<" ";
            for(int i=1;i<=V;i++){
                if(wt[v][i]!=0 && dist[i]<dist[v]+wt[v][i]){
                    dist[i]=dist[v]+wt[v][i];
                }
            }
        }
        cout<<endl;
        int max=MIN,index=-1;
        for(int i=1;i<=V;i++){
            if(max<dist[i]){
                max=dist[i];
                index=i;
            }
        }
        cout<<"The Longest Path is: "<<max<<" to the Vertex: "<<index<<endl;
    }
    return 0;
}
*/
