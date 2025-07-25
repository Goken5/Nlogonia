#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long resposta = LLONG_MAX;
    {
        long long m = a;
        long long c = 3 * m - a - b;

        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());
        long long mediana = v[1];

        if(mediana == m) resposta = min(resposta, c);
    }
    {
        long long m = b;
        long long c = 3 * m - a - b;

        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());
        long long mediana = v[1];

        if(mediana == m) resposta = min(resposta, c);
    }

    if((a + b) % 2 == 0){
        long long m = (a + b) / 2;
        long long c = 3 * m - a - b;

        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());
        long long mediana = v[1];

        if(mediana == m) resposta = min(resposta, c);
    }
    cout << resposta;
}