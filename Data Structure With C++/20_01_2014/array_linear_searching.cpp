#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int item;
    cin>>item;
    int j = 0;
    while( j < n)
    {
    if( ar[j] == item ) 
    {
    cout<<"Element found "<<item<<" at index "<<j;
    break;
    }
    j++;
    }
    if(j==n)
    {
        cout<<"Element "<<item<<" was not found"<<endl;
    }
    return 0;
}
