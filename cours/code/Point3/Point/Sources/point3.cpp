#include "../Headers/point3.h"

using std::cout;
using std::endl;

Point3::Point3() {
  z = 0.0;
  cout << "Child default constr" << endl;
}

Point3::Point3(float x_, float y_, float z_) : Point(x_, y_) {
  z = z_;
  cout << "Child Constr with param." << endl;
}

Point3::Point3(const Point3 &p_) : Point(p_) {
  z = p_.z;
  cout << "child's recopie constr." << endl;
}

Point3::~Point3() { cout << "Child ~" << endl; }

Point3 &Point3::operator=(const Point3 &p_) {
  Point::operator=(p_);
  z = p_.z;
  cout << "child's affect operator." << endl;
  return *this;
}

void Point3::affiche() const {
  Point::affiche();
  cout << "z: " << z << endl;
}
