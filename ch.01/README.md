### Exercise 1.3

> 표준 출력에 Hello, World를 출력하는 프로그램을 만든다.

```c++
#include <iostream>

int main()
{
    std::cout << "Hello, World" << std::endl;
    return 0;
}
```

### Exercise 1.4

> 완성한 프로그램에서는 덧셈 연산자(+)를 사용해 두 수를 더한다. 이를 고쳐 곱셈 연산자(\*)를 사용해 곱을 출력하도록 한다.

```c++
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The multiply of " << v1 << " and " << v2
            //   << " is " << v1 + v2 << std::endl; 덧셈
              << " is " << v1 * v2 << std::endl;
    return 0;
}
```

### Exercise 1.5

> 출력을 긴 문장 하나로 만들었다. 문장을 나눠 각 피연사자별로 출력하도록 프로그램을 고친다.

```c++
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The multiply of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}
```

### Exercise 1.6

> 아래 프로그램이 올바른지 설명한다. 올바르면 무엇을 하는지, 올바르지 않으면 왜 그런지 이유와, 어떻게 고쳐야하는지를 설명한다.

```c++
// 문제 프로그램
#include <iostream>

int main()
{
    int v1 = 0; v2 = 0;

    std::cin >> v1 >> v2;

    std::cout << "The sum of" << v1;
    		 << "and" << v2;
              << "is" << v1 + v2 << std::endl;
    return 0;
}
```

```c++
// 수정 프로그램(세미콜론 수정)
#include <iostream>

int main()
{
    int v1 = 0; v2 = 0

    std::cin >> v1 >> v2

    std::cout << "The sum of" << v1
    		 << "and" << v2
              << "is" << v1 + v2 << std::endl;
    return 0;
}
```

### Exercise 1.9

### Exercise 1.10

### Exercise 1.11

### Exercise 1.12

> for 루프에서 하는 일은 무엇이며, sum의 마지막 값은 무엇인가?

```c++
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
// -100에서 100 까지 숫자를 합산, sum은 0
```

### Exercise 1.13

> for 루프를 사용하여 ex01_09 ~ ex01_11의 연습문제를 다시 작성합니다.

```c++
#include <iostream>
// 예제 ex01_09
int main()
{
    int sum = 0;
    //while -> for 변경
    for (int i = 50; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "the sum is: " << sum << std::endl;

    return 0;
}
```

```c++
#include <iostream>
// 예제 ex01_10
int main()
{
    //while -> for 변경
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;
    return 0;
}
```

```c++
#include <iostream>
// 예제 ex01_11
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
    //while -> for 변경
    for (int i = val1; i != val2; ++i)
        std::cout << i << std::endl;
    return 0;
}
```
