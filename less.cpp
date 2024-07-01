#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <vector>

using namespace std;

struct library
{
	string name;
	string author;
	string publ;
	string genre;
};

int show(library stc[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "��������: " << stc[i].name << endl;
		cout << "�����: " << stc[i].author << endl;
		cout << "������������: " << stc[i].publ << endl;
		cout << "����: " << stc[i].genre << endl << endl;
	}
	return 0;
}

int search_name(library stc[], int size)
{
	string nm;
	cout << "������� �������� �����, ������� ������ �����:\n";
	cin >> nm;
	bool a = false;
	for (int i = 0; i < size; i++)
	{
		if (nm == stc[i].name)
		{
			cout << "��������: " << stc[i].name << endl;
			cout << "�����: " << stc[i].author << endl;
			cout << "������������: " << stc[i].publ << endl;
			cout << "����: " << stc[i].genre << endl << endl;
			a = true;
		}
	}
	if (a == false)
		cout << "��������� ���� ����� ����������� � ������" << endl;
	return 0;
}

int search_author(library stc[], int size)
{
	string nm;
	cout << "������� ������, ����� �������� ������ �����:\n";
	cin >> nm;
	bool a = false;
	for (int i = 0; i < size; i++)
	{
		if (nm == stc[i].author)
		{
			cout << "��������: " << stc[i].name << endl;
			cout << "�����: " << stc[i].author << endl;
			cout << "������������: " << stc[i].publ << endl;
			cout << "����: " << stc[i].genre << endl << endl;
			a = true;
		}
	}
	if (a == false)
		cout << "��������� ���� ����� ����������� � ������" << endl;
	return 0;
}

void sort_name(library*& stc, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (stc[j].name > stc[j + 1].name)
			{
				library temp = stc[j];
				stc[j] = stc[j + 1];
				stc[j + 1] = temp;

			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << "��������: " << stc[i].name << endl;
		cout << "�����: " << stc[i].author << endl;
		cout << "������������: " << stc[i].publ << endl;
		cout << "����: " << stc[i].genre << endl << endl;
	}
}

void sort_author(library stc[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (stc[j].author > stc[j + 1].author)
			{
				library temp = stc[j];
				stc[j] = stc[j + 1];
				stc[j + 1] = temp;

			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << "��������: " << stc[i].name << endl;
		cout << "�����: " << stc[i].author << endl;
		cout << "������������: " << stc[i].publ << endl;
		cout << "����: " << stc[i].genre << endl << endl;
	}
}

void sort_publ(library stc[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (stc[j].publ > stc[j + 1].publ)
			{
				library temp = stc[j];
				stc[j] = stc[j + 1];
				stc[j + 1] = temp;

			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << "��������: " << stc[i].name << endl;
		cout << "�����: " << stc[i].author << endl;
		cout << "������������: " << stc[i].publ << endl;
		cout << "����: " << stc[i].genre << endl << endl;
	}
}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int size = 8;
	int op;

	library* books = new library[size]
	{
		{"�����_�_���", "�������", "���", "�����"},
		{"������������_�_���������", "�����������", "�������", "�����"},
		{"������_���������_�������", "�������", "������", "��������"},
		{"����_�����-������", "����", "�������", "�����������"},
		{"���", "����", "C�������", "������"},
		{"��������_����", "������", "��������", "��������"},
		{"��������_����", "�����", "�����", "�������"},
		{"������_�_���������", "��������", "������", "�����"}
	};
	cout << "�������� �� ������������ ��������� (������� ����� ������):\n"
		<< "1. ������ ���� ����" << endl
		<< "2. ����� �� ������" << endl
		<< "3. ����� �� ��������" << endl
		<< "4. ������������� �� ��������" << endl
		<< "5. ������������� �� ������" << endl
		<< "6. ������������� �� ������������" << endl << endl;
	cin >> op;
	switch (op)
	{
	case 1:
	{show(books, size);
	break; }
	case 2:
	{search_author(books, size);
	break; }
	case 3:
	{search_name(books, size);
	break; }
	case 4:
	{sort_name(books, size);
	break; }
	case 5:
	{sort_author(books, size);
	break; }
	case 6:
	{sort_publ(books, size);
	break; }
	}
	return 0;
}