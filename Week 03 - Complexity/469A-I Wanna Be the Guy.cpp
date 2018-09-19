#include <iostream>

using namespace std;

int main()
{
    int gameLevel, xSolved, ySolved;
    int levelCanPassed;
    //total level
    cin>>gameLevel;
    int allLevels[gameLevel];
    bool unsolved = false;

    //assign all level to 1, 1 indicate level that unsolved
    for(int i=0;i<gameLevel;i++){
        allLevels[i]=1;
    }

    //input level that X can passed
    cin>>xSolved;
    for(int i=0;i<xSolved;i++){
        cin>>levelCanPassed;
        //delete number in array level that solved
        allLevels[levelCanPassed-1]=0;
    }

    //input level that Y can passed
    cin>>ySolved;
    for(int i=0;i<ySolved;i++){
        cin>>levelCanPassed;
        //delete number in array level that solved
        allLevels[levelCanPassed-1]=0;
    }

    //to check if there's unsolved level
    for (int i=0;i<gameLevel;i++){
        if(allLevels[i]==1){
            unsolved=true;
            break;
        }
    }
    //to print if there's unsolved level
    if(unsolved==true){
        cout<<"Oh, my keyboard!"<<endl;
    }
    else{
        cout<<"I become the guy."<<endl;
    }
    return 0;
}
