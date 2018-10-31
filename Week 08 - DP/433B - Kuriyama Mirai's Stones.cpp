#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    long long int stoneNum, questNum, l, r, left, right, type;
    long long int stoneCost;
    long long int sum;

    cin>>stoneNum;//INPUT NUMBER OF STONES
    long long int cost[stoneNum], sortedCost[stoneNum] ,usedSortedCost[stoneNum];

    for (int i=0; i<stoneNum; i++) {
        cin>>stoneCost;//INPUT STONE COSTS
        cost[i]=cost[i-1]+stoneCost; // ADD THE BEFORE ARRAY WITH THE STONECOST
        sortedCost[i]=stoneCost; //ASSIGN THE NUMBER TO ARRAY THAT WILL BE SORTED
        usedSortedCost[i]=stoneCost;
    }
    //SORT THE ARRAY IN INCREASING NUMBER
    sort(sortedCost, sortedCost+stoneNum);
    sort(usedSortedCost, usedSortedCost+stoneNum);

    //FORMING ARRAY WHICH CONTAINS TOTAL UNTIL THAT POINT
    usedSortedCost[0]=sortedCost[0];
    for (int i=1; i<stoneNum; i++) {
        usedSortedCost[i]=usedSortedCost[i-1]+sortedCost[i];
    }

    cin>>questNum; //INPUT HOW MANY QUESTION

    for (int i=0; i<questNum; i++) {
        cin>>type>>l>>r; //INPUT TYPE, LEFT SIDE NUMBER, RIGHT SIDE NUMBER
        //IF IT'S TYPE 1
        if (type==1) {
            sum=cost[r-1]-cost[l-2];
            cout<<sum<<endl;
        }
        //IF IT'S TYPE 2
        else {
            //IF THE LEFT SIDE NUMBER IS 1
            if (l==1) {
                sum=usedSortedCost[r-1];
            }
            //IF THE LEFT BOUND IS NOT 1
            else {
                sum=usedSortedCost[r-1]-usedSortedCost[l-2];
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
