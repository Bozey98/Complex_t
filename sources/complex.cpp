#include "complexh.hpp"

complex::complex() {
	de = 0;
	mn = 0;
}

void complex::Print(ostream&out) const {

	out << de << " + " << mn << "i" << endl;

}

 complex complex::add(complex const & met1) const {

	
	return complex(de+met1.de, mn+met1.mn);
}

complex complex::sub(complex const & met2) const {
	

	return complex(de-met2.de, mn-met2.mn);

}

complex complex::Proizv(int met3) const {


	return complex(de*met3, mn*met3);

}


complex complex::Chast(int met4) const{


	return complex(de/met4, mn/met4);

}

complex complex::operator*(const complex& a) const {

	return complex(de*a.de - mn*a.mn, de*a.mn + mn*a.de);
}

complex complex::operator/(const complex& a) const {

	return complex((de*a.de + mn*a.mn) / (a.de*a.de + a.mn*a.mn),
		(a.de*mn - de*a.mn) / (a.de*a.de + a.mn * a.mn));
}

complex complex::operator+=(const complex& a) {


	de += a.de;
	mn += a.mn;


	return complex(de,mn);
}

complex complex::operator-=(const complex& a) {


	de -= a.de;
	mn -= a.mn;


	return complex(de, mn);
}

complex complex::operator*=(const complex& a) {


	double help = de;
	help = de*a.de - mn*a.mn;
	mn = de*a.mn + mn*a.de;
	de = help;


	return *this;
}

complex complex::operator/=(const complex& a) {

	double help = de;
	help = (de*a.de + mn*a.mn) / (a.de*a.de + a.mn*a.mn);
	mn = (a.de*mn - de*a.mn) / (a.de*a.de + a.mn * a.mn);
	de = help;


	return *this;
}

complex complex::operator=(const complex& a) {


	de = a.de;
	mn = a.mn;


	return *this;
}

bool complex::operator==(const complex& a) const {
	if ((de == a.de) && (mn == a.mn)) {
		return true;
	}
	else {
		return false;
	}

} 
   
istream& operator >> (std::istream& is, complex& a)
{
	cout << "Введите действительную часть" << endl;
	is >> a.de;
	cout << "Введите мнимую часть" << endl;
	is >> a.mn;
	
	return is;
}
ostream& operator<< (std::ostream& os, const complex& a)
{
	a.Print(os);
	return os;
}
