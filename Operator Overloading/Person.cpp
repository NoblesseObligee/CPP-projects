#include "Person.h"
#include <string>

Person::Person(){
    mWeight = 65
    mFirstName = "Malcolm";
    mAge = 20;
}

Person::Person(float newWeight){
    mWeight = newWeight;
}

Person::~Person(){

}

Person::operator + (const Person& otherPerson){
    
}

