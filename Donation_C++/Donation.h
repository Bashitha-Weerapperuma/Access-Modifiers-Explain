#ifndef DONATION_H
#define DONATION_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Donation {
private:
    char D_ref_no[10];
    char name[15];
    char phoneNo[12];
    char email[20];
    char amount[10];

public:
    // Constructors
    Donation();
    Donation(const char* refNo, const char* donorName, const char* phone, const char* email, const char* donationAmount);

    // Destructor
    ~Donation();

    // Methods
    void display() const;

    // Getters
    const char* getRefNo() const;
    const char* getName() const;
    const char* getPhoneNo() const;
    const char* getEmail() const;
    const char* getAmount() const;
};

class RegisteredUser {
private:
    char User_ID[10];
    vector<Donation*> donations; // Vector to store multiple donations for the user

public:
    // Constructors
    RegisteredUser();
    RegisteredUser(const char* id);

    // Destructor
    ~RegisteredUser();

    // Methods
    void addDonation(Donation* donation);
    void displayDonations() const;
    const char* getUserID() const;
};

#endif
