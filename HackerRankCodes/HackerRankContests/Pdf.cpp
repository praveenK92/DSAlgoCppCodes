/*#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


int main(){
    int h[26],n=26;
    for(int i = 0;i < n;i++){
       cin >> h[i];
    }
    string word;
    cin >> word;
    int l=word.length(),max1=0;
    for(int i=0;i<l;i++){
        int x=word[i]-'a';
        max1=max(max1,h[x]);
        cout<<i<<" "<<max1<<endl;
    }
    cout<<l*max1<<endl;
    return 0;
}
*/
