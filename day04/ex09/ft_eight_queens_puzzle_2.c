#include <stdio.h>

#define SIZE 8  // Размер шахматной доски

// Функция для вывода текущего решения
void print_solution(int board[]) {
    int i = 0;
    while (i < SIZE) {
        printf("%d", board[i] + 1); // Выводим позиции ферзей (индексация с 1)
        i++;
    }
    printf("\n");
}

// Проверяем, можно ли поставить ферзя в текущую колонку
int is_safe(int board[], int row, int col) {
    int i = 0;
    while (i < row) {
        if (board[i] == col ||  // Проверяем тот же столбец
            board[i] - i == col - row ||  // Проверяем главную диагональ
            board[i] + i == col + row) {  // Проверяем побочную диагональ
            return 0;
        }
        i++;
    }
    return 1;
}

// Рекурсивная функция для расстановки ферзей
void solve(int board[], int row) {
    if (row == SIZE) {  // Если расставили 8 ферзей
        print_solution(board);
        return;
    }

    int col = 0;
    while (col < SIZE) {  // Пробуем поставить ферзя в каждом столбце
        if (is_safe(board, row, col)) {
            board[row] = col;  // Ставим ферзя
            solve(board, row + 1);  // Рекурсивно решаем следующую строку
        }
        col++;
    }
}

// Основная функция
void ft_eight_queens_puzzle_2(void) {
    int board[SIZE];  // Доска, где board[i] - колонка, в которой стоит ферзь в i-й строке
    solve(board, 0);  // Запускаем рекурсию с первой строки
}

// Запуск программы
int main() {
    ft_eight_queens_puzzle_2();
    return 0;
}

