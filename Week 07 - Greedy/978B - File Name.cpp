#include <iostream>

using namespace std;

int main()
{
    int n; // length of the file name
    cin>>n;
    string a; // use string instead of array, cos string are array of character :)
    int totalRemove = 0;
    cin>>a; // input all the character
    for(int i=0;i<n;i++){
            //check the 'x', if there are 3 'x' in sequence. add total remove
            if (a[i]=='x' && a[i+1]=='x' && a[i+2]=='x'){
                totalRemove+=1;
                //i--;
            }
    }
    //output the total remove
    cout<<totalRemove;
    return 0;
}
