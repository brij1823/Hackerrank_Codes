#include<iostream>
using namespace std;
int main()
{
    float rotation,query,temp,p[100000],q[100000];
    int num;

    cin>>num>>rotation>>query;

    int i;
    for(i=0;i<num;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<query;i++)
    {

        cin>>q[i];
    }
    for(i=1;i<=rotation;i++)
    {
        for(int j=num-1;j>=0;j--)
        {
            p[j+1]=p[j];
        }
        p[0]=p[num];
    }
    for(i=0;i<query;i++)
    {
       int a;
       a=q[i];
       cout<<p[a]<<endl;
    }

}
