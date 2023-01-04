//zadanie_14
#include <iostream>
#include <cmath>
// Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость:
// а) одной покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет. 
// Организовать задание с помощью функций.
using namespace std;
float price(float prConf, float prCookies, float wConf, float wCookies, int Number)
{
    float t = Number*(prConf * wConf + prCookies * wCookies); 
    return t;
}

int main() {
    float k,cs;
    cin >> k >> cs;
    //Здание (a)
    cout << price(k,cs,0.3,0.4,1) << endl;
    // Задание (b)
    std::cout << price(k,cs,1.8,2,3) << endl;
}
