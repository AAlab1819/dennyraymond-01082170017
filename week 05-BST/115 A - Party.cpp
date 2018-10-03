#include <iostream>

using namespace std;

int main()
{
    int numEmployee;
    int temp;
    int toCheck;
    int grup = 0;

    // input employee number
    cin>>numEmployee;
    int boss[numEmployee];

    for(int i=1;i<=numEmployee;i++){
        cin>>boss[i];
    }

    for(int i=1;i<=numEmployee;i++){
        temp=1;
        toCheck=boss[i];
        //to check if its boss or not
        while(toCheck!=-1){
            temp++;
            toCheck=boss[toCheck];
        }
        grup=max(temp,grup);
    }

    cout<<grup<<endl;
    return 0;
}
