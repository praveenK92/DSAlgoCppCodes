/*#include<iostream>
#define MAX 9999
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        int V,M,s,**edge,*dist;
        cin>>V>>M;
        dist=new int[V+1];
        edge=new int*[M];
        for(int i=0; i<=M; i++)
        {
            edge[i]=new int[3];
            edge[i][0]=edge[i][0]=edge[i][0]=0;
        }

        for(int i=0; i<M; i++){
            int a,b,c;
            cin>>a>>b>>c;
            edge[i][0]=a;edge[i][1]=b;edge[i][2]=c;
        }

        cin>>s;
        for(int i=1; i<=V; i++)
        {
            dist[i]=-1;
        }
        dist[s]=0;
        for(int k=1; k<V; k++)
        {
            bool flag=false;
            for(int j=0; j<M; j++)
            {
                if(dist[edge[j][0]]!=-1)
                {
                    int x=dist[edge[j][0]]+edge[j][2];
                    if(dist[edge[j][1]] || dist[edge[j][1]]>x)
                    {
                        dist[edge[j][1]]=x;
                        flag=true;
                    }
                }
            }
            if(!flag)break;
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
    }

}
*/
