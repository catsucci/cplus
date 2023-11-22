#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {

  public:
    Point();
    Point(float);
    Point(float, float);
    ~Point();
    void saisie();
    void affiche() const {
      std::cout << "x: " << x << std::endl;
      std::cout << "y: " << y << std::endl;
    }

    static void afficheNumOfPoints() ;

  private:
    float x;
    float y;
    static int numOfPoints;
    char* name;

};

#endif // POINT_HPoint

