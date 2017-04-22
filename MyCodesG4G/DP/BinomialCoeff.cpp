/*#include<iostream>
#include<stdio.h>
using namespace std;

int min(int a,int b){
    return a<b?a:b;
}

int n,k;

int BinoRec(int n,int k){
    if(k==0 || k==n)return 1;
    else return BinoRec(n-1,k-1)+BinoRec(n-1,k);
}

int BinoDp(int n,int k){
    if(k==0 || k==n)return 1;
    int sol[n+1][k+1];
    for(int i=0;i<=n;i++){
        sol[i][0]=1;
    }
    for(int i=1;i<=k;i++){
        sol[i][i]=1;
        sol[0][i]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=min(i,k);j++){
            if(j!=i)sol[i][j]=sol[i-1][j-1]+sol[i-1][j];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }

    int sol2[k+1];
    for(int i=1;i<=k;i++)sol2[i]=0;
    sol2[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=min(i,k);j>0;j--){
            sol2[j]+=sol2[j-1];
        }
    }
    return sol[n][k];
    //return sol2[k];
}
int BinoDpG4G(int n,int k){
    if(k==0 || k==n)return 1;
    int sol[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            if(j==i || j==0)sol[i][j]=1;
            else sol[i][j]=sol[i-1][j-1]+sol[i-1][j];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    return sol[n][k];
}
int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/BinoCoeffInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n>>k;
        cout<<"Case #"<<t<<endl;
        //cout<<"Binomial Coeff Recursively: "<<BinoRec(n,k)<<endl;
        cout<<"Binomial Coeff DP: "<<BinoDp(n,k)<<endl;
    }
    return 0;
}
*/
