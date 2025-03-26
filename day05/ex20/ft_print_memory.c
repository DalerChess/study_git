#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    while (*str)
        ft_putchar(*str++);
}

void print_hex(unsigned char c) {
    char hex[] = "0123456789abcdef";
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void print_memory_line(unsigned char *addr, unsigned int line_size) {
    unsigned int i = 0;

    // 1️⃣ Выводим адрес (смещение)
    unsigned long address = (unsigned long)addr;
    int shift = 28;
    while (shift >= 0) {
        print_hex((address >> shift) & 0xF);
        shift -= 4;
    }
    ft_putstr(": ");

    // 2️⃣ Выводим содержимое памяти в hex (по 2 символа)
    i = 0;
    while (i < 16) {
        if (i < line_size)
            print_hex(addr[i]);
        else
            ft_putstr("  "); // Если меньше 16 байт, оставляем пробелы
        
        if (i % 2)
            ft_putchar(' ');
        i++;
    }

    // 3️⃣ Выводим печатные символы или заменяем на '.'
    i = 0;
    while (i < line_size) {
        if (addr[i] >= 32 && addr[i] <= 126)
            ft_putchar(addr[i]);
        else
            ft_putchar('.');
        i++;
    }

    ft_putchar('\n');
}

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned int i = 0;

    while (i < size) {
        unsigned int line_size = (size - i < 16) ? (size - i) : 16;
        print_memory_line((unsigned char *)addr + i, line_size);
        i += 16;
    }

    return addr;
}

int main() {
    char str[] = "This is a test.\nHello, World!\n";
    ft_print_memory(str, sizeof(str));
    return 0;
}

