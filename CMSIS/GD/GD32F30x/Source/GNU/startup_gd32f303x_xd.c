/*
 * (C) Copyright 2020
 * Zimplistic Private Limited
 * Sicris Rey Embay, sicris@zimplistic.com
 *
 */

#define WEAK __attribute__ ((weak))
#define WEAK_AV __attribute__ ((weak, section(".after_vectors")))
#define ALIAS(f) __attribute__ ((weak, alias (#f)))

extern void SystemInit(void);

#include "gd32f30x.h"

WEAK void IntDefaultHandler(void);
void _ResetInit(void);
/*
 * Core Exception Handlers
 */
void Reset_Handler(void);                          // Reset Handler
WEAK void NMI_Handler(void);                       // NMI Handler
WEAK void HardFault_Handler(void);                 // Hard Fault Handler
WEAK void MemManage_Handler(void);                 // MPU Fault Handler
WEAK void BusFault_Handler(void);                  // Bus Fault Handler
WEAK void UsageFault_Handler(void);                // Usage Fault Handler
WEAK void SVC_Handler(void);                       // SVCall Handler
WEAK void DebugMon_Handler(void);                  // Debug Monitor Handler
WEAK void PendSV_Handler(void);                    // PendSV Handler
WEAK void SysTick_Handler(void);                   // SysTick Handler
/*
 * Chip Specific
 * External interrupts handler
 */
