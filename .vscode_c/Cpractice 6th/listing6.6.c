#include <stdio.h>

int main()
{
    char sel;
    printf("M: Morning A: Afternoon E: Evening\n");
    printf("입력: ");
    sel = getchar(); // getchar(): 문자열 or 한 문자를 입력 받아 그 전체를 입력버퍼에 저장했다가(입력버퍼에는 계속 남아있음), 입력버퍼에서 문자 단 한개만(입력버퍼에 문자열이 있던 문자 한개만 있던 상관없이 반드시 문자 한개만) 가져와 반환값으로 sel에 저장한다
                     // getchar()를 한번 사용하면 첫번째 글자를, 두번 사용하면 두번째 글자를 반환한다. 즉, n번 사용하면 n번째 글자를 반환한다(첫번째 문자에서 시작해 사용할때마다 그 다음 순서의 문자를 반환하는 것).
    switch (sel)
    {
        case 'M': // M과 비교: 맞음(하지만 실행구문 없으므로 아무일 발생 안함)에도 불구, break없으므로 다음 케이스인 소문자 m으로 이동, m 케이스의 구문을 실행(같은 문자여도 대문자, 소문자는 서로 구분됨)
        case 'm':
            printf("Morning\n"); 
                // break 없으면
        case 'A':
        case 'a':
            printf("Afternoon\n"); // 다음 케이스에 있는 구문까지 저절로 실행됨: 그러니 케이스마다 break 꼭 쓸것
            break;
        case 'E':
        case 'e':
            printf("Evening\n");
            break;
        default:
            printf("잘못된 입력입니다.\n");
            break;
    }

    return 0;
}