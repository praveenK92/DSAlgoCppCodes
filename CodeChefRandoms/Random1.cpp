/*#include<iostream>
#include<math.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

bool isPrime(long long x){
    if(x<6 && (x==2 || x==3 || x==5))return true;
    if(x>6){
        if((x-1)%6!=0 && (x+1)%6!=0)return false;
    }
    if(x%2==0)return false;
    long long xx=(long long)(sqrt(x))+1;
    for(long long i=3;i<xx;i=i+2){
        if(x%i==0)return false;
    }
    return true;
}

int main(){
    int n;cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=1,p=131071393213;
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            ans=(ans*arr[i])%p;
        }
    }
    cout<<ans;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    long long m=1000000007,a,b,ans=0;
    b=(n-1)*(k-1)+k;
    b=b%m;a=k;
    for(int i=0;i<n-1;i++){
        a=(a*k)%m;
    }
    ans=(a-b)%m;
    if(ans<0)ans=ans+m;
    cout<<ans;
    return 0;
}
*/
