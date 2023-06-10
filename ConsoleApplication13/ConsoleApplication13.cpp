
#include <iostream>
#include <Windows.h>

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int fib_seq[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 };
        double result[13];

        for (int i = 0; i < 13; i++)
            result[i] = static_cast<double>(fib_seq[i + 1]) / fib_seq[i];

        for (int i = 0; i < 13; i++)
            std::cout << result[i] << std::endl;

        return 0;
    }