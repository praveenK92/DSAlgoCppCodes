/*#include <iostream>
#include<stdio.h>
using namespace std;

void printArray(int **arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main()
{
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/KMarsh.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankDP/HackerRankDPIP/KMarshOutput.txt","w",stdout);
    int n,m;cin>>m>>n;
    bool arr[m][n];
    int **row;
    int **col;
    row=new int*[m];
    col=new int*[m];

    for(int i=0;i<m;i++){
        row[i]=new int[n];
        col[i]=new int[n];

        for(int j=0;j<n;j++){
            char ch;cin>>ch;
            if(ch=='.')arr[i][j]=true;
            else arr[i][j]=false;

            row[i][j]=-1;
            col[i][j]=-1;
        }
    }

    for(int i=0;i<m;i++){
        int j=0,k=0;
        while(j<n){
            for(;j<n-1;j++){
                if(arr[i][j] && arr[i][j+1]){
                    k=j;
                    row[i][k]=j+1;
                    j++;
                    break;
                }
            }
            if(row[i][k]==-1)break;
            for(;j<n;j++){
                if(!arr[i][j]){
                    for(;k<j-1;k++){
                        row[i][k]=j-1;
                    }
                    break;
                }
            }
            if(j==n){
                for(;k<j-1;k++){
                        row[i][k]=j-1;
                }
                break;
            }
            j++;k++;
        }
    }

    for(int i=0;i<n;i++){
        int j=0,k=0;
        while(j<m){
            for(;j<m-1;j++){
                if(arr[j][i] && arr[j+1][i]){
                    k=j;
                    col[k][i]=j+1;
                    j++;
                    break;
                }
            }
            if(col[k][i]==-1)break;
            for(;j<m;j++){
                if(!arr[j][i]){
                    for(;k<j-1;k++){
                        col[k][i]=j-1;
                    }
                    break;
                }
            }

            if(j==m){
                for(;k<j-1;k++){
                    col[k][i]=j-1;
                }
                break;
            }
            j++;k++;
        }
    }
    //cout<<"row: "<<endl;printArray(row,m,n);
    //cout<<"col: "<<endl;printArray(col,m,n);

    int len=-1,br=-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!arr[i][j])continue;

            int l=col[i][j],b=row[i][j];
            if(l==-1 || b==-1)continue;
            else if(l-i+b-j<len+br)continue;

            for(int x=l;x>i;x--){
                int ll=row[x][j],bb;
                ll=ll<b?ll:b;

                for(int y=ll;y>j;y--){
                    if(x+y-i-j<len+br)continue;
                    bb=col[i][y];
                    if(bb==-1 || bb<x)continue;

                    if(x-i+y-j>len+br){
                        len=x-i;br=y-j;
                        //cout<<"Row: "<<i<<" "<<x<<" Col: "<<j<<" "<<y<<" len+br="<<len+br<<endl;
                        break;
                    }
                }
            }
        }
    }
    if(len==-1 && br==-1)cout<<"impossible";
    else cout<<2*(len+br);

    return 0;
}
*/
