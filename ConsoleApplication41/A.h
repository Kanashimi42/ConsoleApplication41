#pragma once
#include <iostream>

using namespace std;

class A {
	int** arr;
	int row;
	int column;
public:
	A();
	A(int, int);
	A(const A&);
	~A();
	A& operator=(int a);

	void SetArr(int**);
	void SetRow(int);
	void SetColumn(int);

	int** GetArr() const;
	int GetRow() const;
	int GetColumn() const;
};
ostream& operator<<(ostream&, const A&);
istream& operator>>(istream&, A&);
int operator+(const A&, const int&);
int operator+(const int&, const A&);
int operator+(const A&, const A&);

int operator-(const A&, const int&);
int operator-(const int&, const A&);
int operator-(const A&, const A&);

double operator/(const A&, const int&);
double operator/(const int&, const A&);
double operator/(const A&, const A&);


int operator*(const A&, const int&);
int operator*(const int&, const A&);
int operator*(const A&, const A&);

bool operator<(const A&, const A&);
bool operator>(const A&, const A&);