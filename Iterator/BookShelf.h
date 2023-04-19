
#pragma once

#include "Iterator.h"
#include "Book.h"

class BookShelf {
private:
    Book *books; //�鱾����
    int last = 0;

public:

    BookShelf() = default;
    
    BookShelf(int maxSize); // �������

    Book& getBookAt(int index); // ͨ����������Ŀ����

    void appendBook(Book book); // ����������

    int getLength(); // ��ȡ��ǰ��ܴ�С

    Iterator<Book>* getIterator(); // ��ȡ��ܵ�����
};