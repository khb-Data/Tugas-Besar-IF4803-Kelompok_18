#include "customer.h"
#include <iostream>
using namespace std;

void insertCustomerLast(ListCustomer &LC, adrCustomer C){
    if (isEmptyCustomer(LC)){
        LC.first = C;
        LC.last = C;
    }else {
        C->prev = LC.last;
        LC.last->next = C;
        LC.last = C;
    }
}

void insertCustomerSorted(ListCustomer &LC, adrCustomer C){

}

void showAllCustomer(ListCustomer LC){
    
}