/**
* Flash Memory operations
*/
//% weight=5 color=#002050 icon="\uf0a0"
namespace FlashMem {
	
	/**
	* Guarda un byte
	* @param name nom variable
	* @param valor (un byte)
	*/
	//% advanced=false weight=10
	//% blockId=setByte block="save %name %value"
	//% blockExternalInputs=2 weight=90 blockGap=8 shim=FlashMem::setByte
	export function setByte(name: string, value: number) {	
          FlashMem.fmsetByte(name, value);
   	}


	/**
	* Retorna un valor
	* @param name nom variable
	* @param valor de variable
	*/
	//% advanced=false weight=10
	//% blockId=getByte block="get %name"
	//% blockExternalInputs=1 weight=90 blockGap=8 shim=FlashMem::getByte
	export function getByte(name: string): number {
	  return FlashMem.fmgetByte(name);
	}
	
}



