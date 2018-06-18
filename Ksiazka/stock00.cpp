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

	}




}
