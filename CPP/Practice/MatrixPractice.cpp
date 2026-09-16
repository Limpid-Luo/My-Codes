#include <iostream>
#define For(i, a, b) for (int i = a; i < b; ++i)

class matrix
{
public:
    int row_x, row_y;
    int col_x, col_y;

    matrix()
        : row_x(0), row_y(0), col_x(0), col_y(0) {}
    matrix(int Row_x, int Row_y, int Col_x, int Col_y)
        : row_x(Row_x), row_y(Row_y), col_x(Col_x), col_y(Col_y) {}

    void print() const
    {
        std::cout << row_x << " " << row_y
            << " " << col_x << " " << col_y << std::endl;
    }
    matrix transpose()
    {
        return matrix(
            row_x, col_x,
            row_y, col_y
        );
    }

    matrix operator+(const matrix &temp) const
    {
        return matrix(
            row_x + temp.row_x,
            row_y + temp.row_y,
            col_x + temp.col_x,
            col_y + temp.col_y
        );
    }
    matrix operator-(const matrix &temp) const
    {
        return matrix(
        row_x - temp.row_x,
        row_y - temp.row_y,
        col_x - temp.col_x,
        col_y - temp.col_y
        );
    }
    matrix operator*(const matrix &temp) const
    {
        return matrix(
            temp.row_x*row_x + temp.col_x*row_y,
            temp.row_y*row_x + temp.col_y*row_y,
            temp.row_x*col_x + temp.col_x*col_y,
            temp.row_y*col_x + temp.col_y*col_y
        );
    }

};
int main()
{   
    matrix m1;
    matrix m2;
    std::cout << "Please enter the matrix 01 by following four numbers:" << std::endl;
    std::cin >> m1.row_x >> m1.row_y >> m1.col_x >> m1.col_y;
    std::cout << "Please enter the matrix 02 by following four numbers:" << std::endl;
    std::cin >> m2.row_x >> m2.row_y >> m2.col_x >> m2.col_y;
    matrix m3 = m1 * m2;//you can change the way within + , - and *
    std::cout << "The result is:" << std::endl;
    m3.print();
    return 0;
}