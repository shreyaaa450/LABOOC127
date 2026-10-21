#include <iostream>
using namespace std;

class Matrix {
public:
    int a[3][3];
    int b[3][3];
    int result[3][3];

    void getInput() {
        cout << "Enter values for matrix A:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter values for matrix B:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> b[i][j];
            }
        }
    }

    Matrix operator+(Matrix &m1) {
        Matrix t;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                t.result[i][j] = a[i][j] + m1.a[i][j];
            }
        }
        return t;
    }

    Matrix operator-(Matrix &m1) {
        Matrix t;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                t.result[i][j] = a[i][j] - m1.a[i][j];
            }
        }
        return t;
    }

    bool operator==(Matrix &m1) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] != m1.a[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, sum, diff;

    m1.getInput();

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m2.a[i][j] = m1.b[i][j];
        }
    }

    sum = m1 + m2;
    diff = m1 - m2;

    cout << "Addition of matrices:" << endl;
    sum.display();

    cout << "Subtraction of matrices:" << endl;
    diff.display();

    if (m1 == m2) {
        cout << "Matrices are equal" << endl;
    } else {
        cout << "Matrices are not equal" << endl;
    }

    return 0;
}
