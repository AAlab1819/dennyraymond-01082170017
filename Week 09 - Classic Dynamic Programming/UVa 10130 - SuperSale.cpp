#include <bits/stdc++.h>

using namespace std;

int knapsack (int MW, int W[], int P[], int N)
{
    int K[N+1][MW+1];
    for(int i=0;i<=N;i++){
        for(int j=0; j<=MW;j++){
            if (i==0 || j==0)
                {
                    K[i][j] = 0;
                }
            else if (W[i-1] <= j)
                {
                    K[i][j] = max(P[i-1] + K[i-1][j-W[i-1]], K[i-1][j]);
                }
            else{
                    K[i][j] = K[i-1][j];
                }
            }
        }
    return K[N][MW];
}

int main()
{
    int T; // test case
    cin>>T;
    int N; // number of objects
    int P[10000]; // price of the objects
    int W[10000]; // weight of the objects
    int G; // number of person in our group
    int MW; // maximal weight
    int total;

    for (int i=0;i<T;i++){
        cin>>N;
        for (int j=0;j<N;j++){
            cin>>P[j]>>W[j];
        }
        cin>>G;
        for (int k=0;k<G;k++){
            cin>>MW;
            total = total + knapsack(MW,W,P,N);
        }
    cout<<total<<endl;
    total=0;
    }
    return 0;
}
