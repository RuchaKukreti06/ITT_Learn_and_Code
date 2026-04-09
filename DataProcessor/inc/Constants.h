#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <string>

const std::string OUTPUT_CSV_FILE = "output.csv";
const double INITIAL_VALUE = 0.0;
const double INITIAL_DOUBLE_VALUE = 0.0;
const double INITIAL_SQUARED_VALUE = 0.0;
const int FILTER_VALUE = 100;
const int RECORD_COUNT = 50;
const std::string CSV_HEADER = "ID,NAME,VALUE,DATE,DOUBLED_VALUE,SQUARED_VALUE";
const bool VALIDATE_DATA = true;
const bool TRANSFORM_DATA = true;
const char DATE_FORMAT[] = "%Y-%m-%d";
const char HOURS_FORMAT[] = "%H:%M:%S";
const char DATE_TIME_FORMAT[] = "%Y-%m-%d %H:%M:%S";
const int BATCH_SIZE = 100;
const int MIN_VALUE = 10;
const int MAX_VALUE = 1000;
const int DAYS_IN_YEAR = 365;
const int HOURS_IN_DAY = 24;
const int SECONDS_IN_HOUR = 3600;
const int DOUBLING_FACTOR = 2;

#endif