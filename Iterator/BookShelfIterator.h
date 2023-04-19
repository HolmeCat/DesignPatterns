
#pragma once

#include "Iterator.h"
#include "Book.h"
#include "BookShelf.h"

class BookShelfIterator : public Iterator<Book> {
private:
    BookShelf *bookShelf;
    int index;

public:

    BookShelfIterator() {}
    BookShelfIterator(BookShelf *bookShelf);

    bool hasNext(); // 判断是否有下一本书

    Book next(); // 访问下一本书
};