#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

namespace OTPGenerator {
    // Function to generate an OTP of given length
    string generateOTP(int length) {
        string otp = "";
        for (int i = 0; i < length; i++) {
            int random_digit = rand() % 10;  // Generates a random digit from 0 to 9
            otp += to_string(random_digit);
        }
        return otp;
    }
}

int main() {
    int otp_length;
    cout << "Enter the length of OTP to generate: ";
    cin >> otp_length;

    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    // Generate OTP using the OTPGenerator namespace
    string otp = OTPGenerator::generateOTP(otp_length);
    cout << "Generated OTP: " << otp << endl;

    return 0;
}
