/*#include<iostream>
#include<stdio.h>
using namespace std;

void print2DArray(int **arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Arrays/Input/SpiralArray.txt","r",stdin);
    int n,m;cin>>n>>m;
    int **arr=new int*[n];
    int *res=new int[n*m],r=0;
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    print2DArray(arr,n,m);
    //printArray(res,n+m);

    int n1=0,n2=n-1,m1=0,m2=m-1;
    while(n1<n2 && m1<m2){
        for(int i=m1;i<=m2;i++){
            res[r++]=arr[n1][i];
        }n1++;
        for(int i=n1;i<=n2;i++){
            res[r++]=arr[i][m2];
        }m2--;
        for(int i=m2;i>=m1;i--){
            res[r++]=arr[n2][i];
        }n2--;
        for(int i=n2;i>=n1;i--){
            res[r++]=arr[i][m1];
        }m1++;
    }
    printArray(res,n*m);
    return 0;
}
*/
