#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#define For(i, a, b) for (int i = a; i < b; ++i)
typedef long long ll;
std::ifstream fin("datain.txt");
std::ofstream fout("dataout.txt");

int foo1(int a, int b) { return a * b + b; }
int foo2(int a, int b) { return (a + b) * b; }

int (*binary_int_op)(int, int);

int main()
{
    int choice;
    std::cin >> choice;
    if (choice == 1)
    {
        binary_int_op = foo1;
    }
    else
    {
        binary_int_op = foo2;
    }
    int m, n;
    std::cin >> m >> n;
    std::cout << binary_int_op(m, n);
    fin.close();
    fout.close();
    return 0;
}