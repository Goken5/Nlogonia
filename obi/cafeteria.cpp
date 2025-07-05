#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = d;

    while(true){
        if(c - d >= a && c - d <= b){
            cout << "S";
            return 0;
        }else if(c - d < a){
            cout << "N";
            return 0;
        }else{
            d += e;
        }
    }
}