#ifndef CSV_READER_H
#define CSV_READER_H

#include <vector>
#include <fstream>

using namespace::std;

class CSV_Reader {
    ifstream file;
    vector<string> split(const string& str, char delim);
    bool openFile(string filePath);
public:
    CSV_Reader();
    vector<vector<string>> readCSV(string filePath);
};

#endif // CSV_READER_H
