#include <bits/stdc++.h>

using namespace std;

int main()
{
    int divNumber,givenNumber;
    int numerator;
    int denumerator;

    cin>>givenNumber;
    //below if statement to check given number is even or odd
    if (givenNumber%2==0){
       // ^ if given number is even then
       divNumber = givenNumber/2; //given number always divided by 2 according to the questions
       if (divNumber%2==0){
        // ^ if divNumber is even
        numerator = divNumber-1;
       }
       else{
        //if divNumber is odd
        numerator = divNumber-2;
       }
    } else {
        //if given number is even then
        divNumber = givenNumber/2; //given number always divided by 2 according to the questions
        numerator = divNumber;
    }
    // denumerator always come from given number subtract with numerator
    denumerator = givenNumber - numerator;

    cout <<numerator<<" "<<denumerator<<endl;

    return 0;
}
