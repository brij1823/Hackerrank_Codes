#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int len;
    cin>>len;
    char name[len];
    cin>>name;
    int jump;
    cin>>jump;
    int i,j;
    jump=jump%26;
    for(i=0;i<len;i++)
    {
        if((name[i]<'z'&&name[i]>='a')||(name[i]>='A')&& name[i]<'Z')
           {

             if(((name[i]<'z'&&name[i]>='a')&&(name[i]+jump<='z'))||(((name[i]>='A')&& name[i]<'Z')&&(name[i]+jump<='Z')))
                {

                 name[i]=name[i]+jump;
                }
             else
             {
                int a;
                if(islower(name[i]))
                 {

                 a=name[i]+jump-'z';

                 }

                else
                 {


                 a=name[i]+jump-'Z';

                 }
                 if(islower(name[i]))

                 {

                 name[i]='a'+a-1;
                 }
                 else
                    name[i]='A'+a-1;
             }

           }
        else if(name[i]=='Z')
        {


            name[i]='A'+jump-1;
        }
        else if(name[i]=='z')
            name[i]='a'+jump-1;
         }
    cout<<name;
}
