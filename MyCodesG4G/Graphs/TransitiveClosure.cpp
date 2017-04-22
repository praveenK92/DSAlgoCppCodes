/*#include<iostream>

using namespace std;

int V,M;
bool **adj,**trans;

int main()
{
    int T;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        cin>>V>>M;
        adj=new bool*[V+1];
        trans=new bool*[V+1];

        for(int i=0; i<=V; i++)
        {
            adj[i]=new bool[V+1];
            trans[i]=new bool[V+1];
        }
        for(int i=0; i<=V; i++)
        {
            for(int j=0; j<=V; j++)
            {
                adj[i][j]=false;
                trans[i][j]=false;
            }
        }

        for(int i=0; i<M; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a][b]=true;
            trans[a][b]=true;
        }
        for(int i=0;i<=V;i++)trans[i][i]=true;

        for(int k=1;k<=V;k++){
            for(int i=1;i<=V;i++){
                for(int j=1;j<=V;j++){
                    if(trans[i][k] && trans[k][j])
                        trans[i][j]=adj[i][j] || (trans[i][k] && trans[k][j]);
                }
            }
        }
        for(int i=1;i<=V;i++){
            for(int j=1;j<=V;j++){
                cout<<trans[i][j]<<" ";
            }
            cout<<endl;
        }


        free(adj);
        free(trans);
    }
    return 0;

}
*/

