#include <iostream>

using namespace std;

int main()
{
    int n; // number of training sessions
    cin>>n;
    int a[n]; // number of teams each day
    int counter = 1;

    //assign the numbers in an array
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        //cin>>a[i];
        //to check if the first day team are odd
        if (a[i]%2==1){
                //to check if the next day don't need extra pizza or last day team is odd
            if ( a[i+1]==0||i==n-1){
                counter=2;
                break;
            }
            a[i+1]--;
        }
    }

    if (counter==1){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
