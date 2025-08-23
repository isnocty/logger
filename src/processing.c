#include "../include/processing.h"

void write_log(const char *filepath, const char *message, const enum Log_Type level)
{
    FILE *file = fopen(filepath, "a");

    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    switch(level) {
        case LOG_Success: {
            fprintf(file, "[SUCCESS] 🟢 %s\n", message);
        } break;
        case LOG_Warning: {
            fprintf(file, "[WARNING] 🟡 %s\n", message);
        } break;
        case LOG_Error: {
            fprintf(file, "[ERROR] 🔴 %s\n", message);
        } break;
        case LOG_Fatal: {
            fprintf(file, "[FATAL] 🔴 %s\n", message);
        } break;
        case LOG_Failed: {
            fprintf(file, "[FAILED] 🔴 %s\n", message);
        } break;
        default: {
            fprintf(file, "Incorrect [LogType] (%d)\n", level);
        } break;
    }

    fclose(file);
}
