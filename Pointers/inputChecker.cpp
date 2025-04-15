#include <iostream>
using namespace std;

int main(){
bool check = true;

     while (check){
        int number;
        cout <<"Enter an integer value between 5 and 10" << endl;
        cin >> number;

        if(!(number <= 0 || number >= 0)){
            cout << "Sorry, you entered an invalid number, please try again" << endl;
            check = false;
        }
        if (number < 5){
            cout <<"You entered " << number <<". Please enter a number between 5 and 10." << endl;
            check = false;
        }
        else if (number >= 5 && number <= 10){
            cout <<"Your input value (" << number <<") has been accepted." << endl;
            check = false;
        }

     }

     return 0;
}
