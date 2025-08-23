#ifndef PROCESSING_H
#define PROCESSING_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

enum Log_Type {
    LOG_Success = 0,
    LOG_Warning,
    LOG_Error,
    LOG_Fatal,
    LOG_Failed,
};

/*
    @brief: write log with any message to file

    @param: filepath - path to file
    @param: message - message to write in log file
    @param: level - level of awareness

    @return: write in file in exact format
*/
void write_log(const char *filepath, const char *message, const enum Log_Type level);

#endif // PROCESSING_H
