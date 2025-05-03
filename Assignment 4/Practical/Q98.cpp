//Q98.Write a program that uses polymorphism to create a flexible and extensible GUI framework.
#include <iostream>
using namespace std;
class GUIComponent {
public:
    virtual void render() = 0;  
    virtual ~GUIComponent() {}  
};
class Button : public GUIComponent {
public:
    void render() override {
        cout << "Rendering a Button." << endl;
    }
};
class Label : public GUIComponent {
public:
    void render() override {
        cout << "Rendering a Label." << endl;
    }
};
class TextBox : public GUIComponent {
public:
    void render() override {
        cout << "Rendering a TextBox." << endl;
    }
};
int main() {
    GUIComponent* components[3];
    components[0] = new Button();
    components[1] = new Label();
    components[2] = new TextBox();
    cout << "GUI Framework Simulation:";
    for (int i = 0; i < 3; ++i) {
        components[i]->render();  
        delete components[i];     
    }
    return 0;
}
