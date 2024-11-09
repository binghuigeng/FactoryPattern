#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>

const unsigned short APPLE_CHINA = 0xABCD; // 中国苹果
const unsigned short APPLE_USA = 0xABCF; //美国苹果

class Product;

class Factory
{
public:
    Factory();
    virtual ~Factory();

    /// @brief CreateProduct 根据报文标识创建派生类产品指针
    /// @param id 报文标识
    /// @return 派生类产品指针
    virtual Product* CreateProduct(unsigned short id) = 0;
};

#endif // FACTORY_H
