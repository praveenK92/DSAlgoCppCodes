#include<iostream>

using namespace std;

void swap(int &x,int &y)
{
    int t=x;
    x=y;
    y=t;
}

int main()
{
    int arr[]= {23,9,-4,12,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"sggfgf  ";

    for(int i=0; i<n; i++)
    {
        bool f=false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                f=true;
            }
        }
        if(!f)break;
    }
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }


    cout<<endl;
    system("pause");
}
