/*--------------------------------------------------------------------------



   FILE NAME   : C8051F200_e.h
   TARGET MCU  : C8051F206, 'F220, 'F221, 'F226, 'F230, 'F231 and F236.
   DESCRIPTION : Register/bit definitions for the C8051F2xx family.

   REVISION 2.0
     -- added SWCINT (0xad)

   REVISION 1.9
------------------------------------------------------------------------*/

/*  BYTE Registers  */
sfr P0       =  0x80;   /* PORT 0                                                  */
sfr SP       =  0x81;   /* STACK POINTER                                           */
sfr DPL      =  0x82;   /* DATA POINTER - LOW BYTE                                 */
sfr DPH      =  0x83;   /* DATA POINTER - HIGH BYTE                                */
sfr PCON     =  0x87;   /* POWER CONTROL                                           */
sfr TCON     =  0x88;   /* TIMER CONTROL                                           */
sfr TMOD     =  0x89;   /* TIMER MODE                                              */
sfr TL0      =  0x8A;   /* TIMER 0 - LOW BYTE                                      */
sfr TL1      =  0x8B;   /* TIMER 1 - LOW BYTE                                      */
sfr TH0      =  0x8C;   /* TIMER 0 - HIGH BYTE                                     */
sfr TH1      =  0x8D;   /* TIMER 1 - HIGH BYTE                                     */
sfr CKCON    =  0x8E;   /* CLOCK CONTROL                                           */
sfr PSCTL    =  0x8F;   /* PROGRAM STORE R/W CONTROL                               */
sfr P1       =  0x90;   /* PORT 1                                                  */
sfr SCON     =  0x98;   /* SERIAL PORT CONTROL                                     */
sfr SBUF     =  0x99;   /* SERIAL PORT BUFFER                                      */
sfr SPI0CFG  =  0x9A;   /* SERIAL PERIPHERAL INTERFACE 0 CONFIGURATION             */
sfr SPI0DAT  =  0x9B;   /* SERIAL PERIPHERAL INTERFACE 0 DATA                      */
sfr SPI0CKR  =  0x9D;   /* SERIAL PERIPHERAL INTERFACE 0 CLOCK RATE CONTROL        */
sfr CPT0CN   =  0x9E;   /* COMPARATOR 0 CONTROL                                    */
sfr CPT1CN   =  0x9F;   /* COMPARATOR 1 CONTROL                                    */
sfr P2       =  0xA0;   /* PORT 2                                                  */
sfr PRT0CF   =  0xA4;   /* PORT 0 OUTPUT MODE CONFIGURATION                        */
sfr PRT1CF   =  0xA5;   /* PORT 1 OUTPUT MODE CONFIGURATION                        */
sfr PRT2CF   =  0xA6;   /* PORT 2 OUTPUT MODE CONFIGURATION                        */
sfr PRT3CF   =  0xA7;   /* PORT 3 OUTPUT MODE CONFIGURATION                        */
sfr IE       =  0xA8;   /* INTERRUPT ENABLE                                        */
sfr SWCINT   =  0xAD;   /* SOFTWARE-CONTROLLED INTERRUPT FLAGS                     */
sfr PRT1IF   =  0xAD;   /* SOFTWARE-CONTROLLED INTERRUPT FLAGS (LEGACY NAME)       */
sfr EMI0CN   =  0xAF;   /* EXTERNAL MEMORY INTERFACE CONTROL                       */
sfr P3       =  0xB0;   /* PORT 3                                                  */
sfr OSCXCN   =  0xB1;   /* EXTERNAL OSCILLATOR CONTROL                             */
sfr OSCICN   =  0xB2;   /* INTERNAL OSCILLATOR CONTROL                             */
sfr FLSCL    =  0xB6;   /* FLASH MEMORY TIMING PRESCALER                           */
sfr FLACL    =  0xB7;   /* FLASH ACESS LIMIT                                       */
sfr IP       =  0xB8;   /* INTERRUPT PRIORITY                                      */
sfr AMX0SL   =  0xBB;   /* ADC 0 MUX CHANNEL SELECTION                             */
sfr ADC0CF   =  0xBC;   /* ADC 0 CONFIGURATION                                     */
sfr ADC0H    =  0xBF;   /* ADC 0 DATA                                              */
sfr ADC0GTH  =  0xC5;   /* ADC 0 GREATER-THAN REGISTER                             */
sfr ADC0LTH  =  0xC7;   /* ADC 0 LESS-THAN REGISTER                                */
sfr T2CON    =  0xC8;   /* TIMER 2 CONTROL                                         */
sfr RCAP2L   =  0xCA;   /* TIMER 2 CAPTURE REGISTER - LOW BYTE                     */
sfr RCAP2H   =  0xCB;   /* TIMER 2 CAPTURE REGISTER - HIGH BYTE                    */
sfr TL2      =  0xCC;   /* TIMER 2 - LOW BYTE                                      */
sfr TH2      =  0xCD;   /* TIMER 2 - HIGH BYTE                                     */
sfr PSW      =  0xD0;   /* PROGRAM STATUS WORD                                     */
sfr REF0CN   =  0xD1;   /* VOLTAGE REFERENCE 0 CONTROL                             */
sfr ACC      =  0xE0;   /* ACCUMULATOR                                             */
sfr PRT0MX   =  0xE1;   /* PORT MUX CONFIGURATION REGISTER 0                       */
sfr PRT1MX   =  0xE2;   /* PORT MUX CONFIGURATION REGISTER 1                       */
sfr PRT2MX   =  0xE3;   /* PORT MUX CONFIGURATION REGISTER 2                       */
sfr EIE1     =  0xE6;   /* EXTERNAL INTERRUPT ENABLE 1                             */
sfr EIE2     =  0xE7;   /* EXTERNAL INTERRUPT ENABLE 2                             */
sfr ADC0CN   =  0xE8;   /* ADC 0 CONTROL                                           */
sfr RSTSRC   =  0xEF;   /* RESET SOURCE                                            */
sfr B        =  0xF0;   /* B REGISTER                                              */
sfr P0MODE   =  0xF1;   /* PORT 0 INPUT MODE CONFIGURATION                         */
sfr P1MODE   =  0xF2;   /* PORT 1 INPUT MODE CONFIGURATION                         */
sfr P2MODE   =  0xF3;   /* PORT 2 INPUT MODE CONFIGURATION                         */
sfr P3MODE   =  0xF4;   /* PORT 3 INPUT MODE CONFIGURATION                         */
sfr EIP1     =  0xF6;   /* EXTERNAL INTERRUPT PRIORITY REGISTER 1                  */
sfr EIP2     =  0xF7;   /* EXTERNAL INTERRUPT PRIORITY REGISTER 2                  */
sfr SPI0CN   =  0xF8;   /* SERIAL PERIPHERAL INTERFACE 0 CONTROL                   */
sfr WDTCN    =  0xFF;   /* WATCHDOG TIMER CONTROL                                  */
sfr SFRPAGE  = 0x84; 	/* SFR PAGE SELECT */


