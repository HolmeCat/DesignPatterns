#include<iostream>

#include "BookShelfIterator.h"

using namespace std;

int main(){
    BookShelf bookShelf(4);
    bookShelf.appendBook(Book("Around the World in 80 Days"));
    bookShelf.appendBook(Book("Bible"));
    bookShelf.appendBook(Book("Cinderella"));
    bookShelf.appendBook(Book("Daddy-Long-Legs"));
    Iterator<Book>* it = bookShelf.getIterator();
    while(it->hasNext()){
        Book book = it->next();
        cout << book.getName() << endl;
    }
    
    return 0;
}