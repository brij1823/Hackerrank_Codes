#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int rdd,rmm,ryy;
    cin>>rdd>>rmm>>ryy;
    int dd,mm,yy;
    cin>>dd>>mm>>yy;
    if(ryy!=yy)
    {
        int c;
        c=ryy-yy;
        if(c>0)
        {
        cout<<"10000";
        exit(1);
        }
        else
        {
            cout<<"0";
             exit(1);
        }
    }
    else if(rmm!=mm)
    {
        int a;
        a=rmm-mm;
        if(a>0)
        {
        cout<<a*500;
        exit(1);
        }
          else
        {
            cout<<"0";
             exit(1);
        }
    }
    else if(dd!=rdd)
    {
        int b;

        b=rdd-dd;
        if(b>0)
        {


        cout<<b*15;
        exit(1);
        }
        else
        {
            cout<<"0";
             exit(1);
        }
    }
    else
    {
        cout<<"0";
    }


}
