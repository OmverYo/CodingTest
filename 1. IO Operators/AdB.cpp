#include <iostream>
using namespace std;

int main()
{
    double A, B; // 9번째 소수점까지 출력해야 하므로 double 타입 사용
    cin >> A >> B;
    cout.precision(9); // 소수점 9번째 자리까지 출력 설정
    cout << fixed;     // 고정 소수점 표기법 사용
    cout << A / B;

    return 0;
}