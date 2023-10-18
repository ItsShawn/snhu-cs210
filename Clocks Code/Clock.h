// Clock.h
#pragma once

class Clock {
protected:
    int hour;
    int minute;
    int second;

public:
    Clock(int h, int m, int s);
    virtual void addHour();
    virtual void addMinute();
    virtual void addSecond();
    virtual void displayTime() const = 0; // Pure virtual function
};

class Clock12Hour : public Clock {
public:
    Clock12Hour(int h, int m, int s);
    void addHour() override;
    void displayTime() const override;
};

class Clock24Hour : public Clock {
public:
    Clock24Hour(int h, int m, int s);
    void displayTime() const override;
};

