/* largest area in a given matrix*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{   int n,m;
    cin>>n>>m;
    int a[n][m];
    int total=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
       cin>>a[i][j];
       int temp_x;
       int temp_y;
       int start_x,start_y;
       int end_x, end_y;
       int count=0;
     for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
     {

         if((a[i][j]==1 && j==0 ) | (a[i][j]==1  && a[i][j-1]==0))
            {

                temp_x=i;
                temp_y=j;
            }
            if(a[i][j]==1)
                {count++;}
                cout<<count<<endl;
                if((a[i][j]==0 || j==m-1)& count>total )
            {

                total=count;
                count=0;
                start_x=temp_x;
                start_y=temp_y;
                end_x=i;
                end_y=j-1;
            }
             if(a[i][j]==0)
                count=0;
     }
     cout<< start_x<<start_y<<" "<<end_x<<end_y;
    return 0;
 /*   for(int i=0;i<n;i++)
           { int count =0;

               for(int j=0;j<m;j++)
    {       if((a[i][j]==1 && a[i][j-1]!=1)|| (a[i][j]==1 && j==0))
              row_start.push_back()
             if(a[i][j]==1)
                count++;
             else if( a[i][j])
    }
           }
*/
}
