#include <stdio.h>
#include <string.h>

int main()
{
    char paper[51];
    double credit;
    char grade[3];
    double total_score = 0; // 0으로 무조건 초기화 해야됨 안그러면 -30000에 더하는 수가 있음
    double total_credit = 0;
    double gpa;

    for (int i = 0; i < 20; i++)
    {
        scanf("%50s %6lf %2s", paper, &credit, grade); // 문자열에는 &가 필요없음

        if (strcmp(grade, "A+") == 0) // 문자열은 "" 문자는 ''
        {
            total_score += credit * 4.5;
            total_credit += credit;
        }

        else if (strcmp(grade, "A0") == 0)
        {
            total_score += credit * 4.0;
            total_credit += credit;
        }

        else if (strcmp(grade, "B+") == 0)
        {
            total_score += credit * 3.5;
            total_credit += credit;
        }

        else if (strcmp(grade, "B0") == 0)
        {
            total_score += credit * 3.0;
            total_credit += credit;
        }

        else if (strcmp(grade, "C+") == 0)
        {
            total_score += credit * 2.5;
            total_credit += credit;
        }

        else if (strcmp(grade, "C0") == 0)
        {
            total_score += credit * 2.0;
            total_credit += credit;
        }

        else if (strcmp(grade, "D+") == 0)
        {
            total_score += credit * 1.5;
            total_credit += credit;
        }

        else if (strcmp(grade, "D0") == 0)
        {
            total_score += credit * 1.0;
            total_credit += credit;
        }

        else if (strcmp(grade, "F") == 0)
        {
            total_score += credit * 0.0;
            total_credit += credit;
        }

        else
        {
            continue;
        }
    }

    gpa = total_score / total_credit;
    printf("%6lf", gpa);

    return 0;
}