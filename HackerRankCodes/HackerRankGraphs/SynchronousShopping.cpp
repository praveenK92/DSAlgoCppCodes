#include<iostream>
#define MAX 999999999
using namespace std;

int n,m,k,*fish,**sol;
int *visB,*visL,MinCost,b,l,MinL;

void CostL(int v,int f,int cost){
    l=v;
    if(f<=0){
        //cout<<" Chote Miyan Final Cost="<<cost<<endl;
        MinL=min(MinL,cost+sol[l][n-1]);
        return;
    }
    for(int i=1;i<n;i++){
        if(i!=v && fish[i]!=0){
            int x=fish[i];
            fish[i]=0;
            if(cost<MinL){
                CostL(i,f-x,cost+sol[v][i]);
            }
            fish[i]=x;
        }
    }
}

void TotalCost(int v,int f,int cost){
    b=v;
    //cout<<v<<" Bade Miyan fish left="<<f<<endl;
    if(f<=0){
        //cout<<" Final Vertex: "<<b<<" Cost: "<<cost<<endl;
        MinCost=min(MinCost,cost+sol[b][n-1]);
        return;
    }

    for(int i=1;i<n;i++){
        if(i!=v && fish[i]!=0){

            MinL=MAX;
            //cout<<"Bade Miyan: "<<b<<endl;
            CostL(0,f,0);
            int costL=max(MinL,cost+sol[b][n-1]);
            if(costL<MinCost){
                MinCost=costL;
            }

            int x=fish[i];
            fish[i]=0;
            if(cost<MinCost){
                TotalCost(i,f-x,cost+sol[v][i]);
            }
            fish[i]=x;
        }
    }
}

void printMatrix(int **arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>n>>m>>k;
    fish=new int[n];
    //adj=new int*[n];
    sol=new int*[n];
    visB=new int[n];visL=new int[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        fish[b-1]=a;
        //adj[i]=new int[n];
        sol[i]=new int[n];
        visB[i]=visL[i]=0;
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            //adj[i][j]=0;
            if(i==j)sol[i][j]=0;
            else sol[i][j]=MAX;
       }
    }

    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        //adj[a-1][b-1]=c;adj[b-1][a-1]=c;
        sol[a-1][b-1]=c;sol[b-1][a-1]=c;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(k!=i && k!=j && sol[i][k]!=MAX && sol[k][j]!=MAX && sol[i][k]+sol[k][j]<sol[i][j]){
                    sol[i][j]=sol[i][k]+sol[k][j];
                }
            }
        }
    }

    MinCost=MAX;
    int x=fish[0];
    fish[0]=0;
    TotalCost(0,k-x,0);

    cout<<MinCost<<endl;
    //printMatrix(sol);
    return 0;
}
