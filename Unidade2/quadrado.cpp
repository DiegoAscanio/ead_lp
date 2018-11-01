#include<iostream>
using namespace std;

int main() {
    int N, aux = 1, quadrado;
    cin>>N;
    for (aux = 1; aux <= N; aux = aux + 1) {
        if (aux % 2 == 0) { // e' par
            quadrado = aux*aux;
            cout << aux << "^2 = " << quadrado << endl;
        }
    }
    return 0;
}
