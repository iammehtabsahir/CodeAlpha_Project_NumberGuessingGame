/*Code Alpha Project
The Number Guessing Game */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() 
{
int num, guess, tries = 0;
srand(time(0)); //seed random number generator
num = rand() % 100 + 1; // random number between 1 and 100
cout << "Welcome To The Number Guessing Game\n\n";
do
{
cout << "Guess A Number From 1 And Upto 100 : ";
cin >> guess; 
tries++;
if (guess > num) 
cout << "Too high!\n";
else if (guess < num) 
cout << "Too low!\n";
else
cout << "Correct! You got it in "<< tries << " guesses! \n";
} 
while (guess != num);
return 0;
}
