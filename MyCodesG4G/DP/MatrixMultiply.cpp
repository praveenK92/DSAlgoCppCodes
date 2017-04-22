/*#include<iostream>
#include<stdio.h>
#define MAX 999999
using namespace std;

long min1(long a,long b){
    return a<b?a:b;
}

long MatrixRecursion(int *p,int i,int j){
    if(i==j)return 0;
    long count=0,min=MAX;
    for(int k=i;k<j;k++){
        count=MatrixRecursion(p,i,k)+MatrixRecursion(p,k+1,j)+p[i-1]*p[k]*p[j];
        min=min1(min,count);
    }
    return min;
}

void printArray(long **arr,int m,int n){
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

long MatrixTopDown(int *p,int i,int j,long **sol){
    if(i==j)return 0;
    else if(i>j)return MAX;
    else if(sol[i][j]!=MAX)return sol[i][j];

    long count=0;
    for(int k=i;k<j;k++){
        count=MatrixTopDown(p,i,k,sol)+MatrixTopDown(p,k+1,j,sol)+p[i-2]*p[k-1]*p[j-1];
        if(count<sol[i][j]){
            sol[i][j]=count;
        }
    }
    return sol[i][j];
}



int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/MatrixMultiplyInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long **sol;
        sol=new long*[n+1];
        for(int i=0;i<=n;i++){
            sol[i]=new long[n+1];
            for(int j=0;j<=n;j++){
                if(j<2 || i<2)sol[i][j]=0;
                //else if(i==j)sol[i][j]=0;
                else sol[i][j]=MAX;
            }
        }
        //long ans=MatrixRecursion(arr,1,n-1);
        long ans=MatrixTopDown(arr,2,n,sol);
        //printArray(sol,n,n);
        cout<<"Case #"<<t<<" "<<ans<<endl;
        for(int i=0;i<n;i++){
            delete sol[i];
        }
        delete sol;
    }
    return 0;
}
*/
