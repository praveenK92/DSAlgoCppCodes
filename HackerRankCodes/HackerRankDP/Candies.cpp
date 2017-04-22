/*#include <iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

long max(long a,long b){
    return a>b?a:b;
}
long min(long a,long b){
    return a<b?a:b;
}

int main()
{
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/Candies.txt","r",stdin);
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long sol[n];
    for(int i=0;i<n;i++)sol[i]=0;
    sol[0]=1;
    if(arr[0]>arr[1])sol[0]=2;

    for(int j=1;j<n;j++){
        if(arr[j]>arr[j-1]){
            sol[j]=sol[j-1]+1;
        }else{
            sol[j]=1;
        }
    }
    if(arr[n-1]>arr[n-2])sol[n-1]=sol[n-2]+1;
    else sol[n-1]=1;
    for(int j=n-1;j>0;j--){
        if(arr[j-1]>arr[j]){
            sol[j-1]=max(sol[j]+1,sol[j-1]);
        }
    }

    long ans=0;
    for(int i=0;i<n;i++){
        ans+=sol[i];
    }
    cout<<ans;
    return 0;
}
*/
