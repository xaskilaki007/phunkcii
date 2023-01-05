/*Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
ненулевыми вещественными числами A и B одну из арифметических операций и
возвращающую ее результат. Вид операции определяется целым параметром Op: 1— вычитание, 2 — умножение, 3 — деление, остальные значения — сложение. С
помощью Calc выполнить для данных A и B операции, определяемые данными
целыми N1, N2, N3.
*/
#include <iostream>
using namespace std;
float Calc(float a, float b, int Op)
{
    if (Op == 1) return a - b;
    if (Op == 2) return a * b;
    if (Op == 3) return a / b;
    return a + b;
}
int main()
{
    float a, b;
    int Op;
    
    cout << "Vvedite chisla a i b:\n";
    cin >> a >> b;
    cout << "Vvedite nomer operacii:\n1 -\n2 *\n3 /\nOstalnoe +:\n";
    cin >> Op;
    cout << Calc(a,b,Op) << endl;
    return 0;
}
