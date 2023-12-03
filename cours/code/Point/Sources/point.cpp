#include "../Headers/point.h"
#include <iostream>

int Point::numOfPoints = 0;

Point::Point() {
  x = 0;
  y = 0;
  name = new char[50];
  std::cout << "Ana lbandora l7amra" << std::endl;
}

Point::Point(float x) {
  this->x = x;
  this->y = x;
  name = new char[50];
  std::cout << "Ana lbandora l7amra" << std::endl;
}

Point::Point(float x, float y) {
  this->x = x;
  this->y = y;
  name = new char[50];
  std::cout << "Ana lbandora l7amra" << std::endl;
}

Point::~Point() {
  delete[] name;
  std::cout << "7ammoud 7ammoud" << std::endl;
}

void Point::saisie() {
  std::cout << "x = ";
  std::cin >> x;
  std::cout << "y = ";
  std::cin >> y;
  Point::numOfPoints++;
}

void Point::afficheNumOfPoints() {
  std::cout << "numOfPoints: " << Point::numOfPoints << std::endl;
}

Point Point::symetrique() {
  Point sym_;
  sym_.x = -x;
  sym_.y = -y;
  return sym_;
}

void Point::operator=(const Point &p_) {
  x = p_.x;
  y = p_.y;
}

// Point *Point::symetrique() {
// Point *sym_;
// sym_ = new Point;
// sym_->x = -x;
// sym_->y = -y;
// return sym_;
//}

// Point &Point::symetrique() {
//  La variable sym_ est obligatoirement static pour retourner par reference
// static Point sym_;
// sym_.x = x;
// sym_.y = y;
// return sym_;
//}

Point &Point::operator+(const Point &p_) {
  static Point res;
  res.x = x + p_.x;
  res.y = y + p_.y;
  return res;
}

float Point::operator*(const Point &p_) { return (x * p_.x + y * p_.y); }

Point &Point::operator*(const float &f_) {
  static Point res;
  res.x = x * f_;
  res.y = y * f_;
  return res;
}

Point &operator*(const float &f_, const Point &p_) {
  static Point res;
  res.x = p_.x * f_;
  res.y = p_.y * f_;
  return res;
}