WEAK void WWDGT_IRQHandler(void);                  // 16:Window Watchdog Timer
WEAK void LVD_IRQHandler(void);                    // 17:LVD through EXTI Line detect
WEAK void TAMPER_IRQHandler(void);                 // 18:Tamper through EXTI Line detect
WEAK void RTC_IRQHandler(void);                    // 19:RTC through EXTI Line
WEAK void FMC_IRQHandler(void);                    // 20:FMC
WEAK void RCU_CTC_IRQHandler(void);                // 21:RCU and CTC
WEAK void EXTI0_IRQHandler(void);                  // 22:EXTI Line 0
WEAK void EXTI1_IRQHandler(void);                  // 23:EXTI Line 1
WEAK void EXTI2_IRQHandler(void);                  // 24:EXTI Line 2
WEAK void EXTI3_IRQHandler(void);                  // 25:EXTI Line 3
WEAK void EXTI4_IRQHandler(void);                  // 26:EXTI Line 4
WEAK void DMA0_Channel0_IRQHandler(void);          // 27:DMA0 Channel0
WEAK void DMA0_Channel1_IRQHandler(void);          // 28:DMA0 Channel1
WEAK void DMA0_Channel2_IRQHandler(void);          // 29:DMA0 Channel2
WEAK void DMA0_Channel3_IRQHandler(void);          // 30:DMA0 Channel3
WEAK void DMA0_Channel4_IRQHandler(void);          // 31:DMA0 Channel4
WEAK void DMA0_Channel5_IRQHandler(void);          // 32:DMA0 Channel5
WEAK void DMA0_Channel6_IRQHandler(void);          // 33:DMA0 Channel6
WEAK void ADC0_1_IRQHandler(void);                 // 34:ADC0 and ADC1
WEAK void USBD_HP_CAN0_TX_IRQHandler(void);        // 35:USBD HP and CAN0 TX
WEAK void USBD_LP_CAN0_RX0_IRQHandler(void);       // 36:USBD LP and CAN0 RX0
WEAK void CAN0_RX1_IRQHandler(void);               // 37:CAN0 RX1
WEAK void CAN0_EWMC_IRQHandler(void);              // 38:CAN0 EWMC
WEAK void EXTI5_9_IRQHandler(void);                // 39:EXTI5 to EXTI9
WEAK void TIMER0_BRK_TIMER8_IRQHandler(void);      // 40:TIMER0 Break and TIMER8
WEAK void TIMER0_UP_TIMER9_IRQHandler(void);       // 41:TIMER0 Update and TIMER9
WEAK void TIMER0_TRG_CMT_TIMER10_IRQHandler(void); // 42:TIMER0 Trigger and Commutation and TIMER10
WEAK void TIMER0_Channel_IRQHandler(void);         // 43:TIMER0 Channel Capture Compare
WEAK void TIMER1_IRQHandler(void);                 // 44:TIMER1
WEAK void TIMER2_IRQHandler(void);                 // 45:TIMER2
WEAK void TIMER3_IRQHandler(void);                 // 46:TIMER3
WEAK void I2C0_EV_IRQHandler(void);                // 47:I2C0 Event
WEAK void I2C0_ER_IRQHandler(void);                // 48:I2C0 Error
WEAK void I2C1_EV_IRQHandler(void);                // 49:I2C1 Event
WEAK void I2C1_ER_IRQHandler(void);                // 50:I2C1 Error
WEAK void SPI0_IRQHandler(void);                   // 51:SPI0
WEAK void SPI1_IRQHandler(void);                   // 52:SPI1
WEAK void USART0_IRQHandler(void);                 // 53:USART0
WEAK void USART1_IRQHandler(void);                 // 54:USART1
WEAK void USART2_IRQHandler(void);                 // 55:USART2
WEAK void EXTI10_15_IRQHandler(void);              // 56:EXTI10 to EXTI15
WEAK void RTC_Alarm_IRQHandler(void);              // 57:RTC Alarm
WEAK void USBD_WKUP_IRQHandler(void);              // 58:USBD Wakeup
WEAK void TIMER7_BRK_TIMER11_IRQHandler(void);     // 59:TIMER7 Break and TIMER11
WEAK void TIMER7_UP_TIMER12_IRQHandler(void);      // 60:TIMER7 Update and TIMER12
WEAK void TIMER7_TRG_CMT_TIMER13_IRQHandler(void); // 61:TIMER7 Trigger and Commutation and TIMER13
WEAK void TIMER7_Channel_IRQHandler(void);         // 62:TIMER7 Channel Capture Compare
WEAK void ADC2_IRQHandler(void);                   // 63:ADC2
WEAK void EXMC_IRQHandler(void);                   // 64:EXMC
WEAK void SDIO_IRQHandler(void);                   // 65:SDIO
WEAK void TIMER4_IRQHandler(void);                 // 66:TIMER4
WEAK void SPI2_IRQHandler(void);                   // 67:SPI2
WEAK void UART3_IRQHandler(void);                  // 68:UART3
WEAK void UART4_IRQHandler(void);                  // 69:UART4
WEAK void TIMER5_IRQHandler(void);                 // 70:TIMER5
WEAK void TIMER6_IRQHandler(void);                 // 71:TIMER6
WEAK void DMA1_Channel0_IRQHandler(void);          // 72:DMA1 Channel0
WEAK void DMA1_Channel1_IRQHandler(void);          // 73:DMA1 Channel1
WEAK void DMA1_Channel2_IRQHandler(void);          // 74:DMA1 Channel2
WEAK void DMA1_Channel3_4_IRQHandler(void);        // 75:DMA1 Channel3 and Channel4

/*
 * Default IRQ Handler.
 * When user defines a handler, it will automatically
 * take precedence over these weak definitions
 */
void WWDGT_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LVD_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TAMPER_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RTC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FMC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RCU_CTC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI4_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel4_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA0_Channel6_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ADC0_1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USBD_HP_CAN0_TX_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USBD_LP_CAN0_RX0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CAN0_RX1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CAN0_EWMC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI5_9_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER0_BRK_TIMER8_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER0_UP_TIMER9_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER0_TRG_CMT_TIMER10_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER0_Channel_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void I2C0_EV_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void I2C0_ER_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void I2C1_EV_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void I2C1_ER_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SPI0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SPI1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USART0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USART1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USART2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTI10_15_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RTC_Alarm_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USBD_WKUP_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER7_BRK_TIMER11_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER7_UP_TIMER12_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER7_TRG_CMT_TIMER13_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER7_Channel_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ADC2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXMC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SDIO_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER4_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SPI2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void UART3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void UART4_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void TIMER6_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA1_Channel0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA1_Channel1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA1_Channel2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA1_Channel3_4_DriverIRQHandler(void) ALIAS(IntDefaultHandler);

