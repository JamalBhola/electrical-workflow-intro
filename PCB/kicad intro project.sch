EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Device:R_US R1
U 1 1 633F9393
P 2950 2600
F 0 "R1" V 2745 2600 50  0000 C CNN
F 1 "1K" V 2836 2600 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P1.90mm_Vertical" V 2837 2600 50  0001 C CNN
F 3 "~" H 2950 2600 50  0001 C CNN
	1    2950 2600
	0    -1   1    0   
$EndComp
$Comp
L Device:R_US R2
U 1 1 63414CFB
P 2100 2600
F 0 "R2" V 2305 2600 50  0000 C CNN
F 1 "288K" V 2214 2600 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P1.90mm_Vertical" V 2213 2600 50  0001 C CNN
F 3 "~" H 2100 2600 50  0001 C CNN
	1    2100 2600
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D1
U 1 1 6341CDD4
P 3250 2600
F 0 "D1" H 3243 2345 50  0000 C CNN
F 1 "LED" H 3243 2436 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm_Horizontal_O3.81mm_Z10.0mm" H 3243 2436 50  0001 C CNN
F 3 "~" H 3250 2600 50  0001 C CNN
	1    3250 2600
	-1   0    0    1   
$EndComp
Wire Wire Line
	3400 2600 3400 2900
Wire Wire Line
	2300 2950 2350 2950
$Comp
L Switch:SW_SPST SW1
U 1 1 63412D65
P 2600 2600
F 0 "SW1" H 2600 2835 50  0000 C CNN
F 1 "SW_SPST" H 2600 2744 50  0000 C CNN
F 2 "TerminalBlock_RND:TerminalBlock_RND_205-00012_1x02_P5.00mm_Horizontal" H 2600 2600 50  0001 C CNN
F 3 "~" H 2600 2600 50  0001 C CNN
	1    2600 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 2600 2300 2600
Wire Wire Line
	2300 2600 2300 2950
Wire Wire Line
	2250 2600 2300 2600
Connection ~ 2300 2600
Wire Wire Line
	3400 2900 1650 2900
Wire Wire Line
	1650 2900 1650 3450
Wire Wire Line
	1650 3450 1950 3450
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 633FBD2E
P 3050 3450
F 0 "A1" V 3004 2407 50  0000 R CNN
F 1 "Arduino_Nano_v3.x" V 3095 2407 50  0000 R CNN
F 2 "Module:Arduino_Nano" H 3050 3450 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 3050 3450 50  0001 C CNN
	1    3050 3450
	0    1    1    0   
$EndComp
Wire Wire Line
	1950 3450 2050 3450
Connection ~ 1950 3450
$Comp
L power:VCC #PWR0101
U 1 1 6340C114
P 4350 3350
F 0 "#PWR0101" H 4350 3200 50  0001 C CNN
F 1 "VCC" H 4367 3523 50  0000 C CNN
F 2 "" H 4350 3350 50  0001 C CNN
F 3 "" H 4350 3350 50  0001 C CNN
	1    4350 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 3350 4050 3350
Wire Wire Line
	1950 2600 1950 3450
$EndSCHEMATC
