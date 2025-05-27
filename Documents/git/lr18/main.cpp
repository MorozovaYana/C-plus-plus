#include <iostream>
using namespace std;

int increment (int &num){
    return num++;
}

int increment (int &num1, int num2){
    return num1 += num2;
}

int main(void) {
    
    int var = 0;
    for(int i = 0; i < 10; i++)
        if(i % 2)
            increment(var);
        else
            increment(var,i);
    cout << var << endl;
    return 0;
}

