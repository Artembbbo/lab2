#include <iostream>
#include <cmath>
int ammount_numbers(int&, int&);
bool is_armstronga(int&);
int output(int);
int main()
{
    int a = 0;
    int c = 0;
    std::cout << "enter your number\n";
    int n = 0;
    std::cin >> n;
    if (n <= 0) {
        std::cout << "error"; return 0;
    }
    if (n <= 152) {
        std::cout << "no right numbers"; return 0;
    }
    std::cout << "numbers is" << " ";
    output(n);
}
int ammount_numbers(int& n, int& a) {
    int i = 10;
    while (i < n) {
        if (n % i == n) {
            break;
        }
        i = i * 10; a++;
    }
    return a + 1;
}
bool is_armstronga(int& n) {
    int b = 0;
    int sum = 0;
    int d = 0;
    int a = 0;
    int e = n % 10;
    d = ammount_numbers(n, a);
    for (int i = 100; i < n * 10; i = i * 10) {
        b = (n % i - n % (i / 10)) / (i / 10); sum = sum + std::pow(b, d);
    }
    return (sum + pow(e, d) == n) ? true : false;
}
int output(int n) {
    for (int i = 0; i <= n; i++)
    {
        if (is_armstronga(i) == 1 && i > 9) {
            std::cout << i << " ";
        }
    }
    return 0;
}