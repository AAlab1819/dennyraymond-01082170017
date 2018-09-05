#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numStudent,TotalstudentInOneTeam;
    int studRank[100];
     cin>>numStudent;
    cin>>TotalstudentInOneTeam;


    vector<int> ranks;
    set<int> uniqueScores;
    set<int>::iterator it;


    for (int i=0;i<numStudent;i++){
        cin>>studRank[i];
        uniqueScores.insert(studRank[i]);
    }
    if(uniqueScores.size()<TotalstudentInOneTeam)
        cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        for (it=uniqueScores.begin();it!=uniqueScores.end();it++){
            for (int i=0;i<numStudent;i++){
                if(studRank[i]==*it){
                    ranks.push_back(i+1);
                    break;
                }
            }
        }
        sort(ranks.begin(),ranks.end());
        for(int i=0;i<TotalstudentInOneTeam;i++)
            cout<<ranks[i]<<" ";
    }
    return 0;
}
