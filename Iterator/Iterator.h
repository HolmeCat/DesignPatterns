
#pragma once

template<class T>
class Iterator{ // 迭代器接口
public:
    virtual bool hasNext() = 0; // 是否存在下一个元素
    virtual T next() = 0;  // 访问下一个元素
};
