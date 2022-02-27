//
//  main.cpp
//  MPLChapter3Project_PrimeNumbers
// This program outputs all prime numbers between 3 and n (input) using
// a doubly-nested loop.
//
//  Created on 2/20/22.
//

#include <iostream>
using namespace std;

int main() {
 
 // declaring int variables to be used in the loops and conditional statement
 int i, j, n;
 
// declaring and initializing a bool variable for the inner loop to check whether a number is prime or not
 bool isPrime = true;

// Asking the user to input a number that will be the top of the range. This will determine the number of iterations
 cout << "Enter n (to print primes from 3 to n): ";

// Initializing the variable with the user input. The loop will iterate once for each number between 3 and this number.
 cin >> n;

// The loop will begin to iterate as long as the value entered by the user is greater than 2
    if (n > 2){
        
        // using a for loop here to determine the number of iterations of the loop. While i is less than or equal to n, the loop will iterate.
        for (i = 3; i <= n; i++)
          
        // resetting the isPrime variable to true after each iteration of the inner loop - false could have become the value if a number is not prime.
        { isPrime = true;
            
            // The counter variable i drops down to the inner loop which checks to see if it is prime. The loop is looking for any of the values between 2 and i.
            for (j = 2; j < i; j++)
            {
                
                // conditional statement that checks to see if there are remainders when i is divided by j. If there is no remainder it is not prime and the isPrime value is set to false.
                if (i % j == 0)
                    isPrime = false;
                    
            }
            // conditional statement that checks to see if isPrime is true. If it is true than the value of the present value of the counter variable i is printed.
                if (isPrime)
                    cout << i << " is a prime number." << endl;
                
            }
        
            // if the user enters a number that is less than 3 they are given a warning message
        } else {
            cout << "That is not a valid number!\n";
    }

    return 0;
    
}

