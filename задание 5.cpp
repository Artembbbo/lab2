#include <iostream>
int fibonacci(int&);
int fibonacci_sum(int);
int main()
{
    std::cout << "enter number\n";
    int n = 0;
    int a = 0;
    std::cin >> n;
    if (n < 0) {
        std::cout << "error"; return 0;
    }
    else
    if (n == 2) { std::cout << "sum is" << " " << 2; return 0; }
    if (n == 1) { std::cout << "sum is" << " " << 1; return 0; }
    if (n == 0) { std::cout << "sum is" << " " << 0; return 0; }
    std::cout << "sum is" << " " << fibonacci_sum(n);
}
int fibonacci(int& a) {
    int x = 0; int y = 1; int b = 0;
    for (int i = 0; i < a; i++) {
        b = x + y; x = y; y = b;
    }
    return b;
}
int fibonacci_sum (int n) {
    int sum = 0;
    for (int i = 3; sum < n; i++) {
        sum = sum + fibonacci(i); if (sum >= n) {
            sum = sum - fibonacci(i) + 4; break;
        }
    }
    return sum;
}