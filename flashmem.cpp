#include "pxt.h"
#include "MicroBitFile.h"
#include "MicroBitFileSystem.h"

using namespace pxt;

/**
* Flash Memory operations
*/
//% weight=5 color=#002050 icon="\uf0a0"
namespace flashmem
{    
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
/**
* Guarda un byte
* @param name nom variable
* @param valor (un byte)
*/
//% advanced=true weight=10
//% blockId=fmsetByte block="save name|name %name|= %value"
void fmsetByte(StringData* name, int value) {
    ManagedString n(name);
    uBit.storage.put(n.toCharArray(), (uint8_t *)&value, sizeof(int));
}

/**
* Retorna un valor
* @param name nom variable
* @param valor de variable
*/
//% advanced=true weight=10
//% blockId=fmgetByte block="get %name"
int fmgetByte(StringData* name) {
    ManagedString n(name);
    KeyValuePair* nomvalor = uBit.storage.get(n.toCharArray());
    int resultat;
    memcpy(&resultat, nomvalor->value, sizeof(int));
    return resultat;
}

}