/*
 * Application Entry Point
 */
extern int main(void);

/*
 * Stack Top. This is defined in linker script
 */
extern void _vStackTop(void);

/*
 * Vector Table
 */
extern void (* const g_pfnVectors[])(void);
extern void * __Vectors __attribute__ ((alias ("g_pfnVectors")));
__attribute__ ((used, section(".isr_vector")))

void (* const g_pfnVectors[])(void) = {
    // Core Level - CM4
    &_vStackTop,
    Reset_Handler,                    // Reset Handler
    NMI_Handler,                      // NMI Handler
    HardFault_Handler,                // Hard Fault Handler
    MemManage_Handler,                // MPU Fault Handler
    BusFault_Handler,                 // Bus Fault Handler
    UsageFault_Handler,               // Usage Fault Handler
    0,                                // Reserved
    0,                                // Reserved
    0,                                // Reserved
    0,                                // Reserved
    SVC_Handler,                      // SVCall Handler
    DebugMon_Handler,                 // Debug Monitor Handler
    0,                                // Reserved
    PendSV_Handler,                   // PendSV Handler
    SysTick_Handler,                  // SysTick Handler

	// Chip Level
    WWDGT_IRQHandler,                 // 16:Window Watchdog Timer
    LVD_IRQHandler,                   // 17:LVD through EXTI Line detect
    TAMPER_IRQHandler,                // 18:Tamper through EXTI Line detect
    RTC_IRQHandler,                   // 19:RTC through EXTI Line
    FMC_IRQHandler,                   // 20:FMC
    RCU_CTC_IRQHandler,               // 21:RCU and CTC
    EXTI0_IRQHandler,                 // 22:EXTI Line 0
    EXTI1_IRQHandler,                 // 23:EXTI Line 1
    EXTI2_IRQHandler,                 // 24:EXTI Line 2
    EXTI3_IRQHandler,                 // 25:EXTI Line 3
    EXTI4_IRQHandler,                 // 26:EXTI Line 4
    DMA0_Channel0_IRQHandler,         // 27:DMA0 Channel0
    DMA0_Channel1_IRQHandler,         // 28:DMA0 Channel1
    DMA0_Channel2_IRQHandler,         // 29:DMA0 Channel2
    DMA0_Channel3_IRQHandler,         // 30:DMA0 Channel3
    DMA0_Channel4_IRQHandler,         // 31:DMA0 Channel4
    DMA0_Channel5_IRQHandler,         // 32:DMA0 Channel5
    DMA0_Channel6_IRQHandler,         // 33:DMA0 Channel6
    ADC0_1_IRQHandler,                // 34:ADC0 and ADC1
    USBD_HP_CAN0_TX_IRQHandler,       // 35:USBD HP and CAN0 TX
    USBD_LP_CAN0_RX0_IRQHandler,      // 36:USBD LP and CAN0 RX0
    CAN0_RX1_IRQHandler,              // 37:CAN0 RX1
    CAN0_EWMC_IRQHandler,             // 38:CAN0 EWMC
    EXTI5_9_IRQHandler,               // 39:EXTI5 to EXTI9
    TIMER0_BRK_TIMER8_IRQHandler,     // 40:TIMER0 Break and TIMER8
    TIMER0_UP_TIMER9_IRQHandler,      // 41:TIMER0 Update and TIMER9
    TIMER0_TRG_CMT_TIMER10_IRQHandler,// 42:TIMER0 Trigger and Commutation and TIMER10
    TIMER0_Channel_IRQHandler,        // 43:TIMER0 Channel Capture Compare
    TIMER1_IRQHandler,                // 44:TIMER1
    TIMER2_IRQHandler,                // 45:TIMER2
    TIMER3_IRQHandler,                // 46:TIMER3
    I2C0_EV_IRQHandler,               // 47:I2C0 Event
    I2C0_ER_IRQHandler,               // 48:I2C0 Error
    I2C1_EV_IRQHandler,               // 49:I2C1 Event
    I2C1_ER_IRQHandler,               // 50:I2C1 Error
    SPI0_IRQHandler,                  // 51:SPI0
    SPI1_IRQHandler,                  // 52:SPI1
    USART0_IRQHandler,                // 53:USART0
    USART1_IRQHandler,                // 54:USART1
    USART2_IRQHandler,                // 55:USART2
    EXTI10_15_IRQHandler,             // 56:EXTI10 to EXTI15
    RTC_Alarm_IRQHandler,             // 57:RTC Alarm
    USBD_WKUP_IRQHandler,             // 58:USBD Wakeup
    TIMER7_BRK_TIMER11_IRQHandler,    // 59:TIMER7 Break and TIMER11
    TIMER7_UP_TIMER12_IRQHandler,     // 60:TIMER7 Update and TIMER12
    TIMER7_TRG_CMT_TIMER13_IRQHandler,// 61:TIMER7 Trigger and Commutation and TIMER13
    TIMER7_Channel_IRQHandler,        // 62:TIMER7 Channel Capture Compare
    ADC2_IRQHandler,                  // 63:ADC2
    EXMC_IRQHandler,                  // 64:EXMC
    SDIO_IRQHandler,                  // 65:SDIO
    TIMER4_IRQHandler,                // 66:TIMER4
    SPI2_IRQHandler,                  // 67:SPI2
    UART3_IRQHandler,                 // 68:UART3
    UART4_IRQHandler,                 // 69:UART4
    TIMER5_IRQHandler,                // 70:TIMER5
    TIMER6_IRQHandler,                // 71:TIMER6
    DMA1_Channel0_IRQHandler,         // 72:DMA1 Channel0
    DMA1_Channel1_IRQHandler,         // 73:DMA1 Channel1
    DMA1_Channel2_IRQHandler,         // 74:DMA1 Channel2
    DMA1_Channel3_4_IRQHandler       // 75:DMA1 Channel3 and Channel4
}; /* End of g_pfnVectors */

