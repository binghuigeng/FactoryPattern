#include "ConcreteProduct.h"

ConcreteProduct::ConcreteProduct()
{
    std::cout << "ConcreteProduct 构造" << std::endl;
}

ConcreteProduct::~ConcreteProduct()
{
    std::cout << "ConcreteProduct 析构" << std::endl;
}

void ConcreteProduct::Pack(unsigned short num)
{
    std::cout << "ConcreteProduct Pack " << num << std::endl;
}
