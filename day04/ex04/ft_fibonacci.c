#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;

    int a = 0;
    int b = 1;
    int temp;

    for (int i = 2; i <= index; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(-1));
	return 0;
}
