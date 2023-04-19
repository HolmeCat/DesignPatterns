
#include "BookShelf.h"
#include "BookShelfIterator.h"

BookShelfIterator::BookShelfIterator(BookShelf *bookShelf){
    this->bookShelf = bookShelf;
    this->index = 0;
}

bool BookShelfIterator::hasNext(){
    if(index < bookShelf->getLength())
        return true;
    return false;
}

Book BookShelfIterator::next(){
    Book book = bookShelf->getBookAt(index);
    index += 1;
    return book;
}
