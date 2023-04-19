
#pragma once

#include "Iterator.h"
#include "Book.h"

class BookShelf {
private:
    Book *books; //书本集合
    int last = 0;

public:

    BookShelf() = default;
    
    BookShelf(int maxSize); // 构造书架

    Book& getBookAt(int index); // 通过索引访问目标书

    void appendBook(Book book); // 把书放入书架

    int getLength(); // 获取当前书架大小

    Iterator<Book>* getIterator(); // 获取书架迭代器
};