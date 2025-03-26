#include <stdio.h>

char *ft_strcapitalize(char *str) {
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0') {
    	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
    		if (new_word && str[i] >= 'a' && str[i] <= 'z') {
    			str[i] -= 32;
		}	
		else if (!new_word && str[i] >= 'A' && str[i] <= 'Z') {
                	str[i] += 32;
		}		     
            new_word = 0; 
        } 
	else {
            new_word = 1; 
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "hello, world! glev2000 krasav4ik"; 
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}

