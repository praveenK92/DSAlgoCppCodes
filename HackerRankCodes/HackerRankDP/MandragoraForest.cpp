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

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/MandragoraForest.txt","r",stdin);
    int T;cin>>T;
    for(int t=0;t<T;t++){
        int n;cin>>n;
        int arr[n];
        long sol[n];
        sol[0]=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sol[0]+=(long)(arr[i]);
        }
        sort(arr,arr+n);
        long s=1,p=0,ans=sol[0]*s;
        sol[0]-=(long)(arr[0]);

        for(int i=1;i<n;i++){
            sol[i]=sol[i-1]-(long)(arr[i]);
        }
        //printArray(arr,n);
        //printArray(sol,n);
        s++;
        for(int i=0;i<n;i++){
            p=sol[i]*s;
            //cout<<i<<" :"<<p<<endl;
            ans=max(ans,p);
            s++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
