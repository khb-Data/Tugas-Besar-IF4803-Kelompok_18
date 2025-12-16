#include <iostream>
#include "customer.h"
#include "pakaian.h"
#include "main.h"
using namespace std;

int main()
{
    // PENTING: Inisialisasi list terlebih dahulu
    createListCustomer(LC);
    createListPakaian(LP);

    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu ============ " << endl;
        cout << "|| 1. Test Case             ||" << endl;
        cout << "|| 2. Study Case            ||" << endl;
        cout << "|| 0. exit                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Pilihan anda : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "memilih pilihan 1" << endl;
              menuAdmin();
              break;
           case 2  :
              cout << "memilih pilihan 2" << endl;
              menuUser();
              break;
           case 0  :
              cout << "Terima kasih! Program selesai." << endl;
              break;
           default :
              cout << "Pilihan tidak valid!" << endl;
              system("pause");
        }
    }

    return 0;
}