/*
 * Functions to carry out the initialization of RW and BSS data sections.
 */
__attribute__ ((section(".after_vectors.init_data")))
void data_init(unsigned int romstart, unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int *pulSrc = (unsigned int*) romstart;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = *pulSrc++;
}

__attribute__ ((section(".after_vectors.init_bss")))
void bss_init(unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = 0;
}

/*
 * The following symbols are constructs generated by the linker
 */
extern unsigned int __vectors_start__;
extern unsigned int __vectors_end__;
extern unsigned int __relocated_vectors_start__;
extern unsigned int __section_table_start;
extern unsigned int __data_section_table_end;
extern unsigned int __bss_section_table;
extern unsigned int __bss_section_table_end;

/*
 * Reset Entry Point
 */
__attribute__ ((section(".after_vectors.reset")))
void Reset_Handler(void) {
	/* Disable interrupts */
	__asm volatile("cpsid i");

    /* Update Vector Table */
    __asm volatile (".equ VTOR, 0xE000ED08");
    __asm volatile ("ldr r0, =VTOR");
    __asm volatile ("ldr r1, =g_pfnVectors");
    __asm volatile ("str r1, [r0]");

    /* Initialize Stack Pointer */
    __asm volatile ("ldr r0, [r1]");
    __asm volatile ("msr msp, r0");
    __asm volatile ("msr psp, r0");

    _ResetInit();
}

__attribute__ ((section(".after_vectors.init_crt0")))
void _ResetInit(void)
{
    unsigned int LoadAddr, ExeAddr, SectionLen;
    unsigned int *SectionTableAddr;

	/* Call CMSIS System Init Code */
	SystemInit();

	/*
	 * Initialize Data Section
	 */
	SectionTableAddr = &__section_table_start;
    while (SectionTableAddr < &__data_section_table_end) {
        LoadAddr = *SectionTableAddr++;
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        data_init(LoadAddr, ExeAddr, SectionLen);
    }

    /*
     * Initialize BSS section
     * Zero fill
     */
    SectionTableAddr = &__bss_section_table;
    while (SectionTableAddr < &__bss_section_table_end) {
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        bss_init(ExeAddr, SectionLen);
    }

    /*
     * NOTE1: C++ library initialization is skipped.
     * NOTE2: Global interrupt remains disabled.
     */

	main();
	/*
	 * main() shouldn't return
	 */
	while(1);
}


