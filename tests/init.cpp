#include <complexh.hpp>
#include <catch.hpp>

SCENARIO("complex init without parametrs", "[init wp]") {
	complex h;
	REQUIRE(h.deist() == 0);
	REQUIRE(h.mnim() == 0);
}

SCENARIO("complex init  parametrs", "[wp]") {
	complex h(3,3);
	REQUIRE(h.deist() == 3);
	REQUIRE(h.mnim() == 3);
}

SCENARIO("complex sum", "[sum]") {
	complex a(1,1),b(2,2),c(3,3);
	REQUIRE(a.add(b) ==c);
}

SCENARIO("complex sub", "[sub]") {
	complex a(3,3),b(2,2),c(1,1);
	REQUIRE(a.sub(b) == c);
}

SCENARIO("Proizv", "[Pro]") {
	complex a(1,1),b;
	int k = 4;
	b = a.Proizv(k);
	REQUIRE(b.deist() == 4);
	REQUIRE(b.mnim() == 4);
}

SCENARIO ("Chast", "[Cha]") {
	complex a(4,4),b;
	int k = 4;
	b = a.Chast(k);
	REQUIRE(b.deist() == 1);
	REQUIRE(b.mnim() == 1);
}


SCENARIO("operator *", "[op*]") {
	complex a(1,1),b(2,2),c(-3,4);
	c = a*b;
	REQUIRE(a==c);
}

SCENARIO("operator /", "[op/]") {
	complex a(4,7),b(3,1),c(0.62,0.34);
	c = a/b;
	REQUIRE(a==c);
}

SCENARIO("operator +=", "[op+=]") {
	complex a(3,3),b(2,2),c(1,1);
	a-=b;
	REQUIRE(a==c);
}

SCENARIO("operator ==", "[op==]") {
	complex a(1,1),b(1,1);
	REQUIRE(a==b);
}

SCENARIO("operator *=", "[op*=]") {
	complex a(1,1),b(2,2),c(-3,4);
	a*=b;
	REQUIRE(a==c);
}

SCENARIO("operator /=", "[op/=]") {
	complex a(4,7),b(3,1),c(0.62,0.34);
	a/=b;
	REQUIRE(a==c);
}

SCENARIO("operator =", "[op=]") {
	complex a(1,1),b(2,2);
	a = b;
	REQUIRE(a==b);
}



	
	
