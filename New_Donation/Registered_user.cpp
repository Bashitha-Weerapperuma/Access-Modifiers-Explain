#include <iostream>
#include <cstring>
#include "Registered_user.h"

using namespace std;

Registered_user::Registered_user() {
    strcpy_s(user_ID, sizeof(user_ID), "");
}

Registered_user::Registered_user(const char* id) {
    strcpy_s(user_ID, sizeof(user_ID), id);
}

const char* Registered_user::getUserID() {
    return user_ID;
}

Registered_user::~Registered_user() {
    cout << "Registered User with ID " << user_ID << " is being deleted." << endl;
}
