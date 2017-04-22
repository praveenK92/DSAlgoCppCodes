/*#include<iostream>
#include<stdio.h>
#define INF 9999999
using namespace std;

long min(long a,long b){
    return a<b?a:b;
}

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

bool BinarySearch(int *arr,int n,int x){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(arr[m]>x){
            h=m-1;
        }else if(arr[m]<x){
            l=m+1;
        }
        else return true;
    }
    return false;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/RoadRepair.txt","r",stdin);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            bool f=false;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    f=true;
                    swap(arr[j],arr[j+1]);
                }
            }
            if(!f)break;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
        int N=arr[n-1];
        long dp[N+1][k+1];
        for(int j=0;j<=k;j++)dp[0][j]=INF;
        dp[0][0]=0;

        for(int i=1;i<=N;i++){
            if(BinarySearch(arr,n,i)){
                dp[i][0]=INF;
            }else{
                for(int j=0;j<=k;j++){
                    dp[i][0]=min(dp[i][0],dp[i-1][j]);
                }
            }
            dp[i][1]=INF;
            for(int j=1;j<=k;j++){
                dp[i][1]=min(dp[i][1],dp[i-1][j]+j);
            }
            dp[i][1]=min(dp[i][1],dp[i-1][0]+k);

            for(int j=2;j<=k;j++){
                dp[i][j]=dp[i-1][j-1];
            }
        }
        long ans=dp[N][0];
        for(int j=1;j<=k;j++){
            ans=min(ans,dp[N][j]);
        }

        for(int i=1;i<=N;i++){
            for(int j=0;j<=k;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Case #"<<t<<" "<<ans<<endl;
    }
    return 0;
}
*/
