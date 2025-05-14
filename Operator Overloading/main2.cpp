
#include "Person.h"


int main(){
    Person Jane = Person("Jane", 60.0f, 23);
    Person John = Person("John", 75.0f, 40);

    float totalWeight =  Jane + John;
    cout <<"Total Weight: " << totalWeight << endl;

    if( Jane == John){
        cout <<"This is the same person" << endl;
    } 
    
    if (Jane != John){
        cout <<"This is NOT the same person" << endl;
    }

    if(Jane < John){
        cout << "Jane is younger than John" << endl;
    }
    if(Jane < John){
        cout << "John is older than Jane" << endl;
    }


    int johnAge = John;
    cout << "John's Age: " << johnAge << endl;

    string janeFirstName = Jane;
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane Weight: " << janeWeight << endl;

}