#include <iostream>
#include "../Headers/point.h"

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
  delete [] name;
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
