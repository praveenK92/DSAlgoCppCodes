/*#include<iostream>
#include<stdio.h>
#define MAX 99999
using namespace std;

int min(int a,int b,int c){
    a=a<b?a:b;
    return a<c?a:c;
}
int n,m,**arr,**sol;

int minCostRecursive(int i,int j){
    if(i<0 || j<0)return MAX;
    else if(i==0 && j==0)return arr[0][0];
    else{
        return arr[i][j]+min(minCostRecursive(i-1,j-1),minCostRecursive(i-1,j),
                             minCostRecursive(i,j-1));
    }
}

int minCostDP(int n,int m){
    int sol[n+1][m+1];
    sol[0][0]=0;
    for(int i=0;i<=n;i++){
        sol[i][0]=MAX;
    }
    for(int i=0;i<=m;i++){
        sol[0][i]=MAX;
    }
    sol[1][1]=arr[0][0];
    for(int i=2;i<=n;i++){
        sol[i][1]=sol[i-1][1]+arr[i-1][0];
    }
    for(int i=2;i<=m;i++){
        sol[1][i]=sol[1][i-1]+arr[0][i-1];
    }

    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            sol[i][j]=arr[i-1][j-1]+min(sol[i-1][j-1],
                                        sol[i-1][j],sol[i][j-1]);
        }
    }

    return sol[n][m];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/MinCostInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n>>m;
        arr=new int*[n];
        for(int i=0;i<n;i++){
            arr[i]=new int[m];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Case #"<<t<<endl;
        //cout<<"MinCost Done Recursively: "<<minCostRecursive(n-1,m-1)<<endl;
        cout<<"MinCost Done by DP: "<<minCostDP(n,m)<<endl;
    }
    return 0;
}
*/
