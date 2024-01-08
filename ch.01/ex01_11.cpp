#include <iostream>
// 사용자에게 입력받은 주 정수의 범위 내에 있는 수를 출력하는 프로그램을 만든다.
int main()
{
    int val1 = 0, val2 = 0;
    std::cout << "please input two integers:\n";
    std::cin >> val1 >> val2;
    // val1이 val2 보다 크면 값 변경
    if (val1 > val2)
    {
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    while (val1 <= val2)
    {
        std::cout << val1 << std::endl;
        ++val1;
    }
    std::cout << std::endl;

    return 0;
}
