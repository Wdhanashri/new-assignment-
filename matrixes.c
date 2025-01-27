#include <iostream>
using namespace std;

void multiplyMatrices(int **matrix1, int **matrix2, int **result, int row1, int col1, int row2, int col2) {
    if (col1 != row2) {
        cout << "Matrix multiplication not possible. Columns of matrix1 must be equal to rows of matrix2." << endl;
        return;
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void inputMatrix(int **matrix, int rows, int cols) {
    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) {
    cout << "Result Matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row1, col1, row2, col2;
    
    cout << "Enter rows and columns for matrix 1: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns for matrix 2: ";
    cin >> row2 >> col2;

    
    int **matrix1 = new int*[row1];
    int **matrix2 = new int*[row2];
    int **result = new int*[row1];
    
    for (int i = 0; i < row1; i++) matrix1[i] = new int[col1];
    for (int i = 0; i < row2; i++) matrix2[i] = new int[col2];
    for (int i = 0; i < row1; i++) result[i] = new int[col2];

    inputMatrix(matrix1, row1, col1);
    inputMatrix(matrix2, row2, col2);

    
    multiplyMatrices(matrix1, matrix2, result, row1, col1, row2, col2);

    printMatrix(result, row1, col2);

    for (int i = 0; i < row1; i++) delete[] matrix1[i];
    for (int i = 0; i < row2; i++) delete[] matrix2[i];
    for (int i = 0; i < row1; i++) delete[] result[i];

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
