#include <iostream>
using namespace std;

int main(){
    int n, i, p;
    cin >> n >> i >> p;

    if(i + p <= n){
        cout << i + p;
    }
    else{
        int k = i;
        for(int j = 0; j < p; j++){
            k++;
            if(k > n){
                k = 1;
            }
        }
        cout << k;
    }
    
}