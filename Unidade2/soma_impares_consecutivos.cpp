#include <iostream>
using namespace std;

int main () {
    int x, y, aux, soma_impares = 0;
    cin >> x >> y;
    if (x > y) { // trocar
        aux = x;
        x = y;
        y = aux;
    }
    for (aux = x + 1; aux <= y - 1; aux = aux + 1) {
        if (aux % 2 == 1 || aux % 2 == -1) {
            soma_impares = soma_impares + aux;
        }
    }
    cout << soma_impares << endl;
    return 0;
}
