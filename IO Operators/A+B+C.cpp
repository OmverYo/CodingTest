#include <iostream>
using namespace std;

int main()
{
    long long A, B, C; // Long Long은 문제의 입력 범위를 고려하여 (1 ≤ A, B, C ≤ 10^12) < 10의 12승 까지 저장 가능
    cin >> A >> B >> C;
    cout << A + B + C << endl;

    return 0;
}