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
Wire Wire Line
	6950 4550 7700 4550
Wire Wire Line
	7600 4650 6950 4650
Wire Wire Line
	7500 4750 6950 4750
Wire Wire Line
	7400 4850 6950 4850
$Comp
L STM32:STM32H725VG U1
U 1 1 6254B91D
P 2650 4100
F 0 "U1" H 2650 4100 50  0000 C CNN
F 1 "STM32H725VG" H 2650 4000 50  0000 C CNN
F 2 "" H 2700 4100 50  0001 C CNN
F 3 "" H 2700 4100 50  0001 C CNN
	1    2650 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 1750 1950 1550
Wire Wire Line
	1950 1550 2050 1550
Wire Wire Line
	3350 1550 3350 1750
Wire Wire Line
	3250 1750 3250 1550
Connection ~ 3250 1550
Wire Wire Line
	3250 1550 3350 1550
Wire Wire Line
	3150 1750 3150 1550
Connection ~ 3150 1550
Wire Wire Line
	3150 1550 3250 1550
Wire Wire Line
	3050 1750 3050 1550
Connection ~ 3050 1550
Wire Wire Line
	3050 1550 3150 1550
Wire Wire Line
	2950 1750 2950 1550
Connection ~ 2950 1550
Wire Wire Line
	2950 1550 3050 1550
Wire Wire Line
	2850 1750 2850 1550
Connection ~ 2850 1550
Wire Wire Line
	2850 1550 2950 1550
Wire Wire Line
	2750 1750 2750 1550
Connection ~ 2750 1550
Wire Wire Line
	2750 1550 2850 1550
Wire Wire Line
	2650 1750 2650 1550
Connection ~ 2650 1550
Wire Wire Line
	2650 1550 2750 1550
Wire Wire Line
	2550 1750 2550 1550
Connection ~ 2550 1550
Wire Wire Line
	2550 1550 2650 1550
Wire Wire Line
	2450 1750 2450 1550
Connection ~ 2450 1550
Wire Wire Line
	2450 1550 2550 1550
Wire Wire Line
	2350 1750 2350 1550
Connection ~ 2350 1550
Wire Wire Line
	2350 1550 2450 1550
Wire Wire Line
	2250 1750 2250 1550
Connection ~ 2250 1550
Wire Wire Line
	2250 1550 2350 1550
Wire Wire Line
	2150 1750 2150 1550
Connection ~ 2150 1550
Wire Wire Line
	2150 1550 2250 1550
Wire Wire Line
	2050 1750 2050 1550
Connection ~ 2050 1550
Wire Wire Line
	2050 1550 2150 1550
Wire Wire Line
	2300 6400 2300 6500
Wire Wire Line
	2300 6500 2400 6500
Wire Wire Line
	3000 6500 3000 6400
Wire Wire Line
	2900 6400 2900 6500
Connection ~ 2900 6500
Wire Wire Line
	2900 6500 3000 6500
Wire Wire Line
	2800 6400 2800 6500
Connection ~ 2800 6500
Wire Wire Line
	2800 6500 2900 6500
Wire Wire Line
	2700 6400 2700 6500
Connection ~ 2700 6500
Wire Wire Line
	2700 6500 2800 6500
Wire Wire Line
	2600 6400 2600 6500
Connection ~ 2600 6500
Wire Wire Line
	2500 6400 2500 6500
Connection ~ 2500 6500
Wire Wire Line
	2500 6500 2600 6500
Wire Wire Line
	2400 6400 2400 6500
Connection ~ 2400 6500
Wire Wire Line
	2400 6500 2500 6500
Wire Wire Line
	2600 6500 2650 6500
$Comp
L power:GND #PWR01
U 1 1 62593D20
P 2650 6600
F 0 "#PWR01" H 2650 6350 50  0001 C CNN
F 1 "GND" H 2655 6427 50  0000 C CNN
F 2 "" H 2650 6600 50  0001 C CNN
F 3 "" H 2650 6600 50  0001 C CNN
	1    2650 6600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 6600 2650 6500
