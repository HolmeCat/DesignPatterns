
#pragma once

#include<string>
using namespace std;

class Book {
private:
    string name; // 书名

public:

    Book() = default;

    Book(string name); //通过名字构造书

    string getName(); // 获取书的名字
};