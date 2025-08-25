#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int caminho[3];
    cin >> caminho[0] >> caminho[1] >> caminho[2];

    sort(caminho, caminho + 3);

    cout << (caminho[2] - caminho[0]) * 2;
    
}