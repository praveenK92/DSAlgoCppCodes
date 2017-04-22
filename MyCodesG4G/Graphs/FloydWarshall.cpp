/*#include<iostream>
#define MAX 99999
using namespace std;

int min(int x,int y)
{
    return x<y?x:y;
}

int **wt,V,M,**dist;

int main()
{
    int T;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        cin>>V>>M;
        wt=new int*[V+1];
        dist=new int*[V+1];

        for(int i=0; i<=V; i++)
        {
            wt[i]=new int[V+1];
            dist[i]=new int[V+1];
        }
        for(int i=0; i<=V; i++)
        {
            for(int j=0; j<=V; j++)
            {
                wt[i][j]=0;
                dist[i][j]=MAX;
            }
        }

        for(int i=0; i<M; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(wt[a][b]!=0 && wt[a][b]>c){
					wt[a][b]=c;
					dist[a][b]=c;
				}
				else{
                    wt[a][b]=c;
                    dist[a][b]=c;
				}
        }
        for(int i=0;i<=V;i++)dist[i][i]=0;

        for(int k=1;k<=V;k++){
            for(int i=1;i<=V;i++){
                for(int j=1;j<=V;j++){
                    if(dist[i][k]!=MAX && dist[k][j]!=MAX && dist[i][j]>dist[i][k]+dist[k][j])
                        dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
        for(int i=1;i<=V;i++){
            for(int j=1;j<=V;j++){
                cout<<dist[i][j]<<" ";
            }
            cout<<endl;
        }


        delete(wt);
        delete(dist);
    }
    return 0;

}
*/
