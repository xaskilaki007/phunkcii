/*Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
ненулевыми вещественными числами A и B одну из арифметических операций и
возвращающую ее результат. Вид операции определяется целым параметром Op: 1— вычитание, 2 — умножение, 3 — деление, остальные значения — сложение. С
помощью Calc выполнить для данных A и B операции, определяемые данными
целыми N1, N2, N3.
*/
#include <iostream>
#include <cmath>
using namespace std;
float Leng(float xA, float yA, float xB, float yB)
{
    return sqrt((xA-xB)*(xA-xB) + (yA-yB)*(yA-yB));
}

int main()
{

    float xA, xB, xC, xD, yA, yB, yC, yD;
    
    
    cout << "Vvedite koordinaty tochki A:\n";
    cin >> xA >> yA;
    cout << "Vvedite koordinaty tochki B:\n";
    cin >> xB >> yB;
    cout << "Vvedite koordinaty tochki C:\n";
    cin >> xC >> yC;
    cout << "Vvedite koordinaty tochki D:\n";
    cin >> xD >> yD;
    
    cout << "AB = " << Leng(xA,yA,xB,yB) << endl;
    cout << "AC = " << Leng(xA,yA,xC,yC) << endl;
    cout << "AD = " << Leng(xA,yA,xD,yD) << endl;
    cout << "CD = " << Leng(xC,yC,xD,yD) << endl;
    return 0;
}