/*
 * Handler for unexpected interrupt or
 * a handler is not present in the application code
 */
WEAK_AV void IntDefaultHandler(void) {
	while(1);
}

/*
 * Default Core Exception Handlers
 * Override this by defining your own handler in your
 * application code
 */
WEAK_AV void NMI_Handler(void) {
	while(1);
}

WEAK_AV void HardFault_Handler(void) {
	while(1);
}

WEAK_AV void MemManage_Handler(void) {
	while(1);
}

WEAK_AV void BusFault_Handler(void) {
	while(1);
}

WEAK_AV void UsageFault_Handler(void) {
	while(1);
}

WEAK_AV void SVC_Handler(void) {
	while(1);
}

WEAK_AV void DebugMon_Handler(void) {
	while(1);
}

WEAK_AV void PendSV_Handler(void) {
	while(1);
}

WEAK_AV void SysTick_Handler(void) {
	while(1);
}

/*
 * Default application exception handlers.
 * Override this by defining your own handler routines.
 */
WEAK void WWDGT_IRQHandler(void) {
	WWDGT_DriverIRQHandler();
}

WEAK void LVD_IRQHandler(void) {
	LVD_DriverIRQHandler();
}

WEAK void TAMPER_IRQHandler(void) {
	TAMPER_DriverIRQHandler();
}

WEAK void RTC_IRQHandler(void) {
	RTC_DriverIRQHandler();
}

WEAK void FMC_IRQHandler(void){
	FMC_DriverIRQHandler();
}

WEAK void RCU_CTC_IRQHandler(void){
	RCU_CTC_DriverIRQHandler();
}

WEAK void EXTI0_IRQHandler(void) {
	EXTI0_DriverIRQHandler();
}

WEAK void EXTI1_IRQHandler(void) {
	EXTI1_DriverIRQHandler();
}

WEAK void EXTI2_IRQHandler(void) {
	EXTI2_DriverIRQHandler();
}

WEAK void EXTI3_IRQHandler(void) {
	EXTI3_DriverIRQHandler();
}

WEAK void EXTI4_IRQHandler(void) {
	EXTI4_DriverIRQHandler();
}

WEAK void DMA0_Channel0_IRQHandler(void) {
	DMA0_Channel0_DriverIRQHandler();
}

WEAK void DMA0_Channel1_IRQHandler(void) {
	DMA0_Channel1_DriverIRQHandler();
}

WEAK void DMA0_Channel2_IRQHandler(void) {
	DMA0_Channel2_DriverIRQHandler();
}

WEAK void DMA0_Channel3_IRQHandler(void) {
	DMA0_Channel3_DriverIRQHandler();
}

WEAK void DMA0_Channel4_IRQHandler(void) {
	DMA0_Channel4_DriverIRQHandler();
}

WEAK void DMA0_Channel5_IRQHandler(void) {
	DMA0_Channel5_DriverIRQHandler();
}

WEAK void DMA0_Channel6_IRQHandler(void) {
	DMA0_Channel6_DriverIRQHandler();
}

WEAK void ADC0_1_IRQHandler(void) {
	ADC0_1_DriverIRQHandler();
}

WEAK void USBD_HP_CAN0_TX_IRQHandler(void) {
	USBD_HP_CAN0_TX_DriverIRQHandler();
}

WEAK void USBD_LP_CAN0_RX0_IRQHandler(void) {
	USBD_LP_CAN0_RX0_DriverIRQHandler();
}

WEAK void CAN0_RX1_IRQHandler(void) {
	CAN0_RX1_DriverIRQHandler();
}

WEAK void CAN0_EWMC_IRQHandler(void) {
	CAN0_EWMC_DriverIRQHandler();
}

WEAK void EXTI5_9_IRQHandler(void) {
	EXTI5_9_DriverIRQHandler();
}

WEAK void TIMER0_BRK_TIMER8_IRQHandler(void) {
    TIMER0_BRK_TIMER8_DriverIRQHandler();
}

