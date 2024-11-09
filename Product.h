#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{  
public:
    Product();
    virtual ~Product();

    /// @brief Pack 称重打包
    /// @param num 打包数量
    virtual void Pack(unsigned short num);

    /// @brief Shipment 发货
    void Shipment();

    /// @brief 打包发货
    void Handle(unsigned short num);
};

#endif // PRODUCT_H
