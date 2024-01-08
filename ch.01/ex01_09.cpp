#include <iostream>

// while을 사용해 50~100까지 수를 더하는 프로그램
int main()
{
    int val = 50;
    int sum = 0;
    while (val < 100)
    {
        sum += val;
        val++;
    }

    std::cout << "the sum is: " << sum << std::endl;
    return 0;
}