/*  BIT Registers  */

/*  TCON  0x88 */
sbit TF1   = TCON ^ 7;              /* TIMER 1 OVERFLOW FLAG      */
sbit TR1   = TCON ^ 6;              /* TIMER 1 ON/OFF CONTROL     */
sbit TF0   = TCON ^ 5;              /* TIMER 0 OVERFLOW FLAG      */
sbit TR0   = TCON ^ 4;              /* TIMER 0 ON/OFF CONTROL     */
sbit IE1   = TCON ^ 3;              /* EXT. INTERRUPT 1 EDGE FLAG */
sbit IT1   = TCON ^ 2;              /* EXT. INTERRUPT 1 TYPE      */
sbit IE0   = TCON ^ 1;              /* EXT. INTERRUPT 0 EDGE FLAG */
sbit IT0   = TCON ^ 0;              /* EXT. INTERRUPT 0 TYPE      */

/*  SCON  0x98 */
sbit SM0   = SCON ^ 7;              /* SERIAL MODE CONTROL BIT 0           */
sbit SM1   = SCON ^ 6;              /* SERIAL MODE CONTROL BIT 1           */
sbit SM2   = SCON ^ 5;              /* MULTIPROCESSOR COMMUNICATION ENABLE */
sbit REN   = SCON ^ 4;              /* RECEIVE ENABLE                      */
sbit TB8   = SCON ^ 3;              /* TRANSMIT BIT 8                      */
sbit RB8   = SCON ^ 2;              /* RECEIVE BIT 8                       */
sbit TI    = SCON ^ 1;              /* TRANSMIT INTERRUPT FLAG             */
sbit RI    = SCON ^ 0;              /* RECEIVE INTERRUPT FLAG              */

/*  IE  0xA8 */
sbit EA    = IE ^ 7;                /* GLOBAL INTERRUPT ENABLE      */
sbit ET2   = IE ^ 5;                /* TIMER 2 INTERRUPT ENABLE     */
sbit ES    = IE ^ 4;                /* SERIAL PORT INTERRUPT ENABLE */
sbit ET1   = IE ^ 3;                /* TIMER 1 INTERRUPT ENABLE     */
sbit EX1   = IE ^ 2;                /* EXTERNAL INTERRUPT 1 ENABLE  */
sbit ET0   = IE ^ 1;                /* TIMER 0 INTERRUPT ENABLE     */
sbit EX0   = IE ^ 0;                /* EXTERNAL INTERRUPT 0 ENABLE  */

