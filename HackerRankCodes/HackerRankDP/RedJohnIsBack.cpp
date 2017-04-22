/*#include <iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int Combination(int n,int k){
    if(k==0 || k==n)return 1;
    int sol[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            if(j==i || j==0)sol[i][j]=1;
            else sol[i][j]=sol[i-1][j-1]+sol[i-1][j];
        }
    }
    return sol[n][k];
}
int TotalPrimes(int n){
    bool arr[n+1];
    for(int i=2;i<=n;i++){
        arr[i]=true;
    }
    int ans=0;
    for(int i=2;i<=n;i++){
        if(arr[i]){
            ans++;
            int j=2;
            while(i*j<=n){
                arr[i*j]=false;
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/RedJohnIsBack.txt","r",stdin);
    int T;cin>>T;
    for(int t=0;t<T;t++){
        int n,x;cin>>n;
        x=n/4;
        int m=1;
        for(int i=1;i<=x;i++){
            m+=Combination(n-3*i,i);
        }
        cout<<TotalPrimes(m)<<endl;
    }
    return 0;
}
*/
