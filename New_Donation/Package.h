#pragma once
#include "Registered_user.h"

class Package {
private:
    char P_type[20];
    float P_price; 
    int P_ID;  
    Registered_user* regUser; 

public:
    Package(); 
    Package(const char* type, float price, int id, Registered_user* user);
    void showPackageDetails(); 
    ~Package();
};
