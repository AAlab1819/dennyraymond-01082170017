#include <iostream>

using namespace std;

// To find gap between elements
int getNextGap(int gap)
{
    // Shrink gap by Shrink factor
    gap = (gap*10)/13;

    if (gap < 1)
        return 1;
    return gap;
}

// Function to sort a[0..n-1] using Comb Sort
void combSort(int a[], int n)
{
    // Initialize gap
    int gap = n;

    // Initialize swapped as true to make sure that
    // loop runs
    bool swapped = true;

    // Keep running while gap is more than 1 and last
    // iteration caused a swap
    while (gap != 1 || swapped == true)
    {
        // Find next gap
        gap = getNextGap(gap);

        // Initialize swapped as false so that we can
        // check if swap happened or not
        swapped = false;

        // Compare all elements with current gap
        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
}
int main()
{
    long long int n;//number of stewards
    cin>>n;
    int stewardsStrength[n];
    long long int counter = 0;
    for(int i=0;i<n;i++){
        cin>>stewardsStrength[i];
    }
    combSort(stewardsStrength,n);
    //to checks the stewards strength
    for(int i=0;i<n;i++){
        if (stewardsStrength[i]>stewardsStrength[0] && stewardsStrength[i]<stewardsStrength[n-1]){
            counter ++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
