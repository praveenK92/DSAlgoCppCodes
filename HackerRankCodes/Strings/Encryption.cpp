/*#include<iostream>

using namespace std;

int main(){
    int n=0,i=0,r,c;
    char *ch;
    cin>>ch;
    //cin.getline(ch,sizeof(ch));

    while(ch[i]!='\0'){
        if(ch[i]!=' ')n++;
        i++;
    }
    //n=sizeof(ch)/sizeof(ch[0]);

    for(i=2;i*i<=n;i++)

    //cout<<n<<endl;

    if(i*i>n){
        i--;
        if(i*(i+1)>=n){
            r=i;c=i+1;
        }
        else{
            r=c=i+1;
        }
    }

    char arr[r][c];
    i=0;
    int i1=0,j1=0;
    while(ch[i]!='\0'){
        if(ch[i]!=' '){
            arr[i1][j1]=ch[i];
            j1++;
            if(j1>=c){
                i1++;
                j1=0;
            }
        }
        i++;
    }
    //cout<<ch<<" "<<n<<endl;

    for(i1=0;i1<c;i1++){
        for(j1=0;j1<r;j1++){
            cout<<arr[j1][i1];
        }
        cout<<" ";
    }

    return 0;
}
*/
