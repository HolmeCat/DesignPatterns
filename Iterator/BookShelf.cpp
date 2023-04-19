
#include "BookShelf.h"
#include "BookShelfIterator.h"

BookShelf::BookShelf(int maxSize) { // 构造书架
    books = new Book[maxSize];
}

Book& BookShelf::getBookAt(int index) { // 通过索引访问目标书
    return books[index];
}

void BookShelf::appendBook(Book book) { // 把书放入书架
    books[last] = book;
    last += 1;
    return;
}

int BookShelf::getLength() { // 获取当前书架大小
    return last;
}

Iterator<Book>* BookShelf::getIterator() { // 获取书架迭代器
    return new BookShelfIterator(this);
}