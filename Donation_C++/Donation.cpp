#include "Donation.h"

// Donation class constructors
Donation::Donation() {
    strcpy(D_ref_no, "000000000");
    strcpy(name, "Unknown");
    strcpy(phoneNo, "0000000000");
    strcpy(email, "unknown@example.com");
    strcpy(amount, "0");
}

Donation::Donation(const char* refNo, const char* donorName, const char* phone, const char* email, const char* donationAmount) {
    strcpy(D_ref_no, refNo);
    strcpy(name, donorName);
    strcpy(phoneNo, phone);
    strcpy(email, email);
    strcpy(amount, donationAmount);
}

// Donation class destructor
Donation::~Donation() {
    cout << "Deleting donation reference: " << D_ref_no << endl;
}

// Method to display donation details
void Donation::display() const {
    cout << "Donation Reference No: " << D_ref_no << endl;
    cout << "Donor Name: " << name << endl;
    cout << "Phone No: " << phoneNo << endl;
    cout << "Email: " << email << endl;
    cout << "Amount: " << amount << endl;
    cout << "---------------------------" << endl;
}

// Getters for Donation
const char* Donation::getRefNo() const {
    return D_ref_no;
}

const char* Donation::getName() const {
    return name;
}

const char* Donation::getPhoneNo() const {
    return phoneNo;
}

const char* Donation::getEmail() const {
    return email;
}

const char* Donation::getAmount() const {
    return amount;
}

// RegisteredUser class constructors
RegisteredUser::RegisteredUser() {
    strcpy(User_ID, "User0000");
}

RegisteredUser::RegisteredUser(const char* id) {
    strcpy(User_ID, id);
}

// RegisteredUser class destructor
RegisteredUser::~RegisteredUser() {
    cout << "Deleting user with ID: " << User_ID << endl;
    for (Donation* donation : donations) {
        delete donation;
    }
}

// Method to add a donation to the user
void RegisteredUser::addDonation(Donation* donation) {
    donations.push_back(donation);
}

// Method to display all donations of the user
void RegisteredUser::displayDonations() const {
    cout << "User ID: " << User_ID << endl;
    cout << "Donations:" << endl;
    for (const Donation* donation : donations) {
        donation->display();
    }
}

// Getter for User ID
const char* RegisteredUser::getUserID() const {
    return User_ID;
}
