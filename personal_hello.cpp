#include <iostream>
#include <string> // The string library is going to simplify string operations relative to character arrays

int main ()
{
    // Declare a string variable
    std::string first_name;

    // Ask the user a question
    std::cout << "What's your first name? ";

    // Get the answer and save the string to first_name
    // NOTE: cin "tokenizes" the data at white spaces, so only the first word in the
    // user input will be written to the variable first_name
    std::cin >> first_name;

    // Say a more personal hello
    std::cout << "Hello " << first_name << ", it's nice to meet you!" << std::endl;

    return 0;
}
