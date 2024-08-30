#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string message;
    
    // Enter the first message
    cout << "Enter a message: ";
    getline(cin, message); // Read the entire line including spaces
    
    string modifiedOutput;
    istringstream iss(message);
    string word;
    
    while (iss >> word) {
    	if (!modifiedOutput.empty()) {
    		
		}
		modifiedOutput += "#" + word ; // Add # around the word
	}
    
    // Display the entered message
    cout << "You Entered: " << modifiedOutput << endl;
    
    
    // Enter another message
    cout << "Enter Another message: ";
    getline(cin, modifiedOutput );
    
    modifiedOutput += "#" + word ; // Add # around the word
    

    // Display the new entered message
    cout << "You entered: " << modifiedOutput << endl;

    return 0;
}

