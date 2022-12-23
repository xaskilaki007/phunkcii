void Leng(int xA, int yA, int xB, int yB)
{
float Long, d1;
d1= ((xA - xB)*(xA - xB)) + ((yA - yB)*(yA - yB));
Long = abs(d1);
std::cout«"Dlina = "« Long « endl;
}
int main()
{
int xA, yA, xB, yB, xC, yC, 😆, yD;

std::cout«"Coordinata AB:"« endl;
std::cout«"xA: ";
std::cin» xA;
std::cout«"yA: ";
std::cin» yA;
std::cout«"xB: ";
std::cin» xB;
std::cout«"yB: ";
std::cin» yB;
Leng(xA, yA, xB, yB);

std::cout«"Coordinata AC:"« endl;
std::cout«"xC: ";
std::cin» xC;
std::cout«"yC: ";
std::cin» yC;
Leng(xA, yA, xC, yC);

std::cout«"Coordinata AD:"« endl;
std::cout«"xD: ";
std::cin» xD;
std::cout«"yD: ";
std::cin» yD;
Leng(xA, yA, 😆, yD);
}
