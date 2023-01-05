/*Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
ненулевыми вещественными числами A и B одну из арифметических операций и
возвращающую ее результат. Вид операции определяется целым параметром Op: 1
60
— вычитание, 2 — умножение, 3 — деление, остальные значения — сложение. С
помощью Calc выполнить для данных A и B операции, определяемые данными
целыми N1, N2, N3.
*/
#include <iostream>
using namespace std;
void func(int a,int b)
{
    if (a > b)
    {
        std::cout << "a > b" << std::endl;
    }
    if (a < b)
    {
        std::cout << "a < b" << std::endl;
    }
    if (a == b)
    {
        std::cout << "a = b" << std::endl;
    }
}
int max2(int a, int b)
{
    if (a > b) return a;
    else return b;
}
int main()
{
    int a, b,c,d;
    
    std::cin >> a >> b >> c >> d;
    
    cout << max2(max2(a,b),max2(c,d)) << endl;
    return 0;
}