Connection ~ 2650 6500
Wire Wire Line
	2650 6500 2700 6500
Wire Wire Line
	3600 4350 4800 4350
Wire Wire Line
	4800 4450 3600 4450
Wire Wire Line
	3600 4550 4800 4550
Wire Wire Line
	4800 4650 3600 4650
Wire Wire Line
	4800 4750 3600 4750
Wire Wire Line
	3600 4850 4800 4850
Wire Wire Line
	4800 4950 3600 4950
Wire Wire Line
	3600 2750 7700 2750
Wire Wire Line
	7700 2750 7700 4550
Wire Wire Line
	7600 2850 3600 2850
Wire Wire Line
	7600 2850 7600 4650
Wire Wire Line
	3600 2950 7500 2950
Wire Wire Line
	7500 2950 7500 4750
Wire Wire Line
	7400 3050 3600 3050
Wire Wire Line
	7400 3050 7400 4850
$Comp
L 7SEG:F5463BH-Display_Character U2
U 1 1 6254892E
P 5900 4700
F 0 "U2" H 5875 5275 50  0000 C CIN
F 1 "F5463BH-Display_Character" H 5875 5184 50  0000 C CNN
F 2 "Display_7Segment:F5463BH" H 6000 5550 50  0001 C CNN
F 3 "" H 6000 5550 50  0001 C CNN
	1    5900 4700
	1    0    0    -1  
$EndComp
$Comp
L Device:C C1
U 1 1 62589F50
P 950 3950
F 0 "C1" H 1065 3996 50  0000 L CNN
F 1 "100N" H 1065 3905 50  0000 L CNN
F 2 "" H 988 3800 50  0001 C CNN
F 3 "~" H 950 3950 50  0001 C CNN
	1    950  3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 1550 950  1550
Wire Wire Line
	950  1550 950  3800
Connection ~ 1950 1550
Wire Wire Line
	950  4100 950  6500
Wire Wire Line
	950  6500 2300 6500
Connection ~ 2300 6500
$Comp
L power:GND #PWR02
U 1 1 625911F3
P 3900 6250
F 0 "#PWR02" H 3900 6000 50  0001 C CNN
F 1 "GND" H 3905 6077 50  0000 C CNN
F 2 "" H 3900 6250 50  0001 C CNN
F 3 "" H 3900 6250 50  0001 C CNN
	1    3900 6250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 6050 3900 6050
Wire Wire Line
	3900 6050 3900 6250
$Comp
L STM32:STlinkv2 U3
U 1 1 62598DBE
P 6150 2050
F 0 "U3" H 6378 2101 50  0000 L CNN
F 1 "STlinkv2" H 6378 2010 50  0000 L CNN
F 2 "" H 6150 2050 50  0001 C CNN
F 3 "" H 6150 2050 50  0001 C CNN
	1    6150 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 1900 5000 1900
Wire Wire Line
	5000 1900 5000 1550
Wire Wire Line
	5000 1550 3350 1550
Connection ~ 3350 1550
$Comp
L power:GND #PWR03
U 1 1 6259D8D6
P 5000 2000
F 0 "#PWR03" H 5000 1750 50  0001 C CNN
F 1 "GND" H 5005 1827 50  0000 C CNN
F 2 "" H 5000 2000 50  0001 C CNN
F 3 "" H 5000 2000 50  0001 C CNN
	1    5000 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 2000 5850 2000
Wire Wire Line
	5850 2200 5250 2200
Wire Wire Line
	5250 2200 5250 4150
Wire Wire Line
	5250 4150 3600 4150
Wire Wire Line
	5850 2300 4650 2300
Wire Wire Line
	4650 2300 4650 5950
Wire Wire Line
	4650 5950 3600 5950
Wire Wire Line
	5850 2100 5350 2100
Wire Wire Line
	5350 2100 5350 4050
Wire Wire Line
	5350 4050 3600 4050
$EndSCHEMATC
