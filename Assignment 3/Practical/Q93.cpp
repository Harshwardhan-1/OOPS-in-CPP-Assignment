//Q93.Write a class time with member function to add,subtract,and compare two values.
#include <iostream>
#include<string>
using namespace std;
class Time {
private:
    int hours, minutes, seconds;
public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    Time add(Time t) {
        int totalSeconds = (hours * 3600 + minutes * 60 + seconds) + 
                           (t.hours * 3600 + t.minutes * 60 + t.seconds);
        int newHours = totalSeconds / 3600;
        totalSeconds %= 3600;
        int newMinutes = totalSeconds / 60;
        int newSeconds = totalSeconds % 60;
        return Time(newHours, newMinutes, newSeconds);
    }
    Time subtract(Time t) {
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diffSeconds = totalSeconds1 - totalSeconds2;
        if (diffSeconds < 0) diffSeconds += 24 * 3600;  
        int newHours = diffSeconds / 3600;
        diffSeconds %= 3600;
        int newMinutes = diffSeconds / 60;
        int newSeconds = diffSeconds % 60;
        return Time(newHours, newMinutes, newSeconds);
    }
    int compare(Time t) {
        if (hours == t.hours && minutes == t.minutes && seconds == t.seconds)
            return 0; 
        else if (hours > t.hours || (hours == t.hours && minutes > t.minutes) || 
                 (hours == t.hours && minutes == t.minutes && seconds > t.seconds))
            return 1; 
        else
            return -1; 
    }
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};
int main() {
    Time t1(2, 30, 45);  
    Time t2(1, 45, 30);  
    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    Time sum = t1.add(t2);  
    cout << "Sum (Time 1 + Time 2): ";
    sum.display();
    Time diff = t1.subtract(t2);  
    cout << "Difference (Time 1 - Time 2): ";
    diff.display();
    int result = t1.compare(t2);  
    if (result == 0)
        cout << "Time 1 and Time 2 are equal." << endl;
    else if (result == 1)
        cout << "Time 1 is greater than Time 2." << endl;
    else
        cout << "Time 1 is smaller than Time 2." << endl;
    return 0;
}
