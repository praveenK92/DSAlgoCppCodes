/*#include<iostream>

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

int min(int x,int y){
    return x<y?x:y;
}

int **wt,V,M,*dist,s;

int main(){
    cin>>V>>M;
    wt=new int*[V+1];
    dist=new int[V+1];

    for(int i=0;i<=V;i++){
        wt[i]=new int[V+1];
        dist[i]=-1;
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
        //wt[b][a]=c;
    }
    cin>>s;
    Queue Q(V);
    Q.add(s);
    dist[s]=0;

    while(!Q.isEmpty()){
        int v=Q.remove();
        for(int i=1;i<=V;i++){
            if(wt[v][i]!=0){
                if(dist[i]==-1){
                    dist[i]=dist[v]+wt[v][i];
                    Q.add(i);
                }
                else{
                    int t=dist[v]+wt[v][i];
                    if(t<dist[i]){
                        dist[i]=t;
                        if(!Q.check(i))
                            Q.add(i);
                    }

                }
            }
        }
    }
    for(int i=1;i<=V;i++){
        cout<<"Dist of "<<i<<" is: "<<dist[i]<<endl;
    }

}*/
/*
5 5
1 2 3
1 4 11
2 3 5
3 4 2
4 5 1
1

*/
