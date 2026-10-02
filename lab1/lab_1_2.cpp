#include <iostream>

#include <clocale>

int main()
{
setlocale(LC_ALL,"Russian"); //включил русскую локализацию

int myint = 150;

float myfloat = 15.933f;
unsigned char mysmall = 250;

std::cout << "myint = " << myint << std::endl;
std::cout << "myfloat = " << myfloat << std::endl;
std::cout << "mysmall = " << static_cast<int>(mysmall) << std::endl;

int day = 11;

std::string month = "сентября";

int year = 2007;

std::cout << "моя дата рождения: " << day << " " << month << " " << "2007" << " " << "года" << std::endl;

const float PI_VALUE = 2.3f;

const std::string OS_NAME = "WINDOWS";

std::cout << PI_VALUE << " " <<OS_NAME << std::endl;


return 0;
}
