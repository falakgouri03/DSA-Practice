#include <iostream>
using namespace std;

void TOH(int n, char source, char aux, char dest) {
    if (n == 1) {
        cout << source << " -> " << dest << endl;
        return;
    }
    TOH(n - 1, source, dest, aux);
    cout << source << " -> " << dest << endl;
    TOH(n - 1, aux, source, dest);
}

int main() {
    TOH(3, 'A', 'B', 'C');
    return 0;
}
