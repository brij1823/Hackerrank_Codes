#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string1[10000],string2[10000];
    cin>>string1;
    cin>>string2;
    int counter=0;
    int l1=strlen(string1);
    int l2=strlen(string2);
    if(l1<=l2)
    {
        int flag;
        for(int i=0;i<l2;i++)
        {
            flag=0;
            for(int j=0;j<l1;j++)
            {
                if(string1[j]==string2[i]){
                    flag=1;
                    string1[j]='0';
                    break;
                }
            }
            if(flag==0)
            {
                counter++;
            }
        }
        for(int i=0;i<l1;i++)
        {
            if(string1[i]!='0'){
                counter++;
            }
        }
        cout<<counter;
    }
    else{
            int flag;
        for(int i=0;i<l1;i++)
        {
            flag=0;
            for(int j=0;j<l2;j++)
            {
                if(string2[j]==string1[i]){
                    flag=1;
                    string2[j]='0';
                    break;
                }
            }
            if(flag==0)
            {
                counter++;
            }
        }
        for(int i=0;i<l2;i++)
        {
            if(string2[i]!='0'){
                counter++;
            }
        }
        cout<<counter;


    }

}
