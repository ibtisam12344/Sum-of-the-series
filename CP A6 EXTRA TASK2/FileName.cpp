#include <iostream>
using namespace std;
int main() {
    int x, n;
    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> n;
    int sum = 0;
    int term = x;
   cout << "The values of series:" <<endl;
    for (int i = 1; i <= n; ++i) {
        cout << term << endl;
        sum += term;

       
        term *= -x * x;
    }
  cout << "The sum of the series up to " << n << " terms is: " << sum <<endl;

    return 0;
}
