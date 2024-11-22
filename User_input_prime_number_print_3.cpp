//HH
#include <iostream>
using namespace std;

void prime(int n) {
    int factors, i, j;
    cout << "Prime numbers are: ";
    for (i = 2; i <= n; i++) {
        factors = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                factors = factors + 1;
            }
        }
        if (factors == 2) {
            cout << i << ", ";
    }

}
}
int main() {
    int n;
    cout << "Enter an integer value: ";
    cin >> n;
    prime(n);
    return 0;
}
//HH
