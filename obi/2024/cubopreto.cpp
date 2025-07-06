#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int l1 = 0, l2 = 0, l3 = 0, l4 = 0;

    if(n >= 2){
        l1 = (n - 2) * (n - 2) * (n - 2);
        l2 = 6 * (n - 2) * (n - 2);
        l3 = 12 * (n - 2);
        l4 = 8;
    }
    cout << l1 << endl; cout << l2 << endl; cout << l3 << endl; cout << l4 << endl;

}