#include <iostream>
#include <vector>
using namespace std;

int main(){
    int p, c;
    cin >> p;
    vector<int> momentosP(p);
    for(int i = 0; i < p; i++) cin >> momentosP[i];
    cin >> c;
    vector<int> momentosC(c);
    for(int i = 0; i < c; i++) cin >> momentosC[i];

    int golsP = 0, golsC = 0;
    momentosP.resize(max(p, c), 101);
    momentosC.resize(max(p, c), 101);

    cout << golsP << " " << golsC << endl;

    while(golsP < p || golsC < c){
        if(golsC == c || (golsP < p  && momentosP[golsP] < momentosC[golsC])) golsP++;
        else if(golsP == p || (golsC < c && momentosP[golsP] > momentosC[golsC])) golsC++;
        cout << golsP << " " << golsC << endl;
    }
}