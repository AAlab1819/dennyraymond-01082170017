#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int lanternNumb, lenOfstreet;
    double lightRadius=0;
    cin>>lanternNumb>>lenOfstreet;
    long long int n[lanternNumb];

    for(int i=0;i<lanternNumb;i++){
        cin>>n[i];
    }

    sort(n,n+lanternNumb);

    for(int i=0;i<lanternNumb-1;i++){
        if(n[i+1]-n[i]>lightRadius){
            lightRadius=n[i+1]-n[i];
        }
    }
    lightRadius = lightRadius/2;
    if (n[0]>lightRadius){
        lightRadius=n[0];
    }
    if (lenOfstreet-n[lanternNumb-1]>lightRadius){
            lightRadius = lenOfstreet-n[lanternNumb-1];
        }
    printf("%.10f\n",lightRadius);

    return 0;
}
