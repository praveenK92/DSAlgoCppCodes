/*
Wrong could not do again :P
*/
/*
#include<iostream>

using namespace std;

class Queue
{
public:
    int n,front,rear,*arr;
public:
    Queue(int x)
    {
        n=x;
        arr=new int[n];
        front=rear=-1;
    }
    bool isEmpty()
    {
        return front==-1;
    }
    void add(int d)
    {
        if(front==-1)
        {
            front=rear=0;
            arr[rear]=d;
        }
        else
        {
            rear=(rear+1)%n;
            arr[rear]=d;
        }
    }
    int remove()
    {
        int t=arr[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
        return t;
    }
};

int min(int x,int y)
{
    return x<y?x:y;
}

//int **wt,V,M,*dist,s;

int main()
{
    int T;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        int V,M;
        cin>>V>>M;
        int wt[V+1][V+1],dist[V+1],s;
        //wt=new int*[V+1];
        //dist=new int[V+1];
        bool vis[V+1];

        for(int i=0; i<=V; i++)
        {
            dist[i]=-1;
            vis[i]=false;
            for(int j=0; j<=V; j++)
            {
                wt[i][j]=0;
            }
        }
        for(int i=0; i<M; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(wt[a][b]==0 || wt[a][b]>c){
					wt[a][b]=c;
					wt[b][a]=c;
				}
        }
        cin>>s;
        Queue Q(V);
        Q.add(s);
        dist[s]=0;
        vis[s]=true;

        while(!Q.isEmpty())
        {
            int v=Q.remove();
            vis[v]=false;
            for(int i=1; i<=V; i++)
            {
                if(wt[v][i]!=0)
                {
                    int t=dist[v]+wt[v][i];
                    if(dist[i]==-1)
                    {
                        dist[i]=t;
                        Q.add(i);
                        vis[i]=true;
                    }
                    else
                    {
                        if(t<dist[i])
                        {
                            dist[i]=t;
                            if(!vis[i]){
                                    Q.add(i);
                                    vis[i]=true;
                            }
                        }

                    }
                }
            }
        }
        if(s!=V)
        {
            for(int i=1; i<V; i++)
                if(i!=s)cout<<dist[i]<<" ";
            cout<<dist[V]<<endl;
        }
        else
        {
            for(int i=1; i<V-1; i++)
                if(i!=s)
                    cout<<dist[i]<<" ";
            cout<<dist[V-1]<<endl;
        }

        //free(wt);
        //free(dist);
    }
    return 0;

}
*/
