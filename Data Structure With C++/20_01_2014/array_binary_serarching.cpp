#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,item;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>item;
    // sorting
    sort(ar,ar+n);
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;

        if(ar[mid] == item)
        {
            cout << "Item found at " << mid << endl;
            break;
        }
        else if(item < ar[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
     }

    return 0;
}