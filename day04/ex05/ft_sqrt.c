#include <stdio.h>

int ft_sqrt(int nb)
{
    if (nb < 0)
        return 0;

    int left = 0, right = nb, mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;

        if (square == nb) {
            return mid;
	}
        else if (square < nb) {
            left = mid + 1;
	}
        else {
		right = mid - 1;
	}
    }
    return 0;
}

int main() {
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(50));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-3));
	return 0;
}
