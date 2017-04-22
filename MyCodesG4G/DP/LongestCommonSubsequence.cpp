/*#include<iostream>
#include<stdio.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int n,m,ans;
char *X,*Y;

int LCSRecursive(int n,int m){
    if(n==0 || m==0)return 0;
    if(X[n-1]==Y[m-1])return 1+LCSRecursive(n-1,m-1);
    else return max(LCSRecursive(n-1,m),LCSRecursive(n,m-1));
}
int LCSBottomUp(int n,int m){
    if(n==0 || m==0)return 0;
    int lcs[n+1][m+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            lcs[i][j]=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(X[i-1]==Y[j-1]){
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    return lcs[n][m];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/LongestCommonSubsequence.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n>>m;
        X=new char[n];
        Y=new char[m];
        cin>>X>>Y;
        ans=LCSRecursive(n,m);

        cout<<"Case #"<<t<<endl;
        cout<<"Length of Longest Common Subsequence is: "<<ans<<endl;
        cout<<"Length of Longest Common Subsequence is(using DP): "<<LCSBottomUp(n,m)<<endl;

    }
    return 0;
}
*/
