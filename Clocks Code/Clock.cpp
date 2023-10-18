// Clock.cpp
#include "Clock.h"
#include <iostream>

Clock::Clock(int h, int m, int s) : hour(h), minute(m), second(s) {}

void Clock::addHour() {
    hour = (hour + 1) % 24;
}

void Clock::addMinute() {
    minute = (minute + 1) % 60;
    if (minute == 0) {
        addHour();
    }
}

void Clock::addSecond() {
    second = (second + 1) % 60;
    if (second == 0) {
        addMinute();
    }
}

Clock12Hour::Clock12Hour(int h, int m, int s) : Clock(h, m, s) {}

void Clock12Hour::addHour() {
    hour = (hour + 1) % 12;
    if (hour == 0) {
        hour = 12;
    }
}

void Clock12Hour::displayTime() const {
    std::cout << "12-Hour Clock: " << hour << ":" << minute << ":" << second << std::endl;
}

Clock24Hour::Clock24Hour(int h, int m, int s) : Clock(h, m, s) {}

void Clock24Hour::displayTime() const {
    std::cout << "24-Hour Clock: " << hour << ":" << minute << ":" << second << std::endl;
}
