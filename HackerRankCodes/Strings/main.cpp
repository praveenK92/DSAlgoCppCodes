#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;

    char *s,*r;
    cin>>s;
    cin>>r;

    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<10;i++)cout<<s[i];
    cout<<endl;
    for(int i=0;i<10;i++)cout<<r[i];

    //cout<<s<<n<<r;

    return 0;
}

