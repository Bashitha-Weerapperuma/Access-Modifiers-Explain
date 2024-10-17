#pragma once

class Registered_user {
private:
    char user_ID[10];

public:
    Registered_user();
    Registered_user(const char* id);
    const char* getUserID();
    ~Registered_user();
};
