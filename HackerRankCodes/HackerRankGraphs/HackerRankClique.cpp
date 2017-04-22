/*#include<iostream>
#include<math.h>
using namespace std;
//not done
int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        long N,M;
        cin>>N>>M;
        long ans=N;
        double d=((N*N)/((double)(N*N-2*M)));
        ans=ceil(d);

        for(long r=d+1;r<=N;r++){
            double d1=(double)(1-(1/(double)(r)))*((N*N)/(double)(2));
            //cout<<r<<" N="<<N<<" M="<<M<<" d1="<<d1<<" ceil(d)="<<ceil(d1)<<endl;
            if((long)ceil(d1)-M<=0){
                if(r>ans)ans=r;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
