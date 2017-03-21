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

complex complex::operator*(const complex& a) {
	complex help(de, mn);

	help.de = de*a.de;
	help.mn = mn*a.mn;


	return help;
}

complex complex::operator/(const complex& a) {
	complex help(de, mn);

	help.de = de/a.de;
	help.mn = mn/a.mn;


	return help;
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


	de *= a.de;
	mn *= a.mn;


	return complex(de, mn);
}

complex complex::operator/=(const complex& a) {


	de *= a.de;
	mn *= a.mn;


	return complex(de, mn);
}

complex complex::operator=(const complex& a) {


	de = a.de;
	mn = a.mn;


	return complex(de, mn);
}

bool complex::operator==(const complex& a) {
	if ((de == a.de) && (mn == a.mn)) {
		return true;
	}
	else {
		return false;
	}

} 
