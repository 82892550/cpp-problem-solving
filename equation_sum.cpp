#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
long long power(long long x, long long i) {
    long long res = 1;
    for (long long j = 0; j < i; j++) {
        res *= x;
    }
    return res;
}

long long equ(long long x, long long n) {
    
    
    long long sum=0;
    for( long long i = 0; i <= n; i+=2) {
        
            if (i == 0) {
                sum += power(x, i) - 1;
            }
            else {
                sum += power(x, i) ;
            }
        
        
    }
    return sum;
}

int main() {
    long long x, n;
    cin >> x >> n;
    cout << equ(x, n);

    return 0;
}
