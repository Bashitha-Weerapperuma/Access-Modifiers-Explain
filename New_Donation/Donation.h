#pragma once
#include "Registered_user.h"
#define SIZE 5

class Donation {
private:
    char D_ref_no[10];
    char name[15];
    char phoneNo[12];
    char email[20];
    char amount[10];
    Registered_user* regUser; 

public:
    Donation();
    Donation(const char d_ref[], const char d_name[], const char d_phone[], const char d_email[], const char d_amount[], Registered_user* user);
    void setDonationDetails(const char d_ref[], const char d_name[], const char d_phone[], const char d_email[], const char d_amount[]);
    void showDonationDetails();
    ~Donation();
};
