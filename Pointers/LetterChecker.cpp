#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main(){

    string  values[8] = {"B123", "C234","A345","C15","B177", "G3003","C235", "B179"};
    
    for(int i = 0; i < sizeof(values[0]); i++){
            string value1 = values[i];
            char letter = 'B';
          if(value1.at(0) == letter){
            cout << value1 << "\n";
          }
          
    }



    return 0;
}
