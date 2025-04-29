//Q97.Implement a class Cache with member function to store and retrieve cached data.
#include <iostream>
#include <string>
using namespace std;
class Cache {
private:
    string key;   
    string value; 
public:
    
    void storeData(string newKey, string newValue) {
        key = newKey;
        value = newValue;
        cout << "Data stored with key: " << key << endl;
    }
    string retrieveData(string requestedKey) {
        if (requestedKey == key) {
            return value; 
        }
        return "Key not found."; 
    }
};
int main() {
    Cache cache;
    cache.storeData("user1", "HARSHWARDHAN");
    cout << "Data for user1: " << cache.retrieveData("user1") << endl;
    cout << "Data for user2: " << cache.retrieveData("user2") << endl;
    return 0;
}