/*  IP  0xB8 */
sbit PT2   = IP ^ 5;                /* TIMER 2 PRIORITY              */
sbit PS    = IP ^ 4;                /* SERIAL PORT PRIORITY          */
sbit PT1   = IP ^ 3;                /* TIMER 1 PRIORITY              */
sbit PX1   = IP ^ 2;                /* EXTERNAL INTERRUPT 1 PRIORITY */
sbit PT0   = IP ^ 1;                /* TIMER 0 PRIORITY              */
sbit PX0   = IP ^ 0;                /* EXTERNAL INTERRUPT 0 PRIORITY */

/*  T2CON  0xC8 */
sbit TF2   = T2CON ^ 7;             /* TIMER 2 OVERFLOW FLAG        */
sbit EXF2  = T2CON ^ 6;             /* EXTERNAL FLAG                */
sbit RCLK  = T2CON ^ 5;             /* RECEIVE CLOCK FLAG           */
sbit TCLK  = T2CON ^ 4;             /* TRANSMIT CLOCK FLAG          */
sbit EXEN2 = T2CON ^ 3;             /* TIMER 2 EXTERNAL ENABLE FLAG */
sbit TR2   = T2CON ^ 2;             /* TIMER 2 ON/OFF CONTROL       */
sbit CT2   = T2CON ^ 1;             /* TIMER OR COUNTER SELECT      */
sbit CPRL2 = T2CON ^ 0;             /* CAPTURE OR RELOAD SELECT     */

/*  PSW  */
sbit CY    = PSW ^ 7;               /* CARRY FLAG              */
sbit AC    = PSW ^ 6;               /* AUXILIARY CARRY FLAG    */
sbit F0    = PSW ^ 5;               /* USER FLAG 0             */
sbit RS1   = PSW ^ 4;               /* REGISTER BANK SELECT 1  */
sbit RS0   = PSW ^ 3;               /* REGISTER BANK SELECT 0  */
sbit OV    = PSW ^ 2;               /* OVERFLOW FLAG           */
sbit F1    = PSW ^ 1;               /* USER FLAG 1             */
sbit P     = PSW ^ 0;               /* ACCUMULATOR PARITY FLAG */

/* ADC0CN E8H */
sbit ADCEN    =   ADC0CN ^ 7;       /* ADC 0 ENABLE                              */
sbit ADCTM    =   ADC0CN ^ 6;       /* ADC 0 TRACK MODE                          */
sbit ADCINT   =   ADC0CN ^ 5;       /* ADC 0 CONVERISION COMPLETE INTERRUPT FLAG */
sbit ADBUSY   =   ADC0CN ^ 4;       /* ADC 0 BUSY FLAG                           */
sbit ADSTM1   =   ADC0CN ^ 3;       /* ADC 0 START OF CONVERSION MODE BIT 1      */
sbit ADSTM0   =   ADC0CN ^ 2;       /* ADC 0 START OF CONVERSION MODE BIT 0      */
sbit ADWINT   =   ADC0CN ^ 1;       /* ADC 0 WINDOW COMPARE INTERRUPT FLAG       */

/* SPI0CN F8H */
sbit SPIF     =   SPI0CN ^ 7;       /* SPI 0 INTERRUPT FLAG       */
sbit WCOL     =   SPI0CN ^ 6;       /* SPI 0 WRITE COLLISION FLAG */
sbit MODF     =   SPI0CN ^ 5;       /* SPI 0 MODE FAULT FLAG      */
sbit RXOVRN   =   SPI0CN ^ 4;       /* SPI 0 RX OVERRUN FLAG      */
sbit TXBSY    =   SPI0CN ^ 3;       /* SPI 0 TX BUSY FLAG         */
sbit SLVSEL   =   SPI0CN ^ 2;       /* SPI 0 SLAVE SELECT         */
sbit MSTEN    =   SPI0CN ^ 1;       /* SPI 0 MASTER ENABLE        */
sbit SPIEN    =   SPI0CN ^ 0;       /* SPI 0 SPI ENABLE           */

sbit P00 = P0^0;
sbit P01 = P0^1;
sbit P02 = P0^2;
sbit P03 = P0^3;
sbit P04 = P0^4;
sbit P05 = P0^5;
sbit P06 = P0^6;
sbit P07 = P0^7;

sbit P20 = P2^0;
sbit P21 = P2^1;
sbit P22 = P2^2;
sbit P23 = P2^3;
sbit P24 = P2^4;
sbit P25 = P2^5;
sbit P26 = P2^6;
sbit P27 = P2^7;

sbit P30 = P3^0;
sbit P31 = P3^1;
sbit P32 = P3^2;
sbit P33 = P3^3;
sbit P34 = P3^4;
sbit P35 = P3^5;
sbit P36 = P3^6;
sbit P37 = P3^7;


 