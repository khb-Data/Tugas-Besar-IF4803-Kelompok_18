#include "customer.h"
#include <iostream>
using namespace std;

bool isEmptyCustomer(ListCustomer LC) {
    return (LC.first == nullptr);
}   
void createListCustomer(ListCustomer &LC) {
    LC.first = nullptr;
    LC.last = nullptr;
}
adrCustomer createCustomer(infotypeCustomer x) {
    adrCustomer C = new Customer;
    C->info = x;
    C->next = nullptr;
    C->prev = nullptr;
    createListPakaian(C->child);  
    return C;
}
void insertCustomerFirst(ListCustomer &LC, adrCustomer C) {
    if (isEmptyCustomer(LC)) {
        LC.first = C;
        LC.last = C;
    } else {
        C->next = LC.first;
        LC.first->prev = C;
        LC.first = C;
    }
}
