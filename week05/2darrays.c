#include <stdio.h>

#define SIZE 7

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

void print_grid(int grid[SIZE][SIZE]);

int main(void) {

    int grid[SIZE][SIZE] = {0};
    int row = 0;
    while (row < SIZE) {
        int column = 0;
        while (column < SIZE) {
            grid[row][column] = 1;
            column = column + 1;
        }
        row = row + 1;
    }
    
    print_grid(grid);
    scalar_multiply(7, 7, grid, 2);
    
    int one_d_array[3] = {1, 2, 3};
    int two_d_array[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    scalar_multiply(3, 2, two_d_array, 3);

    return 0;
}

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int row = 0;
    while (row < rows) {
        int column = 0;
        while (column < columns) {
            matrix[row][column] *= scalar;
            column = column + 1;
        }
        // row = row + 1;
        // row++;
        // row -= -1;
        row += 1;
    }

    return;
}

void print_grid(int grid[SIZE][SIZE]) {
    int row = 0;
    while (row < SIZE) {
        int column = 0;
        while (column < SIZE) {
            printf("%d ", grid[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }
}
