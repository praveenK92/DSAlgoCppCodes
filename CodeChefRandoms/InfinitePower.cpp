/*#include<iostream>
#define MAX 1000000000
using namespace std;

bool isInfinite(long x){
    while(x!=0){
        if((x%10)%2==0){
            x=x/10;
        }else return false;
    }
    return true;
}

void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int NoDigits(long x){
    int ans=0;
    while(x!=0){
        ans++;
        x=x/10;
    }
    return ans;
}

long makeNo(int *arr,int n){
    long ans=0;int t=10;
    for(int i=n-2;i>=0;i--){
        ans+=arr[i]*t;
        t*=10;
    }
    ans+=arr[n-1];
    return ans;
}

long lesser(long x,int n){
    int arr[n],i=n-1;
    while(x!=0){
        arr[i]=x%10;
        x=x/10;i--;
    }

    int j=0;
    for(;j<n;j++){
        if(arr[j]%2!=0){
            arr[j]-=1;
            break;
        }
    }j++;
    for(;j<n;j++){
        arr[j]=8;
    }
    return makeNo(arr,n);
}
long greaterl(long x,int n){
    int arr[n],i=n-1;
    while(x!=0){
        arr[i]=x%10;
        x=x/10;i--;
    }
    int j=0;
    for(;j<n;j++){
        if(arr[j]%2!=0){
            arr[j]+=1;
            break;
        }
    }
    j++;
    for(;j<n;j++){
       arr[j]=0;
    }
    return makeNo(arr,n);
}

int main(){
    int T;cin>>T;
    for(int t=0;t<T;t++){
        long n;cin>>n;
        if(isInfinite(n))cout<<"Unlimited Power";
        else{
            int nd=NoDigits(n);
            long a=greaterl(n,nd),b=lesser(n,nd),c=2;
            a=a-n;b=n-b;
            while(c<=a && c<=b){
                if(a%c==0 && b%c==0){
                    a=a/c;b=b/c;
                }else c++;
            }
            cout<<a<<"/"<<b;
        }
        cout<<endl;
    }
    return 0;
}
*/
