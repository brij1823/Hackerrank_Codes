#include<iostream>
using namespace std;
int main()
{
    int len,i,j;
    char p[100][100];
    cin>>len;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {

            cin>>p[i][j];
        }
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
               if(j!=0&&j!=(len-1)&&i!=0&&i!=(len-1))
               {
                   if(p[i][j]>p[i][j-1]&&p[i][j]>p[i][j+1]&&p[i][j]>p[i+1][j]&&p[i][j]>p[i-1][j])
                   {
                       p[i][j]='X';
                   }
               }
        }
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            cout<<p[i][j];
        }
        cout<<endl;
    }



}
