#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000001];
    scanf("%1000000s", word);

    int count[26] = {0};
    int length = strlen(word);

    // 1단계: 소문자를 대문자로 변환
    for (int i = 0; i < length; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - ('a' - 'A');
        }
    }

    // 2단계: 알파벳 개수 카운트
    for (int i = 0; i < length; i++)
    {
        count[word[i] - 'A']++;
    }

    // 3단계: 최대값 찾기
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
            max = count[i];
    }

    // 4단계: 최대값이 몇 개인지 확인
    int maxCount = 0;
    int index = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == max)
        {
            maxCount++;
            index = i;
        }
    }

    // 5단계: 출력
    if (maxCount > 1)
        printf("?");
    else
        printf("%c", index + 'A');

    return 0;
}