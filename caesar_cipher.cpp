#include <iostream>

using namespace std;

// Function to perform Caesar cipher encryption
void CaesarCipher(char* plaintext, int shift, char* encryptedText) {
    for (int i = 0; plaintext[i] != '\0'; ++i) {
        char currentChar = plaintext[i];
        if (currentChar == ' ') {
            encryptedText[i] = '_';
        } else {
            char newChar = currentChar + shift;
            if (newChar == '_') {
                newChar += 1;
            }
            encryptedText[i] = newChar;
        }
    }
}

int main() {
    char plaintext[128], encryptedText[128] = {0};
    int shift;

    cout << "Enter plaintext: ";
    cin.getline(plaintext, 128);
    cout << "Enter shift value: ";
    cin >> shift;

    CaesarCipher(plaintext, shift, encryptedText);

    cout << "Encrypted text: " << encryptedText << endl;

    return 0;
}
