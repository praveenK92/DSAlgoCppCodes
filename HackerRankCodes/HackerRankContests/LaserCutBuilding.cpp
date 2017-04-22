/*#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n,m,m1=0;
    cin>>n;
    int arr[n+1];bool a[n+1];
    a[0]=false;arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        m1=max(m1,arr[i]);
        a[i]=false;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        a[x]=true;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]){
                if(arr[i]>j-i)arr[i]=j-i;
                break;
            }
        }
    }

    long ans=0;
    for(int i=1;i<=n;i++){
        ans+=(long)(arr[i]);
    }
    cout<<ans;
    return 0;
}
*/
