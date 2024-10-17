#include <iostream>
#include <cstring>
#include "Donation.h"

using namespace std;

Donation::Donation() {
    strcpy_s(D_ref_no, sizeof(D_ref_no), ""); 
    strcpy_s(name, sizeof(name), "");
    strcpy_s(phoneNo, sizeof(phoneNo), "");
    strcpy_s(email, sizeof(email), "");
    strcpy_s(amount, sizeof(amount), "");
    regUser = nullptr;
}

Donation::Donation(const char d_ref[], const char d_name[], const char d_phone[], const char d_email[], const char d_amount[], Registered_user* user) {
    strcpy_s(D_ref_no, sizeof(D_ref_no), d_ref);
    strcpy_s(name, sizeof(name), d_name);
    strcpy_s(phoneNo, sizeof(phoneNo), d_phone);
    strcpy_s(email, sizeof(email), d_email);
    strcpy_s(amount, sizeof(amount), d_amount);
    regUser = user;
}

void Donation::setDonationDetails(const char d_ref[], const char d_name[], const char d_phone[], const char d_email[], const char d_amount[]) {
    strcpy_s(D_ref_no, sizeof(D_ref_no), d_ref);
    strcpy_s(name, sizeof(name), d_name);
    strcpy_s(phoneNo, sizeof(phoneNo), d_phone);
    strcpy_s(email, sizeof(email), d_email);
    strcpy_s(amount, sizeof(amount), d_amount);
}

void Donation::showDonationDetails() {
    cout << "Donation Reference No: " << D_ref_no << endl;
    cout << "Donor Name: " << name << endl;
    cout << "Phone No: " << phoneNo << endl;
    cout << "Email: " << email << endl;
    cout << "Amount: " << amount << endl;

    if (regUser != nullptr) {
        cout << "Registered User ID: " << regUser->getUserID() << endl;
    }
}

Donation::~Donation() {
    cout << "Donation with reference " << D_ref_no << " is being deleted." << endl;
}
