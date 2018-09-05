#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int HaveYellow,HaveGreen; //The balls that Grisha have
    long long int YellowBall,GreenBall,BlueBall;
    //int ProduceYellow,ProduceGreen,ProduceBlue;
    long long int ReqYellow,ReqBlue;
    long long int TotalRemainBallYellow,TotalRemainBallBlue,Total;
    long long int YC,BC;
    cin>> HaveYellow;
    cin>> HaveGreen;
    cin>> YellowBall;
    cin>> GreenBall;
    cin>> BlueBall;

    ReqYellow = (2*YellowBall) + GreenBall;
    ReqBlue = (3*BlueBall) + GreenBall;
    YC = ReqYellow-HaveYellow;
    BC = ReqBlue-HaveGreen;
    Total = YC + BC;
    if(YC<0){
        Total = Total-YC;
    }
    if(BC<0){
        Total = Total-BC;
    }
    cout<<Total<<endl;
    //cout<<Total<<endl;



    return 0;
}
