# caesar-cipher-encryption

## Overview
This program implements a Caesar cipher in C++. It encrypts plaintext by shifting each character by a user-defined number of positions in the ASCII table. Spaces are replaced with underscores (`_`) to ensure the output is a continuous sequence of characters.

## Features
1. **Input Handling**: Accepts plaintext from the user.
2. **Shift Mechanism**: Encrypts text using a shift value provided by the user.
3. **Space Handling**: Replaces spaces with underscores (`_`).
4. **Validation**: Ensures underscores are not accidentally produced during encryption.

## Usage
### How to Run
1. Compile the program using a C++ compiler. For example:
   ```bash
   g++ -o caesar_cipher caesar_cipher.cpp
   ```
2. Run the compiled program:
   ```bash
   ./caesar_cipher
   ```

### Input Example
- **Plaintext**: `hello world`
- **Shift Value**: `5`

### Output Example
- **Encrypted Text**: `mjqqt_|twqi`

## Function Details
### `CaesarCipher`
**Description**: Encrypts plaintext using a Caesar cipher algorithm.
- **Parameters**:
  - `plaintext` (char*): Input string to be encrypted.
  - `shift` (int): Number of positions to shift each character.
  - `encryptedText` (char*): Output string to store the encrypted text.

**Logic**:
- Spaces (` `) are replaced with underscores (`_`).
- Characters are shifted by the specified value.
- If the shifted character becomes an underscore (`_`), it is incremented to the next character.

### `main`
**Description**: Handles user input and output.
- Reads plaintext and shift value from the user.
- Calls the `CaesarCipher` function.
- Displays the encrypted text.

## Notes
- Ensure the plaintext does not exceed 128 characters.
- The shift value can be positive or negative.

## License
This project is open-source and available under the MIT License.
