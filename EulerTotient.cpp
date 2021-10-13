#include <bits/stdc++.h>

using namespace std;

int phi(int n){
    float result = n;
    for(int p = 2; p*p <= n; p++)
    {
        if(n % p == 0){
            result *= (1.0 - (1.0/(float)p));

            while(n%p == 0){
                n /= p;
            }
        }

    }

    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));
    return (int)result;
}

int main(){
    int num;
    cin >> num;
    cout << phi(num) << endl;
    return 0;
}