/*#include<iostream>
#define MAX 1000
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
bool isSafe(int x){
    return x>=1 && x<=100;
    //return true;
}


int V,M,wt[101],dist[101];
bool vis[101];

int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        for(int i=0;i<=100;i++){
            vis[i]=false;
            dist[i]=MAX;
            wt[i]=0;
        }
        int l,s;
        cin>>l;
        for(int i=0;i<l;i++){
            int a,b;
            cin>>a>>b;
            wt[a]=b-a;
        }
        cin>>s;
        for(int j=0;j<s;j++){
            int a,b;
            cin>>a>>b;
            wt[a]=b-a;
        }
        Queue Q(100);
        Q.add(1);
        dist[1]=0;
        vis[1]=true;
        while(!Q.isEmpty()){
            int v=Q.remove();
            //cout<<v<<" Visited Vertex!"<<endl;
            vis[v]=false;
            //if(v==100)break;

            for(int i=1;i<=6;i++){
                int i1=i+v;
                if(isSafe(i1)){
                    int temp=dist[v]+1;
                    if(dist[i1]>temp && wt[i1]==0){
                       dist[i1]=temp;
                       if(!vis[i1]){
                            Q.add(i1);
                            vis[i1]=true;
                        }
                    }
                    else if(dist[i1]>temp && wt[i1]!=0){
                        dist[i1]=temp;
                        int ii=i1+wt[i1];
                        if(isSafe(ii) && dist[ii]>temp){
                            dist[ii]=temp;
                            if(!vis[ii]){
                                Q.add(ii);
                                vis[ii]=true;
                            }
                        }
                    }
                }
            }
        }
        if(dist[100]==MAX)
            cout<<-1<<endl;
        else
            cout<<dist[100]<<endl;
    }
    return 0;
}
*/
