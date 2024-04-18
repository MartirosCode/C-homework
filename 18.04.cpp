#include <iostream>
#include <vector>
using namespace std;
// Инициализация матрицы (int)
void initMatrix(vector<vector<int>>& matrix, const vector<vector<int>>& input) {
    matrix = input;
}

// Инициализация матрицы (double)
void initMatrix(vector<vector<double>>& matrix, const vector<vector<double>>& input) {
    matrix = input;
}

// Инициализация матрицы (char)
void initMatrix(vector<vector<char>>& matrix, const vector<vector<char>>& input) {
    matrix = input;
}

// Вывод матрицы на экран (int)
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Вывод матрицы на экран (double)
void printMatrix(const vector<vector<double>>& matrix) {
    for (const auto& row : matrix) {
        for (double elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Вывод матрицы на экран (char)
void printMatrix(const vector<vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Определение максимального элемента на главной диагонали (int)
int maxDiagonalElement(const vector<vector<int>>& matrix) {
    int max = matrix[0][0];
    for (int i = 1; i < matrix.size(); i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
    return max;
}

// Определение максимального элемента на главной диагонали (double)
double maxDiagonalElement(const vector<vector<double>>& matrix) {
    double max = matrix[0][0];
    for (int i = 1; i < matrix.size(); i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
    return max;
}

// Определение минимального элемента на главной диагонали (int)
int minDiagonalElement(const vector<vector<int>>& matrix) {
    int min = matrix[0][0];
    for (int i = 1; i < matrix.size(); i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
    return min;
}

// Определение минимального элемента на главной диагонали (double)
double minDiagonalElement(const vector<vector<double>>& matrix) {
    double min = matrix[0][0];
    for (int i = 1; i < matrix.size(); i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
    return min;
}

// Сортировка элементов по возрастанию в строке матрицы (int)
void sortRow(vector<int>& row) {
    for (int i = 0; i < row.size(); i++) {
        for (int j = 0; j < row.size() - 1; j++) {
            if (row[j] > row[j + 1]) {
                int temp = row[j + 1];
                row[j + 1] = row[j];
                row[j] = temp;
            }
        }
    }
}

// Сортировка элементов по возрастанию в строке матрицы (double)
void sortRow(vector<double>& row) {
    for (int i = 0; i < row.size(); i++) {
        for (int j = 0; j < row.size() - 1; j++) {
            if (row[j] > row[j + 1]) {
                double temp = row[j + 1];
                row[j + 1] = row[j];
                row[j] = temp;
            }
        }
    }
}

int main() {
    vector<vector<int>> intMatrix;
    vector<vector<double>> doubleMatrix;
    vector<vector<char>> charMatrix;

    initMatrix(intMatrix, { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} });
    initMatrix(doubleMatrix, { {1.1, 1.2, 1.3}, {1.4, 1.5, 1.6}, {1.7, 1.8, 1.9} });
    initMatrix(charMatrix, { {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'} });

    printMatrix(intMatrix);
    cout << "Max element on main diagonal: " << maxDiagonalElement(intMatrix) << std::endl;
    cout << "Min element on main diagonal: " << minDiagonalElement(intMatrix) << std::endl;

    sortRow(intMatrix[1]); // Sort the second row
    printMatrix(intMatrix);

    return 0;
}
