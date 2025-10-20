#include <iostream>
#include <algorithm>
bool is_contractible(int, int);
double output(double&, double);
int main()
{
    std::cout << "enter number\n";
    double i = 1;
    double n = 0;
    std::cin >> n;
    if (n <= 0) {
        std::cout << "error"; return 0;
    }
    output(n, i);
}
bool is_contractible(int a, int b) {
    if (b > a) {
        std::swap(a, b);
    }
    int gcd = 1;
    for (int i = 2; i < a; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    if (gcd == 1) { return false; }
    else
        return true;
}
double output(double& n, double i) {
    for (double i = 1; i < n; i++) {
        if (i == n - 1) {
            i = 1; n = n - 1;
        }
        if (n - 1 == 1) { return 0; }
 if (is_contractible(i, n - 1) == 0) {
            std::cout << i / (n - 1) << " ";
        }

    }
}