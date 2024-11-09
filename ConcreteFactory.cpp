#include "ConcreteFactory.h"
#include "ConcreteProduct.h"
#include "ConcreteProduct2.h"

ConcreteFactory::ConcreteFactory()
{
    std::cout << "ConcreteFactory 构造" << std::endl;
}

ConcreteFactory::~ConcreteFactory()
{
    std::cout << "ConcreteFactory 析构" << std::endl;
}

Product* ConcreteFactory::CreateProduct(unsigned short id)
{
    // std::hex 来输出十六进制格式，并通过 std::uppercase 来确保字母是大写的。
    std::cout << "ConcreteFactory CreateProduct 0x" << std::uppercase << std::hex << id << std::endl;

    switch (id) {
    case APPLE_CHINA:
        return new ConcreteProduct;
    case APPLE_USA:
        return new ConcreteProduct2;
    default:
        break;
    }
    return nullptr;
}
