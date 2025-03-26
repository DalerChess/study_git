#include <stdio.h>

#define SIZE 8  // Размер шахматной доски 8x8

int count = 0;
int col[SIZE] = {0};        // Занятые столбцы
int diag1[2 * SIZE] = {0};  // Занятые диагонали "/"
int diag2[2 * SIZE] = {0};  // Занятые диагонали "\"

// Рекурсивная функция для расстановки ферзей
void solve(int row) {
    if (row == SIZE) { // Если дошли до 8-й строки, значит нашли одно из решений
        count++;
        return;
    }

    int i = 0;
    while (i < SIZE) { // Перебираем все столбцы
        if (!col[i] && !diag1[row + i] && !diag2[row - i + SIZE - 1]) { 
            // Устанавливаем ферзя
            col[i] = diag1[row + i] = diag2[row - i + SIZE - 1] = 1;
            solve(row + 1); // Рекурсивно переходим к следующей строке
            // Убираем ферзя (backtracking)
            col[i] = diag1[row + i] = diag2[row - i + SIZE - 1] = 0;
        }
        i++;
    }
}

// Функция для подсчёта всех возможных расстановок
int ft_eight_queens_puzzle(void) {
    count = 0; // Обнуляем количество решений
    solve(0);  // Запускаем рекурсию с первой строки
    return count;
}

// Тестирование функции
int main() {
    printf("Number of solutions: %d\n", ft_eight_queens_puzzle());
    return 0;
}

