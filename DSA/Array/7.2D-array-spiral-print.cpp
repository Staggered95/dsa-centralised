#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row = 5;
    int column = 5;
    int arr[row][column];

    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            arr[i][j] = (i+1)*(j+1);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int topRow, bottomRow, leftCol, rightCol;
    topRow = 0;
    bottomRow = column - 1;
    leftCol = 0;
    rightCol = row - 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {
        for (int i=leftCol; i<=rightCol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        for (int i=topRow; i<=bottomRow; i++) {
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        for (int i=rightCol; i>=leftCol; i--) {
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        for (int i=bottomRow; i>=topRow; i--) {
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }

    return 0;
}