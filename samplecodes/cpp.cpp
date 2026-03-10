// Groovy Nythera C++ Preview
#include <iostream>
#include <vector>
#include <string>

class ThemePreview {
public:
    std::string name;
    int version;
    ThemePreview(std::string n, int v) {
        name = n;
        version = v;
    }
    void showInfo() {
        std::cout << "Theme: " << name << std::endl;
        std::cout << "Version: " << version << std::endl;
    }
};
int main() {
      ThemePreview theme("Groovy Nythera", 1);
      std::vector<std::string> languages = {
        "C++", "Java", "Python"
    };
    theme.showInfo();
    for (auto lang : languages) {
        std::cout << "Highlighting: " << lang << std::endl;
    }

    return 0;
}