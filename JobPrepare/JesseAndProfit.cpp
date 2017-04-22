/*#include<iostream>
#include<algorithm>
#define MAX 99999999
using namespace std;

int main(){
    int N,D;
    cin>>N>>D;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int q[D],sol[D][2];
    for(int i=0;i<D;i++){
        cin>>q[i];
        sol[i][0]=0;sol[i][1]=N;
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>=arr[j])continue;
            int pf=arr[j]-arr[i];
            for(int k=0;k<D;k++){
                if(q[k]==pf && (j-i)<(sol[k][1]-sol[k][0])){
                    sol[k][0]=i+1;
                    sol[k][1]=j+1;
                }
            }
        }
    }
    for(int i=0;i<D;i++){
        if(sol[i][1]-sol[i][0]==N)cout<<"-1"<<endl;
        else cout<<sol[i][0]<<" "<<sol[i][1]<<endl;
    }

    return 0;
}
*/


#include <iostream>
using namespace std;

long fact(long n){
    long a=1;
    for(long i=2;i<=n;i++){
        a=a*i;
    }
    return a;
}

int main() {
    int n,m,c;
    long ans;
    cin>>n>>m>>c;
    ans=n+m-c;
    cout<<fact(ans-1);
    return 0;
}
