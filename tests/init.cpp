#include <complexh.hpp>
#include <catch.hpp>

SCENARIO("complex init without parametrs", "[init wp]") {
	complex h;
	REQUIRE(h.deist() == 0);
	REQUIRE(h.mnim() == 0);
}

SCENARIO("complex init  parametrs", "[ wp]") {
	complex h(3,3);
	REQUIRE(h.deist() == 3);
	REQUIRE(h.mnim() == 3);
}

SCENARIO("complex sum", "[sum]") {
	complex a(1,1),b(2,2),c(3,3);
	REQUIRE(a.add(b) ==c);



	
	
