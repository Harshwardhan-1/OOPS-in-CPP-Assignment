//Q95.Create a class fileCompressor with member functionto compress and decompress files.
#include <iostream>
#include <fstream>
using namespace std;
class FileCompressor {
public:
    void compress(string inputFile, string compressedFile) {
        ifstream in(inputFile, ios::binary);  
        ofstream out(compressedFile, ios::binary);  
        out << in.rdbuf();  
        cout << "File compressed!" << endl;
    }
    void decompress(string compressedFile, string outputFile) {
        ifstream in(compressedFile, ios::binary);  
        ofstream out(outputFile, ios::binary);  
        out << in.rdbuf();  

        cout << "File decompressed!" << endl;
    }
};
int main() {
    FileCompressor fc;
    fc.compress("example.txt", "compressed.txt");
    fc.decompress("compressed.txt", "decompressed.txt");
    
    return 0;
}
