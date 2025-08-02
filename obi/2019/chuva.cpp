#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<char>> parede;

int main(){
    cin >> n >> m;
    parede.assign(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> parede[i][j];
        }
    }

    bool mudou = true;
    while(mudou){
        mudou = false;
        vector<vector<char>> paredeFinal = parede;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(parede[i][j] == '.'){
                    if(i - 1 >= 0 && parede[i - 1][j] == 'o'){
                        paredeFinal[i][j] = 'o';
                        mudou = true;
                    }
                    else if(j - 1 >= 0 && i + 1 < n && parede[i][j - 1] == 'o' && parede[i + 1][j - 1] == '#'){
                        paredeFinal[i][j] = 'o';
                        mudou = true;
                    }
                    else if(j + 1 < m && i + 1 < n && parede[i][j + 1] == 'o' && parede[i + 1][j + 1] == '#'){
                        paredeFinal[i][j] = 'o';
                        mudou = true;
                    }
                }
            }
        }
        parede = paredeFinal;

    }
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << parede[i][j];
        }
        cout << "\n";
    }
    
}