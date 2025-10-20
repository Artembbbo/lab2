#include <iostream>
#include <algorithm>
bool is_right(int&);

int main()
{
    std::cout << "enter a and b\n";
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    if (a < 10) {
        a = 12;
    }
    if (a <= 0 || b <= 0) {
        std::cout << "error"; return 0;
    }
    if (a > b) {
        std::swap(a, b);
    }
    for (int i = a; i <= b; i++)
    {
        if (is_right(i) == 1) {
            std::cout << i << " ";
        }
    }

}
bool is_right(int& n) {
    int b = 0;
    int c = n % 10;
    for (int i = 100; i < n * 10; i = i * 10) {
        b = (n % i - n % (i / 10)) / (i / 10);  if (c <= b) {
            return false;
        }
        c = b;
    }
    return true;
}

