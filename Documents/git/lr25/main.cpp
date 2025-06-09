#include <iostream>
using namespace std;

class Base{
public:
    
    virtual char getSymbol() = 0;
    virtual int number() = 0;
    virtual ~Base() {}
    virtual void draw () {
        cout << "Drawing " << number() << endl;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2 - i - 1; ++j)
                cout << " ";
            cout << "/";
            for (int j = 0; j < 2 * i; ++j)
                cout << getSymbol();
            cout << "\\" << endl;
        }
    }
};

class TreeWithSlash : public Base {
public:
    char getSymbol() override{
        return '/';
    }
    int number() override{
        return 1;
    }
    
};


class TreeWithStars : public Base {
public:
    char getSymbol() override{
        return '*';
    }
    int number() override{
        return 2;
    }
    
};

class TreeWithPlus : public Base {
public:
    char getSymbol() override{
        return '+';
    }
    int number() override{
        return 3;
    }
    
};
int main() {
    
    Base* forest[3];

        // Create objects of derived classes
        TreeWithSlash t1;
        TreeWithStars t2;
        TreeWithPlus t3;

        // Assign pointers to the array
        forest[0] = &t1;
        forest[1] = &t2;
        forest[2] = &t3;
    
    for (int i = 0; i < 3; ++i) {
            forest[i]->draw();
            cout << endl;
        }
    
    
    return 0;
}
