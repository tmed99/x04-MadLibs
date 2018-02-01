//Authors: 
#include <iostream>
#include <string>

int main()
{
int number;
std::cout<<"What is a number?"<<std::endl;
std::cin>>number;
char symbol;
std::cout<<"What is a symbol?"<<std::endl;
std::cin>>symbol;
double number2;
std::cout<<"What is a number?"<<std::endl;
std::cin>>number2;
char symbol2;
std::cout<<"What is a symbol?"<<std::endl;
std::cin>>symbol2;
std::cout<<"It is day "<<number<<", the humans still have not noticed.";
std::cout<<"I ate a fish "<<symbol<<".";
std::cout<<"I may only be able to survive "<<number2<<" days.";
std::cout<<"I have to go now, they will be here soon "<<symbol2<<"."<<std::endl;

  return 0;
}
