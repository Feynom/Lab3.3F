#pragma once
#include <iostream>
#include <sstream>
#include <iostream>

using namespace std;

class Angle
{
	double grades, minutes;
public:
	void SetGrades(double grades);
	void SetMinutes(double minutes);

	double GetGrades() const;
	double GetMinutes() const;

	Angle();
	Angle(double, double);
	Angle(const Angle&);

	Angle& operator = (const Angle&);
	friend ostream& operator << (ostream&, const Angle&);
	friend istream& operator >> (istream&, Angle&);
	operator string() const;

	Angle& operator ++ ();
	Angle& operator -- ();
	Angle operator ++ (int);
	Angle operator -- (int);

	double to360() const;
	double toRadian() const;

	friend Angle operator + (const Angle, const Angle);
	friend Angle operator - (const Angle, const Angle);
	friend Angle operator / (const Angle, const double);

	void Increase(Angle X, Angle& A, Angle& B, Angle& C, int tmp);
	void Decrease(Angle X, Angle& A, Angle& B, Angle& C, int tmp);

	double getSin() const;

	friend bool operator > (const Angle, const Angle);
	friend bool operator < (const Angle, const Angle);
	friend bool operator == (const Angle, const Angle);

	void Comparison(Angle A, Angle B);
};

