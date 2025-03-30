#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
void Armstrong(int n)
{
    int A_no = 0;        // To store Armstrong sum
    int dup = n;         // Duplicate of the number
    int num_digits = 0;  // To count the number of digits

    // Count the number of digits in the number
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        num_digits++; //jitna baar 10 se divide hoga utna baar num_didit counter badhega
    }

    // Calculate the Armstrong sum
    temp = n; // Reset temp to original number
    while (temp > 0)
    {
        int ln = temp % 10;           // Extract last digit
        A_no += pow(ln, num_digits);  // Raise to 'num_digits' power and add to sum
        temp /= 10;                   // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (A_no == dup)
    {
        cout << dup << " is an Armstrong number." << endl;
    }
    else
    {
        cout << dup << " is NOT an Armstrong number." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> n;
    Armstrong(n);
    return 0;
}
