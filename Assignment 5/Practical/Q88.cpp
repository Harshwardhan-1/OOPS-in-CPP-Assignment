//Q88.Implement a program that reads a configuration file and uses its settings to control program behavior.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int width, height;
    bool fullscreen;
    string line;
    ifstream configFile("config.txt");
    if (configFile.is_open()) {
        while (getline(configFile, line)) {
            if (line.find("width=") == 0)
                width = stoi(line.substr(6));
            if (line.find("height=") == 0)
                height = stoi(line.substr(7));
            if (line.find("fullscreen=") == 0)
                fullscreen = (line.substr(11) == "true");
        }
        configFile.close();
    } else {
        cout << "Unable to open config file." << endl;
        return 1;
    }
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Fullscreen: " << (fullscreen ? "Yes" : "No") << endl;
    return 0;
}
