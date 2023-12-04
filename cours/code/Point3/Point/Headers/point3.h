#ifndef POINT3_H
#define POINT3_H

#include "./point.h"

class Point3 : public Point {
public:
  Point3();
  Point3(float, float, float);
  Point3(const Point3 &);
  ~Point3();

  Point3 &operator=(const Point3 &);

  void affiche() const;

private:
  float z;
};

#endif // POINT3_H
