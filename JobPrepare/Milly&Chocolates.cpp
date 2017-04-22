/*#include<iostream>
using namespace std;

int BoxesIndexSearch(int q,int l,int h,int BoxNoCandiesIndex[][2]){
    int mid=(l+h)/2;

    if(l+1==h){
        if(BoxNoCandiesIndex[l][1]>q || BoxNoCandiesIndex[l][1]==q){
            return l+1;
        }
        else return h+1;
    }

    if(BoxNoCandiesIndex[mid][1]<q){
        return BoxesIndexSearch(q,mid,h,BoxNoCandiesIndex);
    }
    else if(BoxNoCandiesIndex[mid][1]>q){
        return BoxesIndexSearch(q,l,mid,BoxNoCandiesIndex);
    }
    else return mid+1;
}

int main(){
    int N;
    cin>>N;
    int Boxes[N],BoxNoCandiesIndex[N][2];
    for(int i=0;i<N;i++){
        cin>>Boxes[i];
    }
    BoxNoCandiesIndex[0][0]=1;
    BoxNoCandiesIndex[0][1]=Boxes[0];
    for(int i=1;i<N;i++){
        BoxNoCandiesIndex[i][0]=BoxNoCandiesIndex[i-1][1]+1;
        BoxNoCandiesIndex[i][1]=BoxNoCandiesIndex[i-1][1]+Boxes[i];
    }
    int Query;
    cin>>Query;
    for(int i=0;i<Query;i++){
        int q;
        cin>>q;
        cout<<BoxesIndexSearch(q,0,N-1,BoxNoCandiesIndex)<<endl;
    }
    return 0;
}
*/
