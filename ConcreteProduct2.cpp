#include "ConcreteProduct2.h"

ConcreteProduct2::ConcreteProduct2()
{
    std::cout << "ConcreteProduct2 构造" << std::endl;
}

ConcreteProduct2::~ConcreteProduct2()
{
    std::cout << "ConcreteProduct2 析构" << std::endl;
}

void ConcreteProduct2::Pack(unsigned short num)
{
    std::cout << "ConcreteProduct2 Pack " << num << std::endl;
}
