
#include <string>
#include <sstream>

int main() {
    std::string input_string;
    std::cout << "Nhap chuoi: ";
    std::getline(std::cin, input_string);
    std::stringstream ss(input_string);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    std::cout << "So tu trong chuoi la: " << count << std::endl;

    return 0;
}
