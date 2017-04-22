/*#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;

long *arr,*sol;

int main(){
    int n;cin>>n;
    arr=new long[n];
    sol=new long[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0,j=n-1,t=0;
    while(t<n){
        sol[t++]=arr[i++];
        if(t<n)sol[t++]=arr[j--];
    }
    long ans=0;
    for(int z=0;z<n-1;z++){
        ans+=abs(sol[z]-sol[z+1]);
    }
    cout<<ans<<endl;
    return 0;
}
*/
