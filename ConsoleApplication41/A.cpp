#include <iostream>
#include "A.h"

using namespace std;

A::A() {
	row = 0;
	column = 0;
	arr = nullptr;
}
A::A(int r, int c) {
	row = r;
	column = c;

	arr = new int* [row];

	for (int i = 0; i < row; i++)
		arr[i] = new int[column];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			arr[i][j] = 0;
}
A::A(const A& obj) {
	row = obj.row;
	column = obj.column;
	arr = new int* [obj.row];

	for (int i = 0; i < obj.row; i++)
		arr[i] = new int[obj.column];

	for (int i = 0; i < obj.row; i++) {
		for (int j = 0; i < obj.column; j++)
			arr[i][j] = obj.arr[i][j];
	}
}
A::~A() {
	if (arr != nullptr) {
		for (int i = 0; i < row; i++)
			delete[] arr[i];
		delete[] arr;
	}
}


A& A::operator=(int a) {
	int** temp = new int* [1];
	*temp = new int[1];

	temp[0][0] = a;

	arr = temp;

	return *this;
}

void A::SetArr(int** a) {
	arr = a;
}
void A::SetRow(int r) {
	row = r;
}
void A::SetColumn(int c) {
	column = c;
}

int** A::GetArr() const {
	return arr;
}
int A::GetRow() const {
	return row;
}
int A::GetColumn() const {
	return column;
}

ostream& operator<<(ostream& os, const A& obj) {
	os << **obj.GetArr();

	return os;
}
istream& operator>>(istream& os, A& obj) {
	int** temp = new int* [1];
	*temp = new int[1];

	cin >> temp[0][0];

	obj.SetArr(temp);

	return os;
}

int operator+(const A& obj, const int& number) {
	return **obj.GetArr() + number;
}
int operator+(const int& number, const A& obj) {
	return **obj.GetArr() + number;
}
int operator+(const A& obj1, const A& obj2) {
	return **obj1.GetArr() + **obj2.GetArr();
}


int operator*(const A& obj, const int& number) {
	return **obj.GetArr() * number;
}
int operator*(const int& number, const A& obj) {
	return **obj.GetArr() * number;
}
int operator*(const A& obj1, const A& obj2) {
	return **obj1.GetArr() * **obj2.GetArr();
}

int operator-(const A& obj, const int& number) {
	return **obj.GetArr() - number;
}
int operator-(const int& number, const A& obj) {
	return **obj.GetArr() - number;
}
int operator-(const A& obj1, const A& obj2) {
	return **obj1.GetArr() - **obj2.GetArr();
}

double operator/(const A& obj, const int& number) {
	return **obj.GetArr() / number;
}
double operator/(const int& number, const A& obj) {
	return **obj.GetArr() / number;
}
double operator/(const A& obj1, const A& obj2) {
	if (**obj1.GetArr() == 0 || **obj2.GetArr() == 0)
		return 0;

	return **obj1.GetArr() / **obj2.GetArr();
}

bool operator<(const A& obj1, const A& obj2) {
	return **obj1.GetArr() < **obj2.GetArr();
}
bool operator>(const A& obj1, const A& obj2) {
	return **obj1.GetArr() > **obj2.GetArr();
}