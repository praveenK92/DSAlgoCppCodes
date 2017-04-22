/*#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(char *a,char *b){
    char temp;
   temp=*a;
    *a=*b;
    *b=temp;
}

void permute(char *c,int l,int r){
    if(l==r)cout<<c<<endl;
    else{
        for(int i=l;i<=r;i++){
            //swap(c[l],c[i]);
            swap((c+l),(c+i));
            permute(c,l+1,r);
            // doing backtracking
            swap((c+l),(c+i));
        }
    }
}
int main(){
    //char *x = (char *)malloc(sizeof(char) *4);
    char *x;
    x=new char[3];
    //x="ABC"; this line causes error due to some unknown reasons
    // give ABC as a string as input
    cin>>x;
    //char x[]="ABC";
    int n=sizeof(x)/sizeof(x[0])-1;
    cout<<"Original String: "<<x<<" Length: "<<n<<endl;
    permute(x,0,n-1);
    return 0;
}
*/
