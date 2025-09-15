//Operation on Matrix By Dushyanta Madhab Baruah
#include <iostream>
using namespace std;

void addMatrices(int a[][10], int b[][10], int result[][10], int m, int n) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            result[i][j] = a[i][j] + b[i][j];
}

void subtractMatrices(int a[][10], int b[][10], int result[][10], int m, int n) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            result[i][j] = a[i][j] - b[i][j];
}

void multiplyMatrices(int a[][10], int b[][10], int result[][10], int m, int n, int p) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}

void transposeMatrix(int a[][10], int result[][10], int m, int n) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            result[j][i] = a[i][j];
}

void displayMatrix(int matrix[][10], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m1, n1, m2, n2;
    int a[10][10], b[10][10];
    cout << "Enter rows and columns for Matrix A: ";
    cin >> m1 >> n1;
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < m1; ++i)
        for (int j = 0; j < n1; ++j)
            cin >> a[i][j];

    cout << "Enter rows and columns for Matrix B: ";
    cin >> m2 >> n2;
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < m2; ++i)
        for (int j = 0; j < n2; ++j)
            cin >> b[i][j];

    if (m1 == m2 && n1 == n2) {
        int addResult[10][10], subResult[10][10];
        addMatrices(a, b, addResult, m1, n1);
        subtractMatrices(a, b, subResult, m1, n1);

        cout << "Addition of matrices:\n";
        displayMatrix(addResult, m1, n1);

        cout << "Subtraction of matrices:\n";
        displayMatrix(subResult, m1, n1);
    } else {
        cout << "Addition and Subtraction not possible (matrix dimensions must be same).\n";
    }

    if (n1 == m2) {
        int mulResult[10][10];
        multiplyMatrices(a, b, mulResult, m1, n1, n2);
        cout << "Multiplication of matrices:\n";
        displayMatrix(mulResult, m1, n2);
    } else {
        cout << "Multiplication not possible (columns of A must match rows of B).\n";
    }

    int transposeA[10][10], transposeB[10][10];
    transposeMatrix(a, transposeA, m1, n1);
    transposeMatrix(b, transposeB, m2, n2);

    cout << "Transpose of Matrix A:\n";
    displayMatrix(transposeA, n1, m1);

    cout << "Transpose of Matrix B:\n";
    displayMatrix(transposeB, n2, m2);

    return 0;
}
