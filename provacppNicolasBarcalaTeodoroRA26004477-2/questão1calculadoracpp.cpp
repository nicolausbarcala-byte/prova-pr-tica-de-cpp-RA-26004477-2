#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "\nSoma: " << num1 + num2 << endl;
    cout << "Subtracao: " << num1 - num2 << endl;
    cout << "Multiplicacao: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Divisao: " << num1 / num2 << endl;
    } else {
        cout << "Divisao: Nao e possivel dividir por zero." << endl;
    }

    return 0;
}
