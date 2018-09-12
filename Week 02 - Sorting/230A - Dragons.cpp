#include <bits/stdc++.h>
using namespace std;

// function of sort
void gnomeSort(int arr[], int ar[], int n)
{
    int index = 0;

    while (index < n) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            swap(ar[index], ar[index - 1]);
            index--;
        }
    }
    return;
}

int main()
{
    int n; // Kirito's strength
    int dragonNumber; // dragons that Kirito's got to defeat
    cin>>n>>dragonNumber;

    int DragonStr[dragonNumber]; // declare the dragon's strength
    int bonusStr[dragonNumber]; // declare the bonus strength

    for(int i=0; i<dragonNumber; i++)
    {
        cin>>DragonStr[i]>>bonusStr[i];
    }

    gnomeSort(DragonStr, bonusStr, dragonNumber); // to sort Dragon Strength, Bonus Strength
    for (int i = 0; i<dragonNumber; i++)
    {
        // check Kirito's strength is greater than dragon's
        if(n>DragonStr[i])
            {
                n += bonusStr[i];
            }
        else
           {
                n = 0;
                break;
           }
    }

    // check whether Kirito is win or lose
    if (n>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
