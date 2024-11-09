#include <iostream>
#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

using namespace std;

int main()
{
    Factory* fac = new ConcreteFactory;
    Product* pro = fac->CreateProduct(APPLE_CHINA);
    if (pro) {
        pro->Handle(5);

        /// @brief 先后顺序：先释放 pro 后释放 fac 是一种安全的做法，因为要确保所有通过 fac 创建的对象都在 fac 被删除之前得到释放。

        // 先释放 pro
        delete pro; // 释放 Product 对象的内存
        pro = nullptr; // 防止悬空指针
    }

    // 再释放 fac
    delete fac; // 释放 ConcreteFactory 对象的内存
    fac = nullptr; // 防止悬空指针

    return 0;
}
