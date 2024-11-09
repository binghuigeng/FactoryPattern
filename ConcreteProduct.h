#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H

#include "Product.h"

class ConcreteProduct : public Product
{
public:
    ConcreteProduct();
    ~ConcreteProduct();

    /// @brief Pack 称重打包
    /// @param num 打包数量
    void Pack(unsigned short num) override;
};

#endif // CONCRETEPRODUCT_H
