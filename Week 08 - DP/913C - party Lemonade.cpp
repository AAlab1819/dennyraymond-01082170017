#include <iostream>

using namespace std;

int main()
{
    //Assign the variable
    int n,L; // n is the number of types , L is the required amount of the lemonade in liters
    int bottleNeed;
    cin>>n>>L;
    int BottleCost[n];
    long long int ans = 4e18, sum = 0;

    for(int i=0;i<n;i++){
        cin>>BottleCost[i];
    }

    for(int i=1;i<n;i++){
        if (BottleCost[i]>2*BottleCost[i-1]){
            BottleCost[i] = 2*BottleCost[i-1];
        }
    }
    for (int i=n-1;i>=0;i--){
        bottleNeed = L/(1<<i);
        sum+= (long long) bottleNeed * BottleCost[i];
        L -= bottleNeed << i;
        ans = min(ans,sum +(L>0) * BottleCost[i]);
    }
    cout<<ans;
    return 0;
}
