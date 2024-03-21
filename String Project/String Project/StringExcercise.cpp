#include <iostream>
#include <string>
#include <unordered_map>

// Function to create a map for character substitution
std::unordered_map<char, char> createSubstitutionMap(const std::string& alphabet, const std::string& key) {
    std::unordered_map<char, char> substitution_map;
    for (size_t i = 0; i < alphabet.size(); ++i) {
        // Encrypting map: alphabet to key
        substitution_map[toupper(alphabet[i])] = toupper(key[i]);
        substitution_map[tolower(alphabet[i])] = tolower(key[i]);
    }
    return substitution_map;
}

// Function to create a reverse map for decryption
std::unordered_map<char, char> createReverseSubstitutionMap(const std::string& alphabet, const std::string& key) {
    std::unordered_map<char, char> reverse_substitution_map;
    for (size_t i = 0; i < key.size(); ++i) {
        // Decrypting map: key back to alphabet
        reverse_substitution_map[toupper(key[i])] = toupper(alphabet[i]);
        reverse_substitution_map[tolower(key[i])] = tolower(alphabet[i]);
    }
    return reverse_substitution_map;
}

// Function to encrypt or decrypt the message
std::string applySubstitution(const std::string& message, const std::unordered_map<char, char>& substitution_map) {
    std::string transformed_message = message;
    for (char& c : transformed_message) {
        if (substitution_map.find(c) != substitution_map.end()) {
            c = substitution_map.at(c);
        }
    }
    return transformed_message;
}

int main() {
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string key = "XZNLWEBGJHQDYVTKFUOMPCIASR";

    // Create encryption and decryption maps
    std::unordered_map<char, char> encryption_map = createSubstitutionMap(alphabet, key);
    std::unordered_map<char, char> decryption_map = createReverseSubstitutionMap(alphabet, key);

    // Get the user's message
    std::string message;
    std::cout << "Enter a secret message: ";
    getline(std::cin, message);

    // Encrypt the message
    std::string encrypted_message = applySubstitution(message, encryption_map);
    std::cout << "Encrypted Message: " << encrypted_message << std::endl;

    // Decrypt the message
    std::string decrypted_message = applySubstitution(encrypted_message, decryption_map);
    std::cout << "Decrypted Message: " << decrypted_message << std::endl;

    return 0;
}
