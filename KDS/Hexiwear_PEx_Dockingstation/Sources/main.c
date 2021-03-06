/* ###################################################################
**     Filename    : main.c
**     Project     : Hexiwear_PEx_Dockingstation
**     Processor   : MK64FN1M0VDC12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-11-29, 10:52, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Pins1.h"
#include "WAIT1.h"
#include "RGBR.h"
#include "LEDpin1.h"
#include "BitIoLdd1.h"
#include "RGBG.h"
#include "LEDpin2.h"
#include "BitIoLdd2.h"
#include "RGBB.h"
#include "LEDpin3.h"
#include "BitIoLdd3.h"
#include "UTIL1.h"
#include "MCUC1.h"
#include "CS1.h"
#include "CLS1.h"
#include "BLEUart.h"
#include "ASerialLdd2.h"
#include "Vibro.h"
#include "BitIoLdd12.h"
#include "GDisp1.h"
#include "LCD1.h"
#include "RESpin1.h"
#include "BitIoLdd13.h"
#include "D_Cpin1.h"
#include "BitIoLdd14.h"
#include "SCEpin1.h"
#include "BitIoLdd15.h"
#include "OLEDPower.h"
#include "BitIoLdd20.h"
#include "UI1.h"
#include "UIScreen.h"
#include "UIWindow.h"
#include "UIText.h"
#include "UIIcon.h"
#include "UIHeader.h"
#include "FDisp1.h"
#include "Helv08n.h"
#include "TRG1.h"
#include "Helv12n.h"
#include "I2C1.h"
#include "GI2C1.h"
#include "FX1.h"
#include "I2CSPY1.h"
#include "TMOUT1.h"
#include "TmDt1.h"
#include "RTC1.h"
#include "PTRC1.h"
#include "AmblInt.h"
#include "ExtIntLdd4.h"
#include "GI2C0.h"
#include "I2C0.h"
#include "SDA1.h"
#include "BitIoLdd21.h"
#include "SCL1.h"
#include "BitIoLdd22.h"
#include "Vcc3V3B_EN.h"
#include "BitIoLdd23.h"
#include "SM1.h"
#include "TSL1.h"
#include "XF1.h"
#include "HF1.h"
#include "RTT1.h"
#include "FRTOS1.h"
#include "KIN1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "Application.h"

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  APP_Run();
#if 0
  for(;;) {
    WAIT1_Waitms(100);
    RGBR_On();
    WAIT1_Waitms(100);
    RGBR_Off();

    WAIT1_Waitms(100);
    RGBG_On();
    WAIT1_Waitms(100);
    RGBG_Off();

    WAIT1_Waitms(100);
    RGBB_On();
    WAIT1_Waitms(100);
    RGBB_Off();
  }
#else
  for(;;){}
#endif
  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
