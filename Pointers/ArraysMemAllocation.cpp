#include <iostream>
using namespace std;

int main(){
    int numberOfRows = 0;
    int numberOfColumn = 0;;
    double** multiDimensionArr = nullptr;
    bool limitChecker = false;
    do {
    cout << "Enter the number of rows of your Array but shouldn't exceed 3: ";
    cin >> numberOfRows;

        // Checking if the number of rows entered are greater than 0, less than or equal and are not above 3
   
    if((numberOfRows > 0 && numberOfRows <= 3)){
        
        multiDimensionArr = new double*[numberOfRows];
        limitChecker = false;
    } 
    else if (numberOfRows > 3 || numberOfRows < 0){
        cout << "The inputs exceed the limit, Enter valid number of rows: ";
        cin >> numberOfRows;
    } else{
        limitChecker = true;
    }
    cout << "Enter the number of columns of your Array but shouldn't exceed 3: ";
    cin >> numberOfColumn;

    //Checking the number of columns
    if (numberOfColumn > 3 || numberOfColumn < 0){
        cout << "The inputs exceed the limit, Enter valid number of columns: ";
        cin >> numberOfColumn;
    } 
   


    for(int i = 0; i < numberOfRows; i++){
        if((numberOfColumn  > 0 && numberOfColumn <=3 )){
            multiDimensionArr[i] = new double[numberOfColumn];
            limitChecker = false;
        } 
    }
    
    } while (limitChecker);

    //Checking if memory has been allocated
    if(multiDimensionArr == nullptr){
        cout << "Error: memory could not be allocated \n";

    }
    else{
        //Allocating values to the 2D array
       for (int i = 0; i < numberOfRows; i++){
        for(int j = 0; j < numberOfColumn; j++){
            double value;
            cout << "Enter a value: ";
            cin >> value;
            multiDimensionArr[i][j] = value;
            }
        }

        //Displaying the values of the array

        cout <<"\n\n";
        cout <<"--------------2D Array Values-----------------\n";
        for (int i = 0; i < numberOfRows; i++){
            for(int j = 0; j < numberOfColumn; j++){
               
              cout << multiDimensionArr[i][j] << " \t ";
                }
                cout << "\n";
            }

        //Deallocating memory
        for(int i = 0; i < numberOfRows; i++){
            delete [] multiDimensionArr[i];
        }
        delete [] multiDimensionArr;
    }



    return 0;
}