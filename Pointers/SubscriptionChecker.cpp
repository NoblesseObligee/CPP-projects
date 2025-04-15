#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <= 10){
        cout << "Your Subscription will expire soon. Renew now!"<< endl;
    }
    else if (daysUntilExpiration <= 5){
        cout <<"Your subscription expires in "<< daysUntilExpiration <<"\n Renew now and save 10%! \n";
    }
    else if(daysUntilExpiration == 1){
        cout <<"Your subscription expires within a day! \n Renew now and save 20%! \n";
    }
    else if (daysUntilExpiration == 0 ){
        cout<<"Your subscription has expired";
    }
    else{
        cout << "You have an active subscription";
    }

   return 0;
}
