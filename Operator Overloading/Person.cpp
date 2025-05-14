#include "Person.h"



Person::Person(){
    mWeight = 65.0f;
    mFirstName = "Malcolm";
    mAge = 20;
}

Person::Person(string name, float newWeight, int Age){
    mFirstName = name;
    mWeight = newWeight;
    mAge = Age;
}

Person::~Person(){

}

float Person::operator + (const Person& otherPerson){
    return this-> mWeight + otherPerson.mWeight;
}

bool Person::operator == (const Person& otherPerson){
    return this->mFirstName == otherPerson.mFirstName;
}
bool Person::operator != (const Person& otherPerson){
    return this->mFirstName != otherPerson.mFirstName;
     
}

bool Person::operator < (const Person& otherPerson){
   return this-> mAge < otherPerson.mAge;
}
bool Person::operator > (const Person& otherPerson){
   return this-> mAge > otherPerson.mAge;
}

Person::operator int(){
    return mAge;
}

Person::operator float(){
    return mWeight;
}

Person::operator string(){
    return mFirstName;
}

