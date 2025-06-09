#include <iostream>
using namespace std;

const int InvalidArgument = 222;

float div(float arg1, float arg2) {
    if (arg2 == 0.0)
        throw InvalidArgument;  
    return arg1 / arg2;
}

int main(void) {
    float a, b;
    while (cin >> a >> b) {
        try {
            float r = div(a, b);
            cout << r << endl;
        }
        catch (int e) {
            if (e == InvalidArgument) {
                cout << "Are you kidding me?" << endl;
                cout << "Your input is not valid. You can't divide by zero." << endl;
            }
        }
    }
    return 0;
}
