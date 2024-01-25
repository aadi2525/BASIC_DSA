#include <iostream>

int main() {
    // Input the elapsed time on the stop watch
    int hours, minutes, seconds;
    std::cout << "Enter the elapsed time (hh mm ss): ";
    std::cin >> hours >> minutes >> seconds;

    // Loop through possible values for the blank digit in minutes
    for (int i = 0; i <= 9; ++i) {
        int possibleMinutes = minutes + i * 10;

        // Check if the possible minutes is within the valid range
        if (possibleMinutes >= 0 && possibleMinutes <= 59) {
            // Calculate and display the minimum and maximum times
            int minMinutes = possibleMinutes % 10;
            int maxMinutes = possibleMinutes + 5;

            std::cout << "Possible value for the blank digit: " << i << std::endl;
            std::cout << "Minimum Time: " << hours << ":" << minMinutes << ":" << seconds << std::endl;
            std::cout << "Maximum Time: " << hours << ":" << maxMinutes << ":" << seconds << std::endl;

            // Break the loop as we have found a valid value
            break;
        }
    }
}
