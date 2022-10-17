#include <iostream>

using namespace std;

void Print(int** arr, int s) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < s; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int** Matrix(int** arr, int** arr1, int M, int N, int K) {
    int** arr3 = new int* [M];
    int T = 0;
    for (int i = 0; i < M; i++) {
        *(arr3 + i) = new int[K];
        for (int j = 0; j < K; j++) {
            for (int h = 0; h < N; h++) {
                T += arr[i][h] * arr1[h][j];
            }
            arr3[i][j] = T;
            T = 0;
        }
    }
    return arr3;
}

int main()
{
    int size1 = 3;
    int size2 = 5;
    int** arr = new int* [2];
    *arr = new int[3]{ 3, 2, 1 };
    *(arr + 1) = new int[3]{ 4, 5, 1 };
    int** arr1 = new int* [3];
    *arr1 = new int[2]{ 1, 4 };
    *(arr1 + 1) = new int[2]{ 5, 7 };
    *(arr1 + 2) = new int[2]{ 8, 1 };
    Print(Matrix(arr, arr1, 2, 3, 2), 2);
}
