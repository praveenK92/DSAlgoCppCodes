/*#include <iostream>
#include<stdio.h>
#include<algorithm>
#include <functional>

using namespace std;

int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int n,m;

int main()
{
    cin>>n>>m;
    int TotalSet[n];
    int Set[n];
    for(int i=0;i<n;i++){
        TotalSet[i]=0;
        Set[i]=-1;
    }
    int c=0,max1=-1;
    for(int i=0;i<m;i++){
        int aa,bb;
        cin>>aa>>bb;
        max1=max(max(max1,aa),bb);
        if(Set[aa]!=-1 && Set[bb]!=-1){
            if(Set[aa]==Set[bb])continue;
            else{
                int a=Set[aa],b=Set[bb],c1;
                c1=min(a,b);
                if(a<b){
                    c1=a;
                    TotalSet[c1]=TotalSet[a]+TotalSet[b];
                    TotalSet[b]=0;
                }else{
                    c1=b;
                    TotalSet[c1]=TotalSet[a]+TotalSet[b];
                    TotalSet[a]=0;
                }
                for(int i=0; i<=max1; i++){
                    if(Set[i]==a || Set[i]==b){
                        Set[i]=c1;
                    }
                }
            }
        }
        else if(Set[aa]==-1 && Set[bb]!=-1){
            Set[aa]=Set[bb];
            TotalSet[Set[aa]]++;
        }
        else if(Set[aa]!=-1 && Set[bb]==-1){
            Set[bb]=Set[aa];
            TotalSet[Set[aa]]++;
        }
        else{
            Set[aa]=Set[bb]=c;
            TotalSet[c++]+=2;
        }
    }
    long single=0;
    for(int i=0;i<n;i++){
        if(Set[i]==-1){
            Set[i]=c;
            //TotalSet[c++]=1;
            single++;
        }
    }
    sort(TotalSet,TotalSet+n,greater<int>());
    printArray(TotalSet,n);
    printArray(Set,n);
    long ans=0;
    for(int i=0;i<n;i++){
        if(TotalSet[i]==0){
            ans+=((single*(single-1))/2);
            break;
        }
        for(int j=i+1;j<n;j++){
            if(TotalSet[j]==0){
                ans+=TotalSet[i]*single;
                break;
            }
            else ans+=TotalSet[i]*TotalSet[j];
        }
    }
    //long n1=n;
    //ans+=(n1*(n1-1))/(long)(2);
    //for(int i=0;i<n;i++){
    //    if(TotalSet[i]==0)break;
    //    ans-=((long)(TotalSet[i]*(TotalSet[i]-1)))/2;
    //}
    cout<<ans<<endl;
    return 0;
}
*/
