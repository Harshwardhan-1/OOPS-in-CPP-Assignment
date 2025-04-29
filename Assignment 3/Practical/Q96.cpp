//Q96.Write a class Network with member function to simulate network packets transmission.
#include <iostream>
#include <vector>
using namespace std;
class Network {
private:
    vector<string> sentPackets;  
public:
    void sendPacket(string packetData) {
        sentPackets.push_back(packetData);  
        cout << "Packet sent: " << packetData << endl;
    }
    void receivePacket() {
        if (!sentPackets.empty()) {
            string packet = sentPackets.back();
            sentPackets.pop_back();  
            cout << "Packet received: " << packet << endl;
        } else {
            cout << "No packets to receive!" << endl;
        }
    }
};
int main() {
    Network net;
    net.sendPacket("Packet 1 data");
    net.sendPacket("Packet 2 data");
    net.sendPacket("Packet 3 data");
    net.receivePacket();
    net.receivePacket();
    net.receivePacket();
    net.receivePacket();  
    return 0;
}
