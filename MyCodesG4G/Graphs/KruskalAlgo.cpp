/*#include<iostream>

using namespace std;

class Edge
{
public:
    int src,dest,wt;
    bool taken;
public:
    Edge()
    {
        src=dest=-1;
        wt=-1;
        taken =false;
    }
    Edge(int s,int d,int w)
    {
        src=s;
        dest=d;
        wt=w;
        taken=false;
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
            int a,b,c;
            cin>>a>>b>>c;
            ed[i].src=a;ed[i].dest=b;ed[i].wt=c;
        }
        for(int i=0; i<M; i++)
        {
            bool f=false;
            for(int j=0; j<M-i-1; j++)
            {
                if(ed[j].wt>ed[j+1].wt)
                {
                    swap(ed[j],ed[j+1]);
                    f=true;
                }
            }
            if(!f)break;
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
                Set[x.src]=count;
                Set[x.dest]=count;
                count++;
            }

            ed[aa].taken=true;
        }
        int ans=0;
        //if(count==2)
        for(int i=0; i<M; i++)
        {
            if(ed[i].taken)ans+=ed[i].wt;
        }
        cout<<ans<<endl;
        delete(ed);
    }
    return 0;
}
*/
