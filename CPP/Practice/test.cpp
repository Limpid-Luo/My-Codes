#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#define For(i, a, b) for (int i = a; i < b; ++i)
typedef long long ll;
std::ifstream fin("datain.txt");
std::ofstream fout("dataout.txt");

class Vactor
{
public:
    int x, y, z;

    explicit Vactor() : x(0), y(0), z(0) {}
    explicit Vactor(int x, int y, int z) : x(x), y(y), z(z) {}

    bool operator<(const Vactor &v) const
    {
        return x < v.x && y < v.y && z < v.z;
    }
    Vactor operator*(const Vactor &v) const
    {
        Vactor res;
        res.x = y * v.z + z * v.y;
        res.y = z * v.x + x * v.z;
        res.z = x * v.y + y * v.x;
        return res;
    }
};

int foo1(int a, int b) { return a * b + b; }
int foo2(int a, int b) { return (a + b) * b; }

int (*binary_int_op)(int, int);

int main()
{
    int choice;
    Vactor v1 = Vactor(1, 2, 3);
    Vactor v2 = Vactor(4, 5, 6);
    Vactor v3 = v1 * v2;
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
    std::cout << binary_int_op(m, n) << std::endl;
    std::cout << v3.x << " " << v3.y << " " << v3.z << std::endl;//输出向量叉乘结果
    fin.close();
    fout.close();
    return 0;
}