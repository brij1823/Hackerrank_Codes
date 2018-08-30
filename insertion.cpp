#include<iostream>
using namespace std;
int main()
{
    int n;
    int flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[n-1];
    for(int j=n-2;j>=0;j--)
    {
        if(x<a[j]){
                a[j+1]=a[j];
           for(int o=0;o<n;o++)
           {
               cout<<a[o]<<" ";
           }

        }
        else{
            flag=1;
             a[j+1]=x;
            for(int o=0;o<n;o++)
           {
               cout<<a[o]<<" ";
           }

            break;
        }
        cout<<endl;
    }
    if(flag==0){
            a[0]=x;
             for(int o=0;o<n;o++)
           {
               cout<<a[o]<<" ";
           }

    }
}
