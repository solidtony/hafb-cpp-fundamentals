#pragma once

#include <array>
#include <string>
#include "carton.h"

constexpr int kMaxArraySize = 20;

int ReadDataFormatFromFile(std::string fileName,
        std::array<Carton, kMaxArraySize>& cartons);
bool WriteDataToFile(std::string outFileName,
        const std::array<Carton, kMaxArraySize>& cartons,
        const int numberOfRecords);

