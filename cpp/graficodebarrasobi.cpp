#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> brinquedos;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        brinquedos.push_back(a);
    }

    int h = *max_element(brinquedos.begin(), brinquedos.end());

    for(int linha = 0; linha < h; linha++){
        for(int i = 0; i < n; i++){
            if(linha < h - brinquedos[i]) cout << 0;
            else cout << 1;
            if(i < n - 1) cout << " ";
        }
        cout << "\n";
    }

}
