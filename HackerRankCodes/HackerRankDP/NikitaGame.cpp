/*#include <iostream>
#include<stdio.h>
#define MAX 16385
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

void printArray(long **arr,int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printSArray(long *arr,int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int **sol;
long long *arr,*aa;

int GameDP(long long *arr,int l,int r){
    if(l>=r)return 0;
    if(sol[l][r]!=-1)return sol[l][r];
    int l1=l,r1=r,i;
    long long lt,rt;
    i=(l1+r1)/2;
    //cout<<"Called for: "<<l<<" "<<r<<endl;
    while(l1<=r1){
        lt=arr[i]-arr[l-1];
        rt=arr[r]-arr[i];
        if(lt>rt){
            r1=i-1;
            i=(l1+r1)/2;
        }else if(lt<rt){
            l1=i+1;
            i=(l1+r1)/2;
        }
        else{
            int a,b;
            if(i>=l)a=GameDP(arr,l,i)+1;
            else a=1;
            if(i+1<=r)b=GameDP(arr,i+1,r)+1;
            else b=1;
            sol[l][r]=max(sol[l][r],max(a,b));
            break;
        }
    }
    if(sol[l][r]==-1){
        sol[l][r]=0;
    }
    return sol[l][r];
}

int GameRecursive(long long *arr,int l,int r){
    if(l>=r)return 0;
    int l1=l,r1=r,i;
    long long lt,rt;
    i=(l1+r1)/2;
    cout<<"Called for: "<<l<<" "<<r<<endl;
    while(l1<=r1){
        lt=arr[i]-arr[l-1];
        rt=arr[r]-arr[i];
        if(lt>rt){
            r1=i-1;
            i=(l1+r1)/2;
        }else if(lt<rt){
            l1=i+1;
            i=(l1+r1)/2;
        }
        else{
            int a,b;
            if(i>=l)a=GameDP(arr,l,i)+1;
            else a=1;
            if(i+1<=r)b=GameDP(arr,i+1,r)+1;
            else b=1;
            return max(a,b);
        }
    }
    return 0;
}
int main()
{
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/NikitaGame.txt","r",stdin);
    int T;cin>>T;
    for(int t=0;t<T;t++){
        int n;cin>>n;
        //long long arr[n],aa[n+1];
        arr=new long long[n];
        aa=new long long[n+1];
        aa[0]=0;
        //int **sol;
        bool f0=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            aa[i+1]=aa[i]+arr[i];
            if(arr[i]!=0)f0=false;
        }
        if(f0){
            cout<<n-1<<endl;
            continue;
        }

        sol=new int*[n+1];
        for(int i=0;i<=n;i++){
            sol[i]=new int[n+1];
            for(int j=i;j<=n;j++){
                if(j==i)sol[i][j]=0;
                else sol[i][j]=-1;
            }
        }
        //cout<<GameDP(aa,1,n)<<endl;
        //cout<<GameRecursive(aa,1,n)<<endl;

        for(int L=2;L<=n;L++){
            for(int i=1;i<=n-L+1;i++){
                int j=i+L-1;
                if(L==2){
                    if(arr[i-1]==arr[j-1])
                        sol[i][j]=1;
                    else sol[i][j]=0;
                    continue;
                }

                int l1=i,r1=j,k;
                long long lt,rt;
                k=(l1+r1)/2;
                //cout<<"Called for: "<<l<<" "<<r<<endl;
                while(l1<=r1){
                    lt=aa[k]-aa[i-1];
                    rt=aa[j]-aa[k];
                    if(lt>rt){
                        r1=k-1;
                        k=(l1+r1)/2;
                    }else if(lt<rt){
                        l1=k+1;
                        k=(l1+r1)/2;
                    }
                    else{
                        int a,b;
                        a=sol[i][k]+1;
                        b=sol[k+1][j]+1;
                        sol[i][j]=max(sol[i][j],max(a,b));
                        break;
                    }
                }
                if(sol[i][j]==-1){
                    sol[i][j]=0;
                }
            }
        }
        cout<<sol[1][n]<<endl;

        //printSArray(aa,n);
        //printArray(sol,n);
        for(int i=0;i<=n;i++){
            delete []sol[i];
        }
        delete []sol;
        delete []arr;
        delete []aa;
    }
    return 0;
}
*/
