#pragma once
const double pi = 3.14;
class circle {
private:
	double radius;
public:
	circle() = default;
	circle(double radius) {
		this->radius = radius;
	}
	double area() {
		return pi*radius*radius;
	}

	double l() {
		return 2 * pi*radius;
	}

	//accessors
	double getRadius() { return radius; }
	
	//operators
	double operator+(circle obj) {
		return this->area() + obj.area();
	}
	double operator-(circle obj) {
		return this->area() - obj.area();
	}
	double operator*(circle obj) {
		return this->area() * obj.area();
	}
	double operator/(circle obj) {
		return this->area() / obj.area();
	}

	circle operator+(double d) {
		this->radius += d;
		return *this;
	}

	circle operator -(double d) {
		this->radius -= d;
		return *this;
	}

	bool operator ==(circle obj) {
		return this->radius == obj.radius;
	}

	bool operator ==(double radius) {
		return this->radius == radius;
	}

	bool operator >(circle obj) {
		return this->l() > obj.l();
	}

};

