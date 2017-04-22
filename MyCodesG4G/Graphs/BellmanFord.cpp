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
            dist[i]=MAX;
        }
        dist[s]=0;
        for(int k=1; k<V; k++)
        {
            bool flag=false;
            for(int j=0; j<M; j++)
            {
                if(dist[edge[j][0]]!=MAX)
                {
                    int x=dist[edge[j][0]]+edge[j][2];
                    if(dist[edge[j][1]]>x)
                    {
                        dist[edge[j][1]]=x;
                        flag=true;
                    }
                }
            }
            if(!flag)break;
        }
        bool flag=false;
        for(int j=1; j<=V; j++)
        {
            if(dist[edge[j][0]]!=MAX)
            {
                int x=dist[edge[j][0]]+edge[j][2];
                if(dist[edge[j][1]]>x)
                {
                    dist[edge[j][0]]=x;
                    flag=true;
                    break;
                }
            }
        }
        if(flag)cout<<"No soln exists"<<endl;
        else
        {
            for(int i=1; i<=V; i++)
            {
                cout<<"Dist of "<<i<<" is: "<<dist[i]<<endl;
            }
        }
        //free(dist);
    }

}
*/
