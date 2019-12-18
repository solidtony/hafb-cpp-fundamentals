#include "carton_fileio.h"

#include <fstream>

int ReadDataFormatFromFile(std::string fileName,
    std::array<Carton, kMaxArraySize>& cartons)
    {
        std::ifstream inputFile(fileName);
        if (inputFile.fail())
        {
            std::cout << "Unable to read file.\n";
            return -1;
        }
        float length, width, height;
        int rec_num = 0;
        while(rec_num < kMaxArraySize && inputFile >> length)
        {
            inputFile >> width >> height;
            cartons[rec_num].SetMeasurements(length, width, height);
            ++rec_num;
        }
        inputFile.close();

        return rec_num;
    }

bool WriteDataToFile(std::string outFileName,
    const std::array<Carton, kMaxArraySize>& cartons,
    const int numberOfRecords)
{
    std::ofstream fileOut(outFileName);
    if (fileOut.fail()) { return false; }
    for (int index = 0; index < numberOfRecords; ++index)
    {
        cartons[index].WriteData(fileOut, ",");
    }

    return true;
}
