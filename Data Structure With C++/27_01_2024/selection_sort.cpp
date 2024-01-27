#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int ar[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index= INT_MAX;
        int j=min_index;
        for(j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                min_index=i;
            }
            else{
                swap(ar[i],ar[j]);
            }

        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    SelectionSort(A,n);

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}