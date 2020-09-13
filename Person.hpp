#include <iostream>
using namespace std;

class Person
{
private:
    int age;

public:
    Person(int input_age);
    friend ostream &operator<<(ostream &outs, Person person_object);
};