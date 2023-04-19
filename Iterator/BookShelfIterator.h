
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

    bool hasNext(); // �ж��Ƿ�����һ����

    Book next(); // ������һ����
};