#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "Factory.h"

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();

    /// @brief CreateProduct 根据报文标识创建派生类产品指针
    /// @param id 报文标识
    /// @return 派生类产品指针
    Product* CreateProduct(unsigned short id) override;
};

#endif // CONCRETEFACTORY_H
