#include<bits/stdc++.h>
using namespace std;
void BubbleSort(char ar[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
            }
        }

    }
}
int main()
{
    int n;
    cin>>n;
    char A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    BubbleSort(A,n);

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}