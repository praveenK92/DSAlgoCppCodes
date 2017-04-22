/*#include<iostream>
#include<stdio.h>
using namespace std;

int min(int a,int b,int c){
    a=a<b?a:b;
    return a<c?a:c;
}

int n,m;
char *str1,*str2;

int editRecursive1(int i,int j){
    if(i==n)return m-j;
    if(j==m)return n-i;
    if(str1[i]==str2[j]){
        return editRecursive1(i+1,j+1);
    }else{
        return 1+min(editRecursive1(i,j+1),//insert
                     editRecursive1(i+1,j),//delete
                     editRecursive1(i+1,j+1)//replace
                     );
    }
}
int editRecursive2(int i,int j){
    if(i==0)return j;
    if(j==0)return i;
    if(str1[i-1]==str2[j-1]){
        return editRecursive2(i-1,j-1);
    }else{
        return 1+min(editRecursive2(i,j-1),//insert
                     editRecursive2(i-1,j),//delete
                     editRecursive2(i-1,j-1)//replace
                     );
    }
}

int editDP(int n,int m){
    int sol[n+1][m+1];
    for(int i=0;i<n;i++)sol[i][0]=i;
    for(int i=0;i<m;i++)sol[0][i]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                sol[i][j]=sol[i-1][j-1];
            }else{
                sol[i][j]=1+min(sol[i][j-1],
                                sol[i-1][j],
                                sol[i-1][j-1]
                                );
            }
        }
    }
    return sol[n][m];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/EditDistanceInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n;
        str1=new char[n];cin>>str1;
        cin>>m;
        str2=new char[m];cin>>str2;

        cout<<"Case #"<<t<<endl;
        //cout<<"Total operations Recursively: "<<editRecursive1(0,0)<<" "<<editRecursive2(n,m)<<endl;
        cout<<"Total operations DP: "<<editDP(n,m)<<endl;
    }
    return 0;
}
*/
