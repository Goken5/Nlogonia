#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> d(n + 1);
    vector<long long> prefix(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> d[i];
        prefix[i] = prefix[i - 1] + d[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        long long sum = prefix[r] - prefix[l - 1];
        int len = r - l + 1;
        long long potential = 11ll * sum * (len - 1);
        cout << potential << endl;
    }
}