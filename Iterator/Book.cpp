
#include "Book.h"

Book::Book(string name) { // 通过名字构造书
	this->name = name;
}

string Book::getName() { // 获取书的名字
	return name;
}