#include <iostream>

#include <clocale>

int main()
{
setlocale(LC_ALL, "");

//lab1.1
 std::cout << "First string" << std::endl;

 std::cout << "Первая строка \nВторая строка" << std::endl;

 std::cout <<"Спецсимволы \"\\\"" << std::endl;

return 0;
}