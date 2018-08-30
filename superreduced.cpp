#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[100];
    cin>>name;
    char myname[100];
    char spare[100];
    for(int u=0;u<0;u--){

    int x=0;
    int l;
    int count=1;
    l=strlen(name);
    int flag=0;
    for(int i=0;i<l;i++)
    {
        if(name[i]==name[i+1]){
           flag=1;
           count++;
        }
        else{

            if(count%2!=0){
                myname[x]=name[i];
                x++;
            }
            count=1;
        }
    }
    if(flag==0){
        myname[x]=name[l-1];
        x++;
    }
    if(x==0){
            cout<<"Empty String";
            break;}
    else if(x==2 && myname[0]==myname[1])
        {cout<<"Empty String";
    break;}
    else{
            int xr=0;
    for(int i=0;i<x;i++){

        spare[xr]=myname[i];
        xr++;
    }}
    if(u!=0){
        if(strcmp(spare,myname)==0){
            cout<<myname;
            break;
        }
    }
    strcpy(name,myname);

    }
}
