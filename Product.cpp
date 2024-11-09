#include "Product.h"

Product::Product()
{
    std::cout << "Product 构造" << std::endl;
}

Product::~Product()
{
    std::cout << "Product 析构" << std::endl;
}

void Product::Pack(unsigned short num)
{
    std::cout << "Product Pack " << num << std::endl;
}

void Product::Shipment()
{
    std::cout << "Product Shipment" << std::endl;
}

void Product::Handle(unsigned short num)
{
    Pack(num);
    Shipment();
}
