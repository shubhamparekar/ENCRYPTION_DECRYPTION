# Password Encryption and Decryption

This project provides a simple C++ program that allows users to encrypt and decrypt passwords using predefined character mappings.

## Features

- Encrypt a given password using a predefined character mapping.
- Decrypt an encrypted password back to its original form.

## How It Works

The program uses two predefined character mappings:
- `passwordChar`: Contains the characters that can be used in the original password.
- `encryptionChar`: Contains the corresponding encrypted characters for each character in `passwordChar`.

### Example

For example, if the character 'A' in `passwordChar` is mapped to 'E' in `encryptionChar`, then the password 'A' will be encrypted to 'E'.

## Usage

1. Clone the repository or download the source code.
2. Compile the `main.cpp` file using a C++ compiler.
3. Run the compiled executable.

### Compilation

```sh
g++ -o main main.cpp
```

## Execution

Run the program using:

```sh
./password_manager
```

## Program Menu
When you run the program, you will be presented with the following menu:

1. Encrypt my Password (Program 1)
2. Decrypt my Password (Program 2)

## Example Usage
1. Choose the program by entering 1 or 2.
2. Enter the password to be encrypted or decrypted.
3. The program will display the encrypted or decrypted version of the password.
