#pragma once
#include <iostream>

using namespace std;

//������ + ��������� ��� �������� ���������� � �����
class MagicWord
{
public:
	string s;
	int a;
	int code;
	MagicWord();
	~MagicWord();
	MagicWord(std::string line);
	MagicWord& operator=(string line);
	friend std::istream& operator>>(std::istream &s, MagicWord &m);
	const char * to_char();
};

