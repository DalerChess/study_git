#include <unistd.h>

void print_number(int *arr, int n)
{
    int i;
    char c;

    i = 0;
    while (i < n)
    {
        c = arr[i] + '0';
        write(1, &c, 1);
        i++;
    }
    if (arr[0] != 10 - n) 
        write(1, ", ", 2);
}

#include <unistd.h>

void	ft_print_combn(int n)
{
	if (n <= 0 || n >= 10)
		return;

	char digits[n];
	int i = 0;

	while (i < n)
	{
		digits[i] = '0' + i;
		i++;
	}

	while (1)
	{
		write(1, digits, n);
		if (digits[0] == '9' - n + 1)
			break;
		write(1, ", ", 2);

		i = n - 1;
		while (i >= 0 && digits[i] == '9' - (n - 1 - i))
			i--;

		if (i < 0)
			break;

		digits[i]++;
		i++;
		while (i < n)
		{
			digits[i] = digits[i - 1] + 1;
			i++;
		}
	}
}


int main()
{
    ft_print_combn(2);
    return 0;
}	
