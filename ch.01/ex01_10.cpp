#include <iostream>

// 감소 연산자를 사용해 10부터 0까지 수를 출력하는 while 루프를 만든다.
int main()
{
    int val = 10;
    while (val >= 0)
    {
        std::cout << val << std::endl;
        --val;
    }

    return 0;
}