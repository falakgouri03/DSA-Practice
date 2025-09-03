#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows of the matrix: ";
    cin >> m;
    cout << "Enter the number of columns of the matrix: ";
    cin >> n;

    int matrix[m][n];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout<<"input matrix:"<<endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int nz = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0)
                nz++;
        }
    }

    int s[nz + 1][3];
    s[0][0] = m;
    s[0][1] = n;
    s[0][2] = nz;

    int k = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0) {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = matrix[i][j];
                k++;
            }
        }
    }
    cout<<"spare matrix"<<endl;
    for (int i = 0; i <= nz; i++)
     {
        for(int j=0;j<3;j++)
        {
        cout << s[i][j] << " ";
        }
    cout<<endl;
    }
    return 0;
}