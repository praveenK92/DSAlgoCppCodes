/*#include<iostream>
#include<math.h>
#define MAX 150001
using namespace std;

long max(long a,long b){
    return a>b?a:b;
}

bool isSpecialNumber(long n){
    int c=0;
    while (n%2 == 0){
        c++;
        n = n/2;
    }
    if(c>1)return 1;
    for (int i = 3; i <= sqrt(n); i = i+2){
        c=0;
        while (n%i == 0){
            c++;
            n = n/i;
        }
        if(c>1)return 1;
    }
    return 0;
}

int main(){
    int T;cin>>T;
    long input[T],max1=0;
    for(int i=0;i<T;i++){
        cin>>input[i];
        max1=max(max1,input[i]);
    }

    bool special[max1];
    special[0]=special[1]=0;
    for(long i=2;i<=max1;i++){
        special[i]=isSpecialNumber(i);
    }
    for(int t=0;t<T;t++){
        long n=input[t];
        int ans=0;
        for(long i=2;i<=n;i++){
            if(special[i])ans++;
        }
        cout<<2*ans<<endl;
        for(long i=2;i<=n;i++){
            if(special[i])cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
