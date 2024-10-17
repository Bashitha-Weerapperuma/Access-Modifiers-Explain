#include "Donation.h"
#include <iostream>
using namespace std;

int main() {
    // Creating a Registered User
    RegisteredUser user1("User123");

    // Creating donations and adding them to the user
    Donation* donation1 = new Donation("D0001", "Alice", "1234567890", "alice@example.com", "100");
    Donation* donation2 = new Donation("D0002", "Bob", "0987654321", "bob@example.com", "200");

    user1.addDonation(donation1);
    user1.addDonation(donation2);

    // Display the user's donations
    user1.displayDonations();

    return 0;
}
