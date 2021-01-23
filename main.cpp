#include <iostream>
using namespace std;

int main() {
    
    int wanted_number;
    int wanted_multiples;

    cout << "The number till which you want multiples";
    cin >> wanted_number;
    cout << "\n" << "The number of multiples\n\n";
    cin >> wanted_multiples;

/*
    for (int i = 2; i <= wanted_number; i++) {

        for (int x = 0; x < wanted_multiples; x++) {

            cout << i * x << "  ";
            


        }

    }

    */

    for (int i = 2; i <= wanted_number; i++) {

        for (int x = 1; x < wanted_multiples; x++) {

            cout << i * x << "   \n";

        }


    }

