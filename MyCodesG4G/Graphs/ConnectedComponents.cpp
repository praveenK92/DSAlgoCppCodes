/*#include<iostream>

using namespace std;

class Edge
{
public:
    int src,dest;
public:
    Edge()
    {
        src=dest=-1;
    }
    Edge(int s,int d,int w)
    {
        src=s;
        dest=d;
    }

};
void swap(Edge &x,Edge &y)
{
    Edge t;
    t=y;
    y=x;
    x=t;
}
int min(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int T,V,M,*Set;
    Edge *ed;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        cin>>V>>M;
        Set=new int[V+1];
        ed=new Edge[M];
        for(int i=0; i<M; i++)
        {
            int a,b;
            cin>>a>>b;
            ed[i].src=a;ed[i].dest=b;
        }

        for(int i=0; i<=V; i++)
        {
            Set[i]=0;
        }
        int count=1;
        for(int aa=0;aa<M;aa++)
        {
            Edge x;
            x=ed[aa];
            if(Set[x.src]!=0 && Set[x.dest]!=0)
            {
                if(Set[x.src]==Set[x.dest])continue;
                else
                {
                    int a=Set[x.src],b=Set[x.dest],c;
                    c=min(a,b);
                    for(int i=1; i<=V; i++)
                    {
                        if(Set[i]==a || Set[i]==b)
                            Set[i]=c;
                    }
                }
            }
            else if(Set[x.src]==0 && Set[x.dest]!=0)
            {
                Set[x.src]=Set[x.dest];
            }
            else if(Set[x.src]!=0 && Set[x.dest]==0)
            {
                Set[x.dest]=Set[x.src];
            }
            else
            {
                Set[x.src]=Set[x.dest]=count;
                count++;
            }

        }
        int ans=0;
        for(int j=1;j<count;j++){
            for(int i=1; i<=V; i++){
                if(Set[i]==j){
                    ans++;break;
                }
            }
        }
        for(int i=1;i<=V;i++){
            if(Set[i]==0)ans++;
        }

        cout<<ans<<endl;
        delete(ed);
    }
    return 0;
}
*/
