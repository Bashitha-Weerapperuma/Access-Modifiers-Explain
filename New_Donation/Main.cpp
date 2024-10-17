#include <iostream>
#include "Donation.h"
#include "Registered_user.h"
#include "Package.h"

using namespace std;

int main() {
 
    Registered_user* regUser1 = new Registered_user("USR123");

   
    Donation donation1("D001", "Tharushai", "0705823421", "Tharushi@gmail.com", "1000", regUser1);
    Donation donation2("D002", "Dananjana", "0705823421", "Dananjana@gmail.com", "1500", regUser1);

    Package package1("Basic Package", 29.99f, 1, regUser1);
    Package package2("Premium Package", 49.99f, 2, regUser1);
    Package package3("Deluxe Package", 99.99f, 3, regUser1);

 
    donation1.showDonationDetails();
    cout << endl;
    donation2.showDonationDetails();

    cout << "Package Details:" << endl;
    package1.showPackageDetails();
    cout << endl;
    package2.showPackageDetails();
    cout << endl;
    package3.showPackageDetails();
    cout << endl;
   
    delete regUser1; 

    return 0;
}
