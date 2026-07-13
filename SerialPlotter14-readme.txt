Program SerialPlotter - readme
== = = = = = = = = = = = = = = 

actual version 14
= = = = = = = = =
Date of last finalising : 2026-07-12

Upgrade :
=========
This uprade includes the separation of two functions of the previous program
SerialPlotter12 on two parts, on the part of plotter for BPM only 
and on the part of osciloscope, what I will reprogramm soon.
So I am working on the program SerialOsciloscope, too.
There are next commands more suiatable for osciloscope version.


Preface :
=========
This readme/help is for program SerialPlotter - version 14 .

I have created this program for serial devices what can communicate 
via USB-RS232 like Arduino etc. 
coupled with ECG or BPM sensores like AD9232, HW-487 or HW-827 etc.

Producted data are in format .txt, .tab or .bpm files 
and they are only for your personal information purpose 
and they cannot be taken as medical results in any case.

I have inform and public this readme/help and next files include .exe file 
(packed in .zip with all folders etc.) 
about actual version of this program on Github.

Program was created in Delphi XE Starter 
and it is working under operation system Windows.

Program was created by Pavel Oupicky, rentier and home worker.

Program is distributed by author as freeware for end users .
   
Author takes no liability towards of any use of his program.

At 10.07. 2026 					Pavel Oupicky

Contact  on author : pavel.oupicky@seznam.cz

Default known problems in my programs  :
= = = = = = = = = = = = = = = = = = = = =
- this program is the compilation of many of previous programs created by author,
- so some functions of his programs are inserted but are in actual version not ready for use.
- Window OS can open many of windows, but when my programs are running, 
  it is not impossible use OS Windows close, mini- or maximalization of ones, 
  as the OS Windows and Deplphi XE Starter program cannot right open or closed them,
  so if my programs are running, you do not use them ones,
  or runned program and data will be lost.
- Delphi XE Starter can product  graphs  format .bmp only about 2 MB 
  and you must change them then to another format self.

Short history of my programs :
= = = = = = = = = = = = = = = = 

I had created more programms for solar inverters and at first for three black boxes,
at first it was programm Modbus RTU Reader for grid-tie inverter SUN-1000G
(from GWL deliver)
at second  Modbus Ansi Reader-Controler for inverter/charger PS 3KVA
(from the PS1-5KVA series like predecestors of Axpert Max from Voltronic)
and at third ModbusRtuRW14 universal Reader and Writer for inverter/charger INVSOL01 
(from Green Cell series INVSOL01-04)like a MUST ones .

I had inform about actual versions like for Modbus30 Ansi (renamed later on ModbusAnsi10)
on Github and on MyPower.

The readme for Modbus RTU Reader and Writer - last version was ModbusRtuRW14 

was published at 4.4. 2024 by me, Pavel Oupicky

Short history of program SerialPlotter :
= = = = = = = = = = = = = = = = = = = = =

Heart heals terminology:

There are two basic measuring of heart activity :
1/The most simply is BPM - measuring of Beats of heart Per Minute
and the measuring of this BMP is simply methode and my program was created 
mainly for measuring with this methode. 

2/Instead of I've called my program ...ECG, as this program can measure this ECG, too, 
instead of you will need for this type measuring of heart activity 
at first special devices with AD8232 for example coupled with Arduino or Espressif modules again
and fot them my program ignores the limits signals (data zero or data over) Lo+ and Lo- 
and you should these exceptions from data, tabs or graphs ranges eliminate self.

I've published on Github SerialPlotterEcg version 10 at cca 12.6-2020
and as I was in this attempt too quick,  ... I am sorry
I public this actualised version 11 now and there are the important uprades.

!2.7.2026 by PavelOu

= = = * * * = = = 


