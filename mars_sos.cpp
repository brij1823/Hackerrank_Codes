#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char msg[500];
   cin>>msg;
   int count=0;
   int len,i;
   len=strlen(msg);
   for(i=0;i<len;i=i+3)
   {
       if(msg[i]!='S')
       {
           count++;
       }

       if(msg[i+1]!='O')
       {
           count++;
       }

        if(msg[i+2]!='S')
       {
           count++;
       }

   }
 cout<<count;
}
