#include<iostream>
using namespace std;
int main()
{
    int t,num,d,a,count=0,q=0,j;
    int i,x=0,final[100],ff[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
              x=0;
              count=0;
              cin>>num;
               d=num;
               while(num!=0)
               {
                   a=num%10;
                   final[x]=a;
                   x++;
                   num=num/10;
                   cout<<num<<endl;
               }

    for(j=0;j<x;j++)
    {
        if((d%final[j]==0)&&(final[j]!=0))
        {

            count++;
            cout<<count<<endl;
        }
    }


    ff[q]=count;
    q++;
    }
    for(i=0;i<q;i++)
    {

        cout<<ff[i]<<endl;
    }
}
