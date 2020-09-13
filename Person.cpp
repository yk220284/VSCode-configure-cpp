#include <iostream>
#include "Person.hpp"
using namespace std;

Person::Person(int input_age)
{
    age = input_age;
}

ostream &operator<<(ostream &outs, Person person_object)
{
    outs << "My age is " << person_object.age << endl;
    return outs;
}