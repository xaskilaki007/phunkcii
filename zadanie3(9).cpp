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
