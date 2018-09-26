#include <iostream>

using namespace std;

int totRow;
int totCol;
char museumMap[1000][1000];
int museumMapTemp[1000][1000] = {0};
int regionFound=0;
int paintingCansee = 0;



void floodFill (int row, int col)
{
    if( row<0 || row >=totRow || col<0 || col >=totCol){
        return;
    }
    if (museumMapTemp[row][col]!=0){
        return;
    }
    //"*" equals the painting position
    if(museumMap[row][col]=='*'){
        paintingCansee++;
        return;
    }



    museumMapTemp[row][col] = regionFound;
    floodFill(row+1,col);
    floodFill(row-1,col);
    floodFill(row,col+1);
    floodFill(row,col-1);
    return;

}

int main()
{
    int rowTest, colTest, startPos;
    int totalAnswer [1000000]={0};

    cin>> totRow >> totCol >> startPos;
    for (int i=0;i<totRow;i++){
        for (int j=0;j<totCol;j++){
            cin>>museumMap[i][j]; //input the museum map size n x m
        }
    }
    // to know how many is the answer
    for(int i=0;i<totRow;i++){
        for (int j=0;j<totCol;j++){
            if (museumMap[i][j]=='.' && museumMapTemp[i][j]==0){
                regionFound++;
                paintingCansee = 0;
                floodFill(i,j);
                totalAnswer[regionFound]=paintingCansee;
            }
        }
    }

    for (int i=0;i<startPos;i++){
        cin>>rowTest>>colTest; // insert the empty location
        //total answer
        cout << totalAnswer[museumMapTemp[rowTest-1][colTest-1]] << endl;
    }

    return 0;
}
