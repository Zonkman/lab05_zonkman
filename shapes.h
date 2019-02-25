#ifndef SHAPES_H
#define SHAPES_H

// A struct is a way of defining a new data type.
// In C/C++, we have int, double, char etc.
// We can also define a new data type by grouping several items together
//  and giving each part of the struct a name.
// The parts of a struct are called "members" of that struct

struct Point {
  double x;
  double y;
  
  Point(double _x = 0, double _y = 0)
  {
    this->x = _x;
    this->y = _y;
  }

  //lol
  Point operator + (const Point &b) const{
    return Point(x+b.x,y+b.y);
  }

  Point operator - (const Point &b) const{
    return Point(x-b.x,y-b.y);
  }

  bool operator == (const Point &b) const{
    return (x == b.x && y == b.y);
  }

  Point& operator = (const Point &b){
    x = b.x;
    y = b.y;
    return *this; //???
  }

  Point operator * (const double &s) const{ //scalar multiply
    return Point(x*s,y*s);
  }


}; // Now we can declare data items of type "struct Point".

// Don't forget the closing semicolon on your struct definitions.

// We are going to define a Box as a special case of a Rectangle.
// What is special about a Box is that its sides are parallel to 
// x and y axes.    Note that we can have a struct inside a struct!

//ok this area thing we probably want inside the Box type

struct Box {
  Point ul; // upper left corner
  double width;
  double height;
  
  double area(){
    return width*height;
  }

}; // Now we can declare data items of type "struct Box"


#endif // SHAPES_H
