#include "utils.h"

void inline debug_out(const char *format, ...) {
    #ifdef DEBUG_LOGGING
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    #endif // DEBUG_LOGGING
}
