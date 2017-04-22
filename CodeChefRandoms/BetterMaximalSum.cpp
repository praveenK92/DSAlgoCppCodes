/*#include<iostream>
#include<stdio.h>
#define MIN -999999999999
#define MAX 9999999
using namespace std;

long long min(long long a,long long b){
    return a<b?a:b;
}
long long max(long long a,long long b){
    return a>b?a:b;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/CodeChefRandoms/Input/MaximalSumInput.txt","r",stdin);
    int T;cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        long long ans=MIN;
        int ml=0,mh=1;

        for(int i=1;i<=n;i++){
            long long sum=0;
            for(int j=0;j<i;j++){
                sum+=arr[j];
            }
            if(ans<sum){
                ans=sum;
                ml=0;mh=i-1;
            }
            for(int j=1;j<=n-i;j++){
                sum=sum-arr[j-1]+arr[j+i-1];
                if(ans<sum){
                    ans=sum;
                    ml=j;mh=j+i-1;
                }
            }
        }
        if(mh!=ml){
            long long temp=MAX;
            for(int i=ml;i<=mh;i++){
                temp=min(temp,arr[i]);
            }
            if(temp!=MAX)ans=ans-temp;
        }
        cout<<ans<<endl;
    }
}

*/
