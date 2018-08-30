#include<iostream>
using namespace std;
int main()
{
    int total,eat,pay;
    cin>>total>>eat;
    int *p=new int[total];
    int i;
    for(i=0;i<total;i++)
    {
        cin>>p[i];
    }
    cin>>pay;
    int sum=0;

    for(i=0;i<total;i++)
    {
        if(i!=eat)
        {

            sum=sum+p[i];
        }
    }
    int half;
    half=sum/2;

    if(half>=pay)
    {
        cout<<"Bon appetite";

    }
    else
    {
        int a;
        a=half-pay;
        cout<<-a;
    }

}
