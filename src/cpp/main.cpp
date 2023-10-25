/*
 * Author: Anvarov Askarjon
 * Date: 25.10.2023
 */

#include <iostream>
#include "task_1.h"

class leapYear {
public:
    void leapYearValue(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            std::cout << year << " is a leap year." << std::endl;
        } else {
            std::cout << year << " is not a leap year." << std::endl;
        }
    }
};

using namespace std;
int main() {
    leapYear year_1;
    cout<<"Task_1"<<endl;
    cout<<"You can enter a year : "<<endl;
    int x;
    cin>>x;
    year_1.leapYearValue(x);

    return 0;
}
