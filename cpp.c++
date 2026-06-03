#include <iostream>   
#include <map>        
#include <string>     
#include <cctype>     

using namespace std;

int main() {
    // Map each uppercase letter to its Morse code representation
    map<char, string> morse = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
        {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}
    };

    string message;
    cout << "Enter a message: ";
    getline(cin, message); // Read full line of input from user

    string fullMorse = "";  // Will store the complete Morse code translation

    
    for (char c : message) {
        if (isalpha(c)) { // Only process alphabetic characters
            char upper = toupper(c); // Convert to uppercase for consistency
            cout << upper << ": " << morse[upper] << endl; // Print letter and Morse code
            fullMorse += morse[upper] + "   "; // Add Morse code with 3 spaces between letters
        }
        // (Optional improvement: handle spaces or numbers here)
    }


    cout << "\nFull Morse code message:\n" << fullMorse << endl;

    return 0; 
}
