#include <iostream>

using namespace std;

int main()
{
    int n; // number of the element in a
    cin>>n;
    int a,b(0),c(0),maximumPossibleNumber;

    //input the data as much as the n
    for (int i=0;i<n;i++){
        cin>>a; // input the data
        if (a>0){
            b+=a; //b = the max data
        }
        else{
            c+=a; // c = the min data
        }
    }
    //assing the data to variable below
    maximumPossibleNumber = b-c;
    cout<<maximumPossibleNumber;

    return 0;
}
