//Q92.Write a program that uses polymorphism to create a plugin system for a software application.
#include <iostream>
using namespace std;
class Plugin {
public:
    virtual void execute() = 0;
    virtual ~Plugin() {}
};
class PluginA : public Plugin {
public:
    void execute() override {
        cout << "Plugin A is executing.\n";
    }
};
class PluginB : public Plugin {
public:
    void execute() override {
        cout << "Plugin B is executing.\n";
    }
};
class Application {
public:
    void runPlugins() {
        Plugin* plugins[] = { new PluginA(), new PluginB() };  // Create plugins
        for (auto plugin : plugins) {
            plugin->execute();  // Polymorphism in action
            delete plugin;  // Clean up after each plugin
        }
    }
};
int main() {
    Application app;
    app.runPlugins();  // Run all plugins
    return 0;
}
