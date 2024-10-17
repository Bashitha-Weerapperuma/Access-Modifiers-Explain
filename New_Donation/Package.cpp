#include <iostream>
#include <cstring>
#include "Package.h"

using namespace std;

Package::Package() {
    strcpy_s(P_type, sizeof(P_type), ""); 
    P_price = 0.0f;
    P_ID = 0; 
    regUser = nullptr;
}

Package::Package(const char* type, float price, int id, Registered_user* user) {
    strcpy_s(P_type, sizeof(P_type), type);
    P_price = price;
    P_ID = id;
    regUser = user;
}

void Package::showPackageDetails() {
    cout << "Package ID: " << P_ID << endl;
    cout << "Package Type: " << P_type << endl;
    cout << "Package Price: $" << P_price << endl;


    if (regUser != nullptr) {
        cout << "Registered User ID: " << regUser->getUserID() << endl;
    }
}

Package::~Package() {
    cout << "Package with ID " << P_ID << " is being deleted." << endl;
}
