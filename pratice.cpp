#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;

    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

    int r = 0;
    int c=col-1;
    int target;
    cout<<"en target"<<endl;
    cin>>target;
    while (r<row && c>=0)
    {
        if(a[r][c] == target)
        {
            cout<<"Target found"<<r<<c;
            return 0;
        }
        else if(a[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
    
}