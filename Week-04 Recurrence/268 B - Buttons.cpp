#include <iostream>

using namespace std;

int main()
{
    long long int n; // the number of buttons to lock
    long long int total =0; // total try
    cin>>n;
    //do the loop for check how many times to try, worst case
    for(int i =1;i<n;i++){
        total+=((n-i)*i);
    }
    total = total + n;
    cout<< total;
    return 0;
}
