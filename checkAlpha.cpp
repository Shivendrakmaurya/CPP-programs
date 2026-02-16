// C++ program to check whether the entered character is a vowel or consonant

#include <iostream>
using namespace std;

int main(){

               char alpha;

               // Taking input from user
               cout << "Enter an alphabet = ";
               cin >> alpha;

               // Switch statement to check vowel or consonant
               switch (alpha){

               // Checking for lowercase vowels
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':

               // Checking for uppercase vowels
               case 'A':
               case 'E':
               case 'I':
               case 'O':
               case 'U':
               cout << alpha << " is a vowel";
               break; // Exit switch statement

               // If character is not a vowel
               default:cout << alpha << " is a consonant";
               }

               return 0;
}
