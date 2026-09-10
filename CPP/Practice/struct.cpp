#include <iostream>
#include <string>
#include <ctime>

struct student
{
    std::string stuname;
    int score;
};
struct teacher
{
    std::string tchname;
    student stu[5];
};

void insertinfo(teacher tch[], int len)
{
    std::string name = "abcde";
    for (int i = 0; i < len; i++)
    {
        tch[i].tchname = "tch_";
        tch[i].tchname += name;
        for (int j = 0; j < 5; j++)
        {
            tch[i].stu[j].stuname = "stu_";
            tch[i].stu[j].stuname += name[j];
            tch[i].stu[j].score = rand() % 10 + 90;
        }
    }
}

int main()
{
    srand(time(0));
    teacher tch[2];
    int len = sizeof(tch) / sizeof(tch[0]);
    insertinfo(tch, len);
    std::cout << tch[0].stu[0].score;
    return 0;
}