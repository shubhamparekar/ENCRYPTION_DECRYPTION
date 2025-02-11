#include <iostream>
#include <vector>
#include <string>

const std::vector<char> passwordChar = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '~', '`', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '-', '+', '=', '{', '[', '}', ']', '|', '\\', ':', ';', '"', '\'', '<', ',', '>', '.', '?', '/'};

const std::vector<char> encryptionChar = {
    'E', 'P', 'F', '4', 'e', 'o', 'r', 'y', 'G', 'g', 'k', 'R', 'n', 'M', '7', 'x', 'm', 'J', 'p', 'X', 'j', 'w', '8', 'C', 't',
    '1', 'Z', 'L', 'b', '9', ']', 'q', 'I', '[', '@', 'v', '5', 'B', 'z', '3', '0', 'i', 'A', '!', '\'', '/', 'K', '`', '^', '+',
    'W', ',', '|', 'V', '"', 'c', '(', '$', 'a', '-', 'f', ';', ')', '?', 'h', 'd', '2', '_', 'c', 'Y', '*', '>', '<', '&', 'l',
    '#', 'D', '~', 'O', 'u', 'H', 's', '\\', 'N', '{', '=', 'U', 'S'};

const size_t arrLen = passwordChar.size(); // encryptionChar.size()

int getIndex(const std::vector<char>& vec, char x)
{
    for (size_t i = 0; i < arrLen; i++)
    {
        if (x == vec[i])
            return i;
    }
    return -1;
}

std::string encryptionPassword(const std::string& password)
{
    size_t passLen = password.length();
    std::string ePass = "";
    for (size_t i = 0; i < passLen; i++)
    {
        ePass += encryptionChar[getIndex(passwordChar, password[i])];
    }
    return ePass;
}

std::string decryptionPassword(const std::string& password)
{
    size_t passLen = password.length();
    std::string dPass = "";
    for (size_t i = 0; i < passLen; i++)
    {
        dPass += passwordChar[getIndex(encryptionChar, password[i])];
    }
    return dPass;
}

void showList()
{
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "1. Encrypt my Password (Program 1)" << std::endl;
    std::cout << std::endl;
    std::cout << "2. Decrypt my Password (Program 2)" << std::endl;
    std::cout << std::string(45, '-') << std::endl;
}

int main()
{
    int input;
    std::string password = "";
    showList();
    std::cout << "Choose the program: ";
    std::cin >> input;
    system("cls");

    if (input != 1 && input != 2)
    {
        showList();
        std::cout << "Encrypt the Password. Press 1\nDecrypt the Encrypted Password. Press 2" << std::endl;
        std::cout << "Choose the program: ";
        std::cin >> input;
        system("cls");
    }

    switch (input)
        {
        case 1:
            std::cout << "Give the Password that has to be Encrypted: ";
            std::cin >> password;
            std::cout << "The Encrypted version: " << encryptionPassword(password) << std::endl;
            break;

        case 2:
            std::cout << "Give the Encrypted Password that has to be Decrypted: ";
            std::cin >> password;
            std::cout << "The Decrypted version: " << decryptionPassword(password) << std::endl;
            break;
        }

    std::cin.get();
    std::cin.get();
}