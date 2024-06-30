#include <fstream>
#include <iomanip>
#include <iostream>


int main() {
    char combo[10];
    std::cin >> std::setw(10) >> combo;// excess spaces not used also gets left for next inputs

    // only a maximum of 9 chars, last one is null terminator (whitespaces ends cin)
    // the extra characters are left for the next input (watch out for those)
    std::cout << combo << '\n';

    std::cin.get(combo, 11);// whitespace is now accepted (use getline to discard newlines)
    std::cout << combo << '\n';

    std::cin.ignore();// ignoring whitespace

    std::cin.getline(combo, 11);
    std::cout << combo << '\n';

    // file input and output
    std::ofstream outf{"Sample.txt"};
    outf << "Jump in the urinal and stand on your head.\n";
    outf << "I'm the one that's alive.\n";
    outf << "You're all dead.";
    outf.close();


    std::ifstream inf{"Sample.txt"};
    std::string strInput{};
    while (std::getline(inf, strInput))// reading everything
        std::cout << strInput << '\n';
    inf.close();

    return 0;
}
