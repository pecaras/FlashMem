#include "pxt.h"
#include "MicroBitFile.h"
#include "MicroBitFileSystem.h"

using namespace pxt;

/**
* Flash Memory operations
*/
//% weight=5 color=#002050 icon="\uf0a0"
namespace FlashMem
{    
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
/**
* Guarda un valor
* @param name nom variable
* @param valor de variable
*/
//% advanced=true weight=10
//% blockId="setString" block="save string value"
void setString(ManagedString name, ManagedString value) {
    uBit.storage.put(name.toCharArray(), (uint8_t *)value.toCharArray(), value.length());
}

/**
* Guarda un byte
* @param name nom variable
* @param valor (un byte)
*/
//% advanced=true weight=10
//% blockId="setByte" block="save byte value"
void setByte(ManagedString name, int value) {
    uBit.storage.put(name.toCharArray(), (uint8_t *)&value, sizeof(int));
}

/**
* Retorna un valor
* @param name nom variable
* @param valor de variable
*/
//% advanced=true weight=10
//% blockId="getByte" block="get byte value"
int getByte(ManagedString name) {
    KeyValuePair* nomvalor = uBit.storage.get(name.toCharArray());
    int resultat;
    memcpy(&resultat, nomvalor->value, sizeof(int));
    return resultat;
}

}
