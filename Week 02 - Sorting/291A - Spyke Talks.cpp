#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    int n; //number of secretary
    cin>>n;
    int counter=0;
    int Ids[n]; // ids equal the number of call session of the i-th secretary

    for(int i=0;i<n;i++){
        cin>>Ids[i];
    }
    selectionSort(Ids,n);

    for(int i=0;i<n-1;i++){

        if (Ids[i]!=0 && Ids[i]==Ids[i+2]){
            counter=-1;
            break;
        }

        if (Ids[i]!=0 && Ids[i]==Ids[i+1]){
            i++;
            counter++;
        }

    }
    cout<<counter<<endl;


    return 0;
}
