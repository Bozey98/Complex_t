#include <iostream>

using namespace std;

class complex {

private:
	double de, mn; // действительная и мнимая части
public:
	complex();
	complex(double a, double b) {
		de = a;
		mn = b;
	}
	~complex() {};
	void Print(ostream&cout) const;
	complex add(complex const & met1) const;
	complex sub(complex const & met2) const;
	complex Proizv(int met3)const;
	complex Chast(int met4) const;
	complex operator*(const complex&)const;
	complex operator/(const complex&)const;
	complex operator+=(const complex&);
	complex operator-=(const complex&);
	complex operator*=(const complex&);
	complex operator/=(const complex&);
	complex operator=(const complex&);
	bool operator==(const complex&)const;
	friend istream& operator>> (std::istream& is, complex& a);
	friend ostream& operator<< (std::ostream& os, const complex& a);
};
