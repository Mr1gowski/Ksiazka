#pragma once
#include <cmath>
#include "stock00.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_Reg = 45 / atan(1.0);

	void Vector::setmag()
	{
		mag = sqrt(x*x + y * y);
	}
	void Vector::setang()
	{
		if (x == 0 && y == 0)
			ang = 0;
		else
			ang = atan2(x, y);

	}

	void Vector::setx()
	{
		x = mag * cos(ang);
	}

	void Vector::sety()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form = RECT)
		{
			x = n1;
			y = n2;
			setmag();
			setang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2/Rad_to_Reg;
			setx();
			sety();

		}
		else
		{
			cout << "niepoprawna wartosc trzeciego argumentu ";
			cout << "zeruje wektor\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{

		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			setmag();
			setang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_Reg;
			setx();
			sety();
		}

		else
		{
			cout << "niepoprawna wartosc trzeciego argumentu ";
			cout << "zeruje wektor\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{}
	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector & b)const
	{
		return Vector(x + b.x, y + b.y);
	}


	Vector Vector::operator-(const Vector & b)const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n)const
	{
		return Vector(n*x, n*y);
	}


	Vector operator*(double n, const Vector & a)
	{
		return Vector(a*n);
	}

	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y)=(" << v.x << "," << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m.a) = (" << v.mag << ")";
		}
		else
			os << "niepoprawny tryb reprezentacji wektora";
		return os;
	}

}


