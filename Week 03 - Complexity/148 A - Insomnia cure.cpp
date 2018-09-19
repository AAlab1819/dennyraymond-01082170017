#include <iostream>

using namespace std;

int main()
{
    // k = dragon got punch , l = dragon got his tail shut,
    // m = dragon got his paws trampled, n = dragon to call her mom ?
    // d = total of dragon
    int k,l,m,n;
    int dragonDMG=0;
    int totalDragon;
    cin>>k>>l>>m>>n>>totalDragon;

    // check if the input number is 1, if yes then every dragon is damaged
    if (k==1 || l==1 || m==1 || n==1){
        dragonDMG = totalDragon;
    }
    // check if there's other number than 1
    else {
            //loop every dragon
        for(int i=1;i<=totalDragon;i++){
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            dragonDMG++;
            }
        }
    }
    cout<<dragonDMG;

    return 0;
}
