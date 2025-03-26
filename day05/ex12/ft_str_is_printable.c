#include <stdio.h>

int ft_str_is_printable(char *str) {
        int i = 0;
        if (str[i] == '\0') {
                return 1;
        }
        while (str[i] != '\0') {
                if (!(str[i] >= ' ' && str[i] <= 127)) {
                        return 0;
                }
                i++;
        }
        return 1;
}

int main() {
        char str[] = "HELLO";
        printf ("%d\n", ft_str_is_printable(str));
        return 0;
}