WEAK void TIMER0_UP_TIMER9_IRQHandler(void) {
    TIMER0_UP_TIMER9_DriverIRQHandler();
}

WEAK void TIMER0_TRG_CMT_TIMER10_IRQHandler(void) {
    TIMER0_TRG_CMT_TIMER10_DriverIRQHandler();
}

WEAK void TIMER0_Channel_IRQHandler(void) {
	TIMER0_Channel_DriverIRQHandler();
}

WEAK void TIMER1_IRQHandler(void) {
	TIMER1_DriverIRQHandler();
}

WEAK void TIMER2_IRQHandler(void) {
	TIMER2_DriverIRQHandler();
}

WEAK void TIMER3_IRQHandler(void) {
	TIMER3_DriverIRQHandler();
}

WEAK void I2C0_EV_IRQHandler(void) {
	I2C0_EV_DriverIRQHandler();
}

WEAK void I2C0_ER_IRQHandler(void) {
	I2C0_ER_DriverIRQHandler();
}

WEAK void I2C1_EV_IRQHandler(void) {
	I2C1_EV_DriverIRQHandler();
}

WEAK void I2C1_ER_IRQHandler(void) {
	I2C1_ER_DriverIRQHandler();
}

WEAK void SPI0_IRQHandler(void) {
	SPI0_DriverIRQHandler();
}

WEAK void SPI1_IRQHandler(void) {
	SPI1_DriverIRQHandler();
}

WEAK void USART0_IRQHandler(void) {
	USART0_DriverIRQHandler();
}

WEAK void USART1_IRQHandler(void) {
	USART1_DriverIRQHandler();
}

WEAK void USART2_IRQHandler(void) {
	USART2_DriverIRQHandler();
}

WEAK void EXTI10_15_IRQHandler(void) {
	EXTI10_15_DriverIRQHandler();
}

WEAK void RTC_Alarm_IRQHandler(void) {
	RTC_Alarm_DriverIRQHandler();
}

WEAK void USBD_WKUP_IRQHandler(void) {
	USBD_WKUP_DriverIRQHandler();
}

WEAK void TIMER7_BRK_TIMER11_IRQHandler(void) {
    TIMER7_BRK_TIMER11_DriverIRQHandler();
}

WEAK void TIMER7_UP_TIMER12_IRQHandler(void) {
    TIMER7_UP_TIMER12_DriverIRQHandler();
}

WEAK void TIMER7_TRG_CMT_TIMER13_IRQHandler(void) {
    TIMER7_TRG_CMT_TIMER13_DriverIRQHandler();
}

WEAK void TIMER7_Channel_IRQHandler(void) {
	TIMER7_Channel_DriverIRQHandler();
}

WEAK void ADC2_IRQHandler(void) {
	ADC2_DriverIRQHandler();
}

WEAK void EXMC_IRQHandler(void) {
	EXMC_DriverIRQHandler();
}

WEAK void SDIO_IRQHandler(void) {
	SDIO_DriverIRQHandler();
}

WEAK void TIMER4_IRQHandler(void) {
	TIMER4_DriverIRQHandler();
}

WEAK void SPI2_IRQHandler(void) {
	SPI2_DriverIRQHandler();
}

WEAK void UART3_IRQHandler(void) {
	UART3_DriverIRQHandler();
}

WEAK void UART4_IRQHandler(void) {
	UART4_DriverIRQHandler();
}

WEAK void TIMER5_IRQHandler(void) {
	TIMER5_DriverIRQHandler();
}

WEAK void TIMER6_IRQHandler(void) {
	TIMER6_DriverIRQHandler();
}

WEAK void DMA1_Channel0_IRQHandler(void) {
	DMA1_Channel0_DriverIRQHandler();
}

WEAK void DMA1_Channel1_IRQHandler(void) {
	DMA1_Channel1_DriverIRQHandler();
}

WEAK void DMA1_Channel2_IRQHandler(void) {
	DMA1_Channel2_DriverIRQHandler();
}

WEAK void DMA1_Channel3_4_IRQHandler(void) {
	DMA1_Channel3_4_DriverIRQHandler();
}
