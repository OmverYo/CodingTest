#include <stdio.h>

int main()
{
    int N;
    scanf("%100d", &N);
    char word[N][101]; // N개의 단어, 각 단어는 최대 100글자 + null 문자
    int group = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%100s", &word[i][0]);
    }

    for (int i = 0; i < N; i++)
    {
        int check[26] = {0}; // 알파벳 소문자 26개 그리고 {0} 이거나 {0, }로 써도 된다. 모든 배열을 0으로 초기화한다는 의미이다.
        int isGroup = 1;     // 그룹 단어인지 여부

        for (int j = 0; word[i][j] != '\0'; j++)
        {
            int index = word[i][j] - 'a'; // 'a'의 아스키 코드 값을 빼서 0부터 25까지의 인덱스로 변환

            if (check[index] == 0)
            {
                check[index] = 1; // 해당 알파벳이 처음 등장했을때 0또는 1로 표시 해서 boolean처럼 사용한다.
            }
            else
            {
                // 여기 내가 이해 못한거: 여기까지 올 수 있는 조건은 check[index]가 1이라는 것이다. 즉, 해당 알파벳이 이미 등장했다는 것이다.
                // 한번 등장 했던거라 이전 글자와 같아야되는데 같지 않다는건 그룹 단어가 아니라는 것이다.
                if (word[i][j] != word[i][j - 1])
                {
                    isGroup = 0;
                    break;
                }
            }
        }

        if (isGroup)
        {
            group++;
        }
    }

    printf("%d\n", group);

    return 0;
}