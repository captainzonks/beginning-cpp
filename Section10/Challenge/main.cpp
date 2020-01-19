// Section 10
// Challenge
// Substitution Cipher

/*
 * A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
 * 
 * Write a program that asks a user to enter a secret message.
 * 
 * Encrypt this message using the substitution cipher and display the encrypted message.
 * Then decrypt the encrypted message back to the original message.
 * 
 * You may use the 2 strings below for your substitution.
 * For example, to encrypt you can replace the character at position n in the alphabet
 * with the character position n in the key.
 * 
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 * 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string message;
    
    cout << "<<<<<<((((((((((SuperSecretEncryption))))))))))>>>>>>" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter the message to be encrypted: ";
    getline(cin, message);
    
    cout << "\nYour message: " << endl << message << endl;
    
    string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string cipher_key {"6crYk9UXhip8vLjO3wz0eIb2mG1BuxyKCRV75JoE4gqHnNTftFMs"};
    
    string encrypted_message;
    encrypted_message = message;
    
    for (size_t i {}; i < message.length(); ++i) {
        size_t position = alphabet.find(message.at(i));
            if (position != string::npos)
                encrypted_message.at(i) = cipher_key.at(position);
            else
                continue;
    }
    
    cout << "\n))))))))))<<<<<<ENCRYPTING>>>>>>((((((((((" << endl;
    cout << "\nYour encrypted message: " << encrypted_message << endl;
    
    string decrypted_message;
    decrypted_message = encrypted_message;
    
    for (size_t i{}; i < encrypted_message.length(); ++i) {
        size_t position = cipher_key.find(encrypted_message.at(i));
            if (position != string::npos)
                decrypted_message.at(i) = alphabet.at(position);
            else
                continue;
    }
    
    cout << "\n<<<<<<((((((((((DECRYPTING))))))))))>>>>>>" << endl;
    cout << "\nYour decrypted message: " << decrypted_message << endl;
    
    cout << endl;
    return 0;
}