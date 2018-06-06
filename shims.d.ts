// Auto-generated. Do not edit.


    /**
     * Flash Memory operations
     */
    //% weight=5 color=#002050 icon="\uf0a0"
declare namespace FlashMem {

    /**
     * Guarda un valor
     * @param name nom variable
     * @param valor de variable
     */
    //% advanced=true weight=10
    //% blockId="setString" block="save string value" shim=FlashMem::setString
    function setString(name: string, value: string): void;

    /**
     * Guarda un byte
     * @param name nom variable
     * @param valor (un byte)
     */
    //% advanced=true weight=10
    //% blockId="setByte" block="save byte value" shim=FlashMem::fmsetByte
    function fmsetByte(name: string, value: number): void;

    /**
     * Retorna un valor
     * @param name nom variable
     * @param valor de variable
     */
    //% advanced=true weight=10
    //% blockId="getByte" block="get byte value" shim=FlashMem::fmgetByte
    function fmgetByte(name: string): number;
}

// Auto-generated. Do not edit. Really.
