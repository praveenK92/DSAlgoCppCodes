/*#include <iostream>
#include<stdio.h>
#define MAX 16385
using namespace std;

long max(long a,long b){
    return a>b?a:b;
}
long min(long a,long b){
    return a<b?a:b;
}

int main()
{
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/NikitaGame.txt","r",stdin);
    int T;cin>>T;
    for(int t=0;t<T;t++){
        int n;cin>>n;
        long long arr[n],aa[n+1];
        aa[0]=0;
        long **sol;
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

        sol=new long*[n+1];
        for(int i=0;i<=n;i++){
            sol[i]=new long[n+1];
            sol[i][i]=0;
        }

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
                bool fl=false;
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
                        fl=true;
                        long a,b;
                        a=sol[i][k]+1;
                        b=sol[k+1][j]+1;
                        sol[i][j]=max(sol[i][j],max(a,b));
                        break;
                    }
                }
                if(!fl){
                    sol[i][j]=0;
                }
            }
        }
        cout<<sol[1][n]<<endl;
    }
    return 0;
}
*/
