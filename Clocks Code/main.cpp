// main.cpp
#include "Clock.h"
#include <iostream>

void displayMenu() {
    std::cout << "1. Add Hour\n";
    std::cout << "2. Add Minute\n";
    std::cout << "3. Add Second\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    int h, m, s;
    std::cout << "Enter initial time (HH MM SS): ";
    std::cin >> h >> m >> s;

    Clock12Hour clock12(h, m, s);
    Clock24Hour clock24(h, m, s);

    int choice;
    do {
        clock12.displayTime();
        clock24.displayTime();

        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                clock12.addHour();
                clock24.addHour();
                break;
            case 2:
                clock12.addMinute();
                clock24.addMinute();
                break;
            case 3:
                clock12.addSecond();
                clock24.addSecond();
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
