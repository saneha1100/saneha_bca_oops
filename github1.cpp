#include <iostream>

class box {
private:
    int length;
    int width;
public:
    void getDimensions();
    void showDimensions();
};

void box::getDimensions() {
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
}

void box::showDimensions() {
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
}

int main() {
    box myBox;
    myBox.getDimensions();
    myBox.showDimensions();

    return 0;
}
