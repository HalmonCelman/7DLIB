# 7DLIB
It's a library for 7 segment 4 digits display LED with common anode
It's completely free to commercial and non-commercial use, but you must give information that this library was written by KK


platform: ATTiny2313 (default for AVR) or STM32H725VGxx(default for STM32) 
	but all code is written to work on all platforms 

see schema ( in folder schemat_i_inne ) to all information of example usage of this library

How to use?
```
1. Create project or makefile with all files from library( DLED.c, DLED.h, DLED_config.h, lldrivers.c )
2. Configure DLED_SYS in DLED_config.h↓
	select platform on which you are:
	 	0-AVR 
	 	1-STM32
	 	2,3... - another platform ↓
	 	you must write by yourself low level drivers, see file low_level.txt to more information
	 
3. Configure all connections in dled_configure.h
	 
4. You must generate interval to use dled_int(), the best option is to generate 
   interval 200 times per second to 50Hz refreshing rate (mulitplexing)

    it's all! you can now modify what is on screen with dled_set() and other functions
    ( all functions are described in functions.txt )
```
How to use example?
```
1. Connect all same as in schematic 
2. Open project with example.
( if it's not opening properly you must do point 1 and 2 in "How to use?" and join main.c )*
3. Build and run on your MCU
   See if it's working.
```

Have fun with this library ;)

```
* - sometimes this operation need change in lldrivers.c, main.c and DLED.c, because directory to the DLED.h may change
It depends on how you add files to project.
``` 
