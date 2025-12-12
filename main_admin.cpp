#include "main.h"
#include "customer.h"
#include "pakaian.h"
using namespace std;

void menuAdmin(){
    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Admin============ " << endl;
        cout << "|| 1. Parent                 ||" << endl;
        cout << "|| 2. Child                  ||" << endl;
        cout << "|| 0. back                   ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "you choose option 1" << endl;
              menuParent();
              continue;
           case 2  :
              cout << "you choose option 2" << endl;
              menuChild();
              continue;
        }
    }
}


void menuParent(){
    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Parent=============== " << endl;
        cout << "|| 1. insert first                   ||" << endl;
        cout << "|| 2. insert last                    ||" << endl;
        cout << "|| 3. insert sorted                  ||" << endl;
        cout << "|| 4. find customer                  ||" << endl;
        cout << "|| 5. hapus customer pertama         ||" << endl;
        cout << "|| 6. hapus customer terakhir        ||" << endl;
        cout << "|| 7. hapus customer berdasarkan ID  ||" << endl;
        cout << "|| 8. show all customer              ||" << endl;
        cout << "|| 0. back                           ||" << endl;
        cout << "======================================= " << endl;
        cout << "Choose your option : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "you choose option 1" << endl;
              

              break;
           case 2  :
              cout << "you choose option 2" << endl;
              

              break;

           

        }
    }
}

void menuChild(){
    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Child============ " << endl;
        cout << "|| 1. insert first          ||" << endl;
        cout << "|| 2. insert last           ||" << endl;
        cout << "|| .....dst                 ||" << endl;
        cout << "|| 0. back                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "you choose option 1" << endl;
              // write your code here

              break;
           case 2  :
              cout << "you choose option 2" << endl;
              // write your code here

              break;
            // continue for another case here
        }
    }
}