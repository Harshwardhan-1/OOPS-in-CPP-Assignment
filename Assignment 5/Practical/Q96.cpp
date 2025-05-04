//Q96.Write a program that reads and processes large data files using memory-mapped files.
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    HANDLE file = CreateFileA("largefile.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    HANDLE map = CreateFileMappingA(file, NULL, PAGE_READONLY, 0, 0, NULL);
    char* data = (char*)MapViewOfFile(map, FILE_MAP_READ, 0, 0, 0);
    DWORD size = GetFileSize(file, NULL);
    int count = 0;
    for (DWORD i = 0; i < size; i++) {
        if (data[i] == '\n') count++;
    }
    cout<<count<<endl;
    UnmapViewOfFile(data);
    CloseHandle(map);
    CloseHandle(file);
    return 0;
}
