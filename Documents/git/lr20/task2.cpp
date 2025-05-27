#include <iostream>
#include <string>

using namespace std;

class Square
{
private:
    double side;
    double area;
    
public:
    Square(double side);
    void set_side(double new_side);
    void print() const;

};

Square::Square(double side){
    set_side(side);
}

void Square::set_side(double new_side){
if (new_side >= 0) {
    this->side = new_side;
    this->area = new_side * new_side;
}
}

void Square::print() const {
cout << "Square: side = " << side << " area = " << area << endl;
}


// exercise 3

class AdHocSquare
{
    
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();

private:
    double side;
};

AdHocSquare::AdHocSquare(double side) {
    set_side(side);
}

void AdHocSquare::set_side(double side) {
    if (side >= 0) {
        this->side = side;
    }
}

double AdHocSquare::get_area() {
    return side * side;
}


class LazySquare
{
    
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();

private:
    double side;
    double area;
    bool side_changed;
};

LazySquare::LazySquare(double side){
    this->side = side;
    this->area = side * side;
    this->side_changed = false;
}

void LazySquare::set_side(double side) {
    if (side >= 0) {
        this->side = side;
        this->side_changed = true;
    }
}

double LazySquare::get_area() {
    if (side_changed) {
        area = side * side;
        side_changed = false;
    }
    return area;
}

// ....



int main()
{

    Square s(4);
    s.print();
    
    s.set_side (2.0);
    s.print();
    
    s.set_side (-33.0);
    s.print();
    
    cout << endl;
    
    AdHocSquare a(4);
    cout << "Area: " << a.get_area() << endl;
    
    a.set_side(2.0);
    cout << "Area: " << a.get_area() << endl;
        
    a.set_side(-5);
    cout << "Area: " << a.get_area() << endl;

    cout << "\n LazySquare " << endl;
    
    LazySquare l(4);
    cout << "Area: " << l.get_area() << endl;
        
    l.set_side(2.0);
    cout << "Area: " << l.get_area() << endl;
        
    l.set_side(-10); // Не зміниться
    cout << "Area: " << l.get_area() << endl;

      return 0;
}
