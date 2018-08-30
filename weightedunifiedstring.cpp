#include<iostream>
#include<cstring>
using namespace std;
int main()
{
        char name[100000];
        char c[100000];
        int x[100000];
        int y[100000];
        int z[100000];
        int c1=0,c2=0;
        cin>>name;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        int count=1;
        int len=strlen(name);
         int flag=0,i;
        for(i=0;i<len-1;i++)
        {
            flag=0;
            if(name[i]==name[i+1]){
                count++;
            }
            else{
                flag=1;
                c[c1]=name[i];
                int o=name[i];
                z[c1]=o-96;
                y[c2]=count;
                c1++;
                c2++;
                count=1;
            }
        }
        if(flag==0){
            c[c1]=name[i];
            int o=name[i];
             z[c1]=o-96;
            y[c2]=count;
            c1++;
            c2++;
        }
        else{
            c[c1]=name[i];
             int o=name[i];

   z[c1]=o-96;
       y[c2]=count;
            c1++;
            c2++;

        }

        int yy=0;
     for(int j=0;j<n;j++)
     {
         yy=0;

         for(int k=0;k<c1;k++)
         {

             if(x[j]%z[k]==0){
                int u=x[j]/z[k];
                if(u<=y[k]){
                   yy=1;
                   cout<<"Yes"<<endl;
                    break;
                }
             }
         }
         if(yy==0){
            cout<<"No"<<endl;
         }
     }





}
