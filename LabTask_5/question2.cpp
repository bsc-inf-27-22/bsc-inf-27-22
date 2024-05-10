#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int dayUntilExpiration;
    srand(time(0));
     dayUntilExpiration = rand() % 12;
     switch (dayUntilExpiration)
     {
     case 0: cout << "Your subscription has expired! " << endl;
            break;
     case 1: cout << " your subscrition expires within a day " << endl
      << " Renew now and save 20%!! " <<endl;
           break;
     case 2:
     case 3:
     case 4:
     case 5: cout <<"Your subscription will expires in " <<
      dayUntilExpiration <<" days " <<endl << "Renew now and serve 20%!!"<<endl;
            break;
     case 6:
     case 7:
     case 8:
     case 9:
     case 10: cout<<" your subscription will expires soon"<<endl<< "Renew now "<<endl;
            break;
     default: cout <<" you have an active subscription "<<endl;
        break;
     }
     return 0;
}