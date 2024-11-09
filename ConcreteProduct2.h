#ifndef CONCRETEPRODUCT2_H
#define CONCRETEPRODUCT2_H

#include "Product.h"

class ConcreteProduct2 : public Product
{
public:
    ConcreteProduct2();
    ~ConcreteProduct2();

    /// @brief Pack 称重打包
    /// @param num 打包数量
    void Pack(unsigned short num) override;
};

#endif // CONCRETEPRODUCT2_H
