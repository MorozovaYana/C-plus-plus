#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    string lastName;
    int age;
    double height;
    
    void introduce() {
        cout << "Hello, I'm " << name << " " << lastName <<", a " << age << "-year-old " <<  "." << endl;
        cout << "Height: " << height << " cm." << endl;
        cout << endl;
    }
    
};

void print(Person* person){
    
    cout << person->name << " " << person->lastName << " is " <<  person->age << " years old." << endl;
    cout << "Height: " << person->height << " cm." << endl;
    cout << endl;

}

int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.lastName = "Potter";
    person.height = 175.5;
    
    cout << "Meet " << person.name << "!" << endl;
    
    print(&person);
    
    person.introduce();

    Person secondPerson;
    secondPerson.name = "Yana";
    secondPerson.lastName = "Morozova";
    secondPerson.age = 19;
    secondPerson.height = 170;
    
    cout << "Meet " << secondPerson.name << "!" << endl;
    print(&secondPerson);
    
    secondPerson.introduce();

    
return 0;
}
