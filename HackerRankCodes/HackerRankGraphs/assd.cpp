/*#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int j=0,i=0,n;
        char s[10000];
        cin>>s;
        while(s[n]!='\n'){
            n++;
        }

        cout<<s<<n<<endl;
        char r[n];
        j=n;
        while(s[i]!='\0')
        {
            r[j-1]=s[i];
            i++;
            j--;
        }

        cout<<r<<endl;
        bool fl=true;
        for(i=1; i<n-1; i++)
        {
            int a=s[i]-s[i-1],b=r[i]-r[i-1];
            if(a==b || a==-b)continue;
            else
            {
                fl=false;
                break;
            }
        }
        if(fl)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;

    }

    return 0;
}
*/
