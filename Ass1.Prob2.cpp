

#include <iostream>
using namespace std;

void convert(int seconds, int& hrs, int& mins, int& secs) {
        hrs = seconds / 3600; // divide by 3600 to get the number of hours
        seconds %= 3600; // use modulus operator to get the remaining seconds
        mins = seconds / 60; // divide by 60 to get the number of minutes
        secs = seconds % 60; // use modulus operator to get the remaining seconds
}

int main() {
    int seconds, hrs, mins, secs;
    do {
        cout << "Enter a number of seconds up to 18,000: ";
        cin >> seconds;
    } while (seconds > 18000);
        convert(seconds, hrs, mins, secs);
        cout << seconds << " seconds is equivalent to " << hrs << " hours, " << mins << " minutes, and " << secs << " seconds." << endl;

  
    return 0;
}



