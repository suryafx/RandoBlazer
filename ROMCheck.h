#ifndef __ROMCHECK_H__
#define __ROMCHECK_H__

#include <fstream>


typedef enum {
    UNKNOWN = 0,
    UNHEADERED,
    HEADERED
} ROMStatus;

ROMStatus CheckOriginalROM(std::fstream &ROMFile);


#endif // __ROMCHECK_H__
