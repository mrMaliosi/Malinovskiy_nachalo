#include "MagicWord.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

MagicWord::MagicWord()
{
	s = "";
	a = 0;
	code = 0;
}

MagicWord::~MagicWord()
{
	s.clear();
	a = 0;
	code = 0;
}

MagicWord::MagicWord(std::string line)	//�������� ���������� �� ���� ������ ������
{
	for (int i = 0; line[i] != ' '; ++i)
	{
		s += line[i];
		if (i > 5)
		{
			//������� exception �� ������������ ���� ��� ��������� ������������ ��������� ����
		}
	}

	if (s == "dump")			//���������� �� ����������� switch-case ��� �����?
	{
		string s2;
		for (int i = 5; line[i] != ' '; ++i)	//exception �� ������������ ���� ����� � �� ��� ����������
		{
			s2 += line[i];
			if (i > 10000)
			{
				//������� exception �� ������������ ���� ��� ��������� ������������ ��������� ����
			}
		}
	}
	else if (s == "tick")
	{
		string s2;
		for (int i = 5; line[i] != ' '; ++i)	//exception �� ������������ ���� ����� � �� ��� ����������
		{
			s2 += line[i];
			if (i > 11)
			{
				//������� exception �� ������������ ���� ��� ��������� ������������ ��������� ����
			}
		}
		a = stoi(s2);
	}
	else if (s == "exit")
	{
		//????????
	}
	else if (s == "help")
	{
		//��������� ������
	}
}

MagicWord & MagicWord::operator=(string line)
{
	for (int i = 0; line[i] != ' '; ++i)
	{
		s += line[i];
		if (i > 5)
		{
			//������� exception �� ������������ ���� ��� ��������� ������������ ��������� ����
		}
	}

	if (s == "dump")			//���������� �� ����������� switch-case ��� �����?
	{
		string s2;
		for (int i = 5; line[i] != ' '; ++i)	//exception �� ������������ ���� ����� � �� ��� ����������
		{
			s2 += line[i];
			if (i > 10000)
			{
				//������� exception �� ������������ ���� ��� ��������� ������������ ��������� ����
			}
		}
	}
	else if (s == "tick")
	{
		string s2;
		for (int i = 5; line[i] != ' '; ++i)	//exception �� ������������ ���� ����� � �� ��� ����������
		{
			s2 += line[i];
			if (i > 11)
			{
				//������� exception �� ������������ ���� ��� ��������� ������������ ��������� ����
			}
		}
		a = stoi(s2);
	}
	else if (s == "exit")
	{
		//????????
	}
	else if (s == "help")
	{
		//��������� ������
	}
	/////��������
	return *this;
}


std::istream& operator>>(std::istream &s, MagicWord &m) {
	double re = 0;
	double im = 0;
	string line, s1;
	getline(s, line);
	for (int i = 0; (i < line.size()) && (line[i] != ' '); ++i)
	{
		s1 += line[i];
		if (i > 5)
		{
			cout << "���� ��� ������ ����??? � ��-�, ������ �������, �������� ����� � ����� ������ ���������� �������!" << endl;
			return s;
		}
	}
	
	if (s1 == "dump")			//���������� �� ����������� switch-case ��� �����?
	{
		string s2;
		int i = 5;
		if (line[i] == '"')
		{
			i = 6;
		}
		for (; (i < line.size()) && (line[i] != ' ') && (line[i] != '"'); ++i)	//�������� �� ������������ �����
		{
			
			s2 += line[i];
			if (i > 10000)
			{
				cout << "���-�� ����������� � ���� ����... � ���� ����� �����, SQL-�������� �� ������. �� ��� ���)" << endl;
				return s;
			}
		}
		m.s = s1;
		m.a = 0;
		m.s = s2;
		m.code = 1;
	}
	else if (s1 == "tick")
	{
		string s2 = "";
		for (int i = 5; (i < line.size()) && (line[i] != ' '); ++i)	//������ �������� �� �������
		{
			if ((line[i] >= '0') && (line[i] <= '9'))
			{
				s2 += line[i];
			}
			else
			{ 
				cout << "� ������� �� � ��� ������������, ������) ������� � �� ����? � �� ����:)" << endl;
				return s;
			}
			
			if (i > 12)
			{
				cout << "�����, �����, �� ��� ���, ����� �����? ����� ��� ��������� ����� ������ �������? � ��� ���� ����." << endl;
				return s;
			}
		}
		m.s = s1;
		if (s2 == "")
		{
			m.a = 1;
		}
		else
		{
			m.a = stoi(s2);	
		}
		m.code = 2;
	}
	else if (s1 == "exit")
	{
		m.s = s1;
		m.a = 0;
		m.code = 3;
	}
	else if (s1 == "help")
	{
		cout << "�� ����������, ������. ���� ���� ������������ ������? ��� �, ��, ������ ������������� ���� �����, �������� ����� ���������� ������ �����..." << endl;
		cout << "� �����, ��� �� �����, ����� ����� ���� � �����." << endl;
		cout << "��� ��� �� ������ � ������ ��� ���������, �� �������� ������ ��� ���, ��� ��� �� ���� ������� ��� ����� � ����� ������� � �������� � ����� ���������." << endl;
		cout << "\033[32m��������� ������������ ��� ������� ����������:\033[0m" << endl;
		cout << "1) ���������. �� ���������� ���������, � ��������� ���� � ������ ���������� ��." << endl;
		cout << "2) ������. �� ������� ������ ���� � ����� � ����������� ��������, ������ ��� ��� �������� � ������� � ��� ��� ������." << endl;
		cout << "3) ������������. �� ������� ������ ���� � ����� � ����������� ��������, ������ ��� ��� ��������, ������ ���������� ������ ���������� �������� � �������� ��������� �����, � ������ ���� �� ����)" << endl;
		cout << "\033[32m�������\033[0m" << endl;
		cout << "dump <filename> - ��������� ��������� � ����" << endl;
		cout << "tick <n=1> (� ���������� t <n=1>) - ���������� n (�� ��������� 1) �������� � ���������� ���������." << endl;
		cout << "exit � ��������� ����" << endl;
		cout << "help � ����������� ������� � ��������" << endl;
		m.s = s1;
		m.a = 0;
		m.code = 4;
	}
	else
	{
		cout << "��� ���� �� ��������. ���� ������ ������." << endl;
	}
	return s;
}


const char * MagicWord::to_char()
{
	string s = this->s;
	int size = s.size();
	char * q = (char *)malloc(sizeof(char) * size);
	for (int i = 0; i < size; ++i)
	{
		q[i] = s[i];
	}
	return q;
}