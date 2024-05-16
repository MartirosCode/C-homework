#include <iostream>

void print_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void add_array(int**& arr, int* new_array, int& rows, int cols, int index) {
    int** temp = new int* [rows + 1];
    for (int i = 0; i < rows; ++i) {
        temp[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            temp[i][j] = arr[i][j];
        }
    }
    temp[index] = new_array;
    delete[] arr;
    arr = temp;
    rows++;
}

void delete_array(int**& arr, int& rows, int cols, int index) {
    int** temp = new int* [rows - 1];
    for (int i = 0; i < index; ++i) {
        temp[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = index + 1; i < rows; ++i) {
        temp[i - 1] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            temp[i - 1][j] = arr[i][j];
        }
    }
    delete[] arr[index];
    delete[] arr;
    arr = temp;
    rows--;
}

void add_element(int** arr, int rows, int cols, int row_index, int col_index, int new_element) {
    arr[row_index][col_index] = new_element;
}

void delete_element_by_index(int** arr, int rows, int cols, int row_index, int col_index) {
    for (int i = col_index; i < cols - 1; ++i) {
        arr[row_index][i] = arr[row_index][i + 1];
    }
}

void delete_element_by_value(int** arr, int rows, int cols, int value) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == value) {
                delete_element_by_index(arr, rows, cols, i, j);
                return;
            }
        }
    }
}

int main() {
    int rows = 3;
    int cols = 3;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j + 1;
        }
    }

    print_array(array, rows, cols);

    int* new_row = new int[cols] {10, 11, 12};
    add_array(array, new_row, rows, cols, 1);

    print_array(array, rows, cols);

    delete_array(array, rows, cols, 2);

    print_array(array, rows, cols);

    add_element(array, rows, cols, 1, 2, 0);

    print_array(array, rows, cols);

    delete_element_by_index(array, rows, cols, 1, 1);

    print_array(array, rows, cols);

    delete_element_by_value(array, rows, cols, 5);

    print_array(array, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
    delete[] new_row;

    return 0;
}