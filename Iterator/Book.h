
#pragma once

#include<string>
using namespace std;

class Book {
private:
    string name; // ����

public:

    Book() = default;

    Book(string name); //ͨ�����ֹ�����

    string getName(); // ��ȡ�������
};