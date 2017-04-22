/*#include<iostream>
#include<stdio.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int *arr,n,N;

int CoinChangeRecursive(int c,int sum){
    if(sum==0)return 1;
    else if(sum<0)return 0;
    if(c>=n)return 0;
    return CoinChangeRecursive(c,sum-arr[c])+CoinChangeRecursive(c+1,sum);
}
int CoinChangeDP(int N){
    if(n==1 && N%arr[0]==0)return N/arr[0];
    int sol[N+1][n+1];
    for(int i=0;i<=N;i++)sol[i][0]=0;
    for(int i=1;i<=n;i++)sol[0][i]=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=n;j++){
            if(arr[j-1]>i)sol[i][j]=sol[i][j-1];
            else{
                sol[i][j]=sol[i-arr[j-1]][j]+sol[i][j-1];
            }
        }
    }
    return sol[N][n];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/CoinChangeInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n;
        arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>N;
        cout<<"Case #"<<t<<endl;
        //cout<<"Max no of Coin Changes Recursively: "<<CoinChangeRecursive(0,N)<<endl;
        cout<<"Max no of Coin Changes DP: "<<CoinChangeDP(N)<<endl;
    }
    return 0;
}
*/
