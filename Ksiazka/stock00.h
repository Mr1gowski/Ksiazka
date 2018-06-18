#pragma once
#ifndef  MYTIME_H_
#define  MYTIME_H_
#include <iostream>
namespace vector
{

	
	class Vector
	{
	public:
		enum Mode {RECT,POL};
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval()const { return x; }
		double yval()const { return y; }
		double magval()const { return mag; }
		double angval()const { return ang; }

		void polar_mode();
		void rect_mode();

		Vector operator+(const Vector & b)const;
		Vector operator-(const Vector & b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream&
			operator<<(std::ostream & os, const Vector & v);

	private:
		double x, y, mag, ang;
		Mode mode;
		void setx();
		void sety();
		void setmag();
		void setang();
	};
}


#endif //  MYTIME_H_
