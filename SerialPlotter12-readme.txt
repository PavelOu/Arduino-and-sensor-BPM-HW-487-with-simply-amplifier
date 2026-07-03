Program SerialPlotter - readme/help file
== = = = = = = = = = = = = = = = = = = = 

actual version 12
= = = = = = = = =
Date of last finalising : 2026-06-30

Preface :
=========
This readme/help is for program SerialPlotter - version 12 .

I have created this program for serial devices what can communicate 
via USB-RS232 like Arduino etc. 
coupled for example with BPM or ECG sensores like AD8232, HW-487 or HW-827 etc.

Producted data are in format .txt, .tab or .bmp files 
and they are only for your personal information purpose 
and they cannot be taken as medical results in any case.

I have  public this readme/help and next files include .exe file 
(packed in .zip with all folders etc.) 
about actual version of this program on Github.

Program was created in Delphi XE Starter 
and it is working under operation system Windows.

Program was created by Pavel Oupicky, rentier and home worker.

Program is distributed by author as freeware for end users .
   
Author takes no liability towards of any use of his program.

At 30.06. 2026 					Pavel Oupicky

Contact  on author : pavel.oupicky@seznam.cz

Default known problems in my programs  :
= = = = = = = = = = = = = = = = = = = = =
- this program is the compilation of many of previous programs created by author,
- so some functions of his programs are inserted but are in actual version not ready for use.
- Window OS can open many of windows, but when my programs are running, 
  it is not impossible use OS Windows close, mini- or maximalization of ones, 
  as the OS Windows and Deplphi XE Starter program cannot right open or closed them,
  so if my programs are running, you do not use them ones,
  or runned program and data can be losted.
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

I had inform about latest versions like for Modbus30 Ansi (renamed later on ModbusAnsi10)
etc. on Github and on MyPower.

The readme for Modbus RTU Reader and Writer - last version was ModbusRtuRW14 

was published at 4.4. 2024 by me, Pavel Oupicky

Short history of program SerialPlotter :
= = = = = = = = = = = = = = = = = = = = 

This my program was performed for many sensores of temperature, presure etc.
and for measuring of heart heals  with BPM or ECG mpdules.
There are two basic measuring of heart activity :
The most simply is BPM - measuring of Beats of heart Per Minute
and the measuring of this BMP is simply methode and my program was created 
mainly for measuring with this methode. 

Instead of I've called my program at first with ...ECG extension, 
as this program can measure this ECG with modules like AD8232, too, 
instead of you will need for this type measuring of heart activity 
at first special devices like AD8232 for example coupled with Arduino or Espressif modules again
and for them my program ignores the limits signals Lo- (data zero) and Lo+ (data over)
and you should these excepted data from tabs or graphs ranges eliminate self.

I've published on Github SerialPlotterEcg version 10 at cca 12.6.2020
and as I was in this attempt too quick, I am sorry
I public this actualised version 12 now and there are in it some important uprades.

30.6.2026 by PavelOu

= = = * * * = = = 


Basic description of program :
= = = = = = = = = = = = = = = = 

Communication:
= = = = = = = =
Program was created for devices what can communicate with PC OS protocol RS232,
so for communication between personal computers
with connectors RS232 or USB converters to RS232
and devices like microcomputers Arduinos or Espressif 
and their BPM or ECG modulesfor example.

Home (Main) page of program:
= = = = = = = = = = = = = = =
On the Main (Home) window are buttons for calling next functions of this program.

There is under main label checkbox .
If you will set it on, you can see the previous recorded serial data 
from your harddisc without a serial device is connected.

There is listbox with pre-defined files with parameters for your next measurig
and you can choose the one from this listbox.

There are in this file parameters and these must be pre-set in the regular form what includes
name of program and version etc. .
This right form is controlled and errors are reported.

Description of basic buttons on home page in upper line:
= = = = = = = = = = = = = = = = = = = = = = = = = = = = =

About
- basic description of program

Memo
- memory for notes saved on PC inthe root folder

Help
- reads this readme/help file and or similar txt files

Graphs
- list of predefined parameters  for graphs

Data serial
- read recorded data  measured by ECG or BPM serial devices
  saved to harddisc in Data folder in .txt format

Data osc
- read recorded data  measured and saved with the simply internal osciloscope

Hex counts
- some transfers between bits, bytes and hexbytes
  rest from my previous programs


Description of basic buttons on home page in bottom line:
= = = = = = = = = = = = = = = = = = = = = = = = = = = = = 

Parameters
- primary readed basic parameters for measurements, data, graph etc.

Com
- parameters for communication via com ports and their timings

Menu
- list of files from previous measurement for next transfer to tabs or graphs
  when there are a data from actual or previous  measuremet, it is possible to see them 
  or get and save them into tables or graphs

Measure
- start for measurement process

Osc
- measurement with simply osciloscope to about 50 Hz

Osc Par
- basic set of  communication parameters for osc andmeasure

Serial Test
- call and read data from serial devices
- basic test of communication between PC and serial devices like Arduino etc.

End
- end of program

Example of initial file (.ini)
= = = = = = = = = = = = = = = 

Purpose: 
- when program is starting, it call this .ini file at first

SerialPlotter/12/Ini
Initial file for program SerialPlotterEcg10
30.06.2026/17:54:11
User: free
Path:Par
File:Bpm-Arduino-Nano+HW-Com3-9600-example.par
end


Parameters for tests and measurement (.par file):
= = = = = = = = = = = = = = = = = = = = = = = = =
Short description:
- basic and driver parameters must be set before the programm will started
- basic parameters must be set in file with extension .par in Par folder
- driver (port - com) parameters must be set in file with extension .com in Com folder
- parameters for graphs are in the file with extension .grp in  Grp folder
- help  file name for program must be set in file with extension .txt  in the Help folder
- task parameters are set direct in .par file

Example of .par file
= = = = = = = = = = =
SerialPlotter12/params
Measurement BPM with Arduino Nano and sensor HW-487
Example of some basic parameters
Date:2026-06-30*12:22
Device:Arduino-Nano-BPM-HW,USB-RS232
Protocol:BPM/Arduino Nano+HW-487
Com:DataSerial-Arduino-Ploter-Com3-9600-example.com
Tasks:3
1/Patient-1-test,BPM-HW-487,a.u.,0,Measuring of Bpm
2/Patient-2-test,BPM-HW-487,a.u.,0,Mereni Bpm
3/Patient-3-test,BPM-HW-487,a.u.,0,Mereni Bpm
Measured interval:0
Data:Data
Help:Help\SerialPlotterecg11-help.txt
Graph-par:Grp\Grf-DataSerialPloter11-basic-en.grp
end

Notes:
Protocol:BPM (in lower case bpm) will set as basic parameter in all new recorded data files

Data:Data is name of folder for all saved data include tabs and graphs

Measured interval:0 
 - is the rest from my previos programs and here is set to zero already 

Example of file for com port (.com file):
= = = = = = = = = = = = = = = = = = = = = 
DataSerial/10/com
Parameters for communication with Arduinos and Esp via port Com
04.06.2026*13:47:45
Port:Com,3,9600,8,1,0
Timing:Timer=10,Sleep=10,Wait=300,Timeout=100
end

Note:
- Port parameters must pass to internal set given by OS Windows (in Administrator com devices)!!
- this example : Com3, baud rate 9600, 8 bits, 1 stop bit, no parity bit
- Timing : it defines internal set parameters for communication between PC and serial devices

Example of commands for tasks in .par file:
= = = = = = = = = = = = = = = = = = = = = =

Tasks:3 = number of tasks
1/Patient-1-test,BPM-HW-487,a.u.,0,Measuring of  Bpm
  Patient-1-test, = name of first patient tested
  BPM-HW-487, = name of used methode and device
  a.u., = arbitrary unit for graphs
  0, = nr of decimal points in numbers = all zero for BPM etc.
  Measuring of Bpm = note for measuring etc.
2/Patient-2-test,BPM-HW-487,a.u.,0,Mereni Bpm (the same in my cz language)
3/Patient-3-test,BPM-HW-487,a.u.,0,Mereni Bpm

Example of file for graphs (.grp file):
= = = = = = = = = = = = = = = = = = = = = 

SerialPlotter12/parameters/graphs
Graph:SerialPlotter12 - test
10.6.2026/21:25:21
0*1*5*min*Axe of time for graph
0*1*5*2*min*Axe of time for measuring
0*50*250*a.u.*Axe of intensity for graph
0*50*250*a.u.*Axe of intensity for measuring - basic
0*10*50*a.u.*Axe of intensity for measuring - user
1*1*.point for data on x and y
1*0*rastr x and rastr y , 0 = no rastr
Color of line*type of line*width of line from 0 to 8 works
clBlue*psSolid*3
clGreen*psSolid*2
clRed*psSolid*1
clBlack*psDot*0
clLima*psDash*2
clFuchsia*psDashDot*1
clAqua*psDashDotDot*2
clPurple*psSolid*0
end

Basic RS232 commands:
= = = = = = = = = = =
This commans are readable in program SerialPlotter version 12 .
Command	Answer
- - - - - - - -
A	*A,400,#,CRLF   number is readed analog data example
B	*B,399,#,CRLF	Cr is carriage return, LF is Line Feed
C	*,401,#,CRLF	CRLF are marks from RS232 protocol
D	398CRLF		simply data for Arduino IDE plotter for example	
E20	*P,20,400,500,100,#,CRLF	returned all parameters	
	20, data time step in mikroseconds
	400, off-line readed data with osciloscope
	500, max - " -
	100, offset for readed data (usually zero)
F	= read all transfer detail comments from Arduino (for tests)
G	= test of yellow LED diode installed by Arduino (optionally)
H	= test of red RED diode installed by Arduino (optionally)
I	= return the slave number of attached  device
J	= test of green LED diode installed by Arduino (optionally)
K1	*K,1,#,CRLF example 1 is slave number in the ESP-NOW master-slaves system
(K1	*K,0,#,CRLF example zero answer inform that this slave number 1 is off)
L300	*P,20,300,500,100,#,CRLF off-line readed data with osciloscope
M	*M,20,300,6000,100,#,CRLF off-line read data to internal memory, 6000 is estimated time	
N	*N,20,300,6000,100,300 times data,#,CRLF  read data from internal device memory
O10	*P,20,300,500,10,#,CRLF change in offset for data
P	*P,20,300,500,10,#,CRLF read parameters
Q	= stop of reading transfer details after all commands (for ESP-NOW debuging)
R	*R,20,300,xxx,10,#,CRLF xxx... is time of previous data measuring in microseconds
S	*S,20,300,time,10,#,CRLF stop of reading data in cycle

Note:
After commands B,C and D are data sended in cycle till S command is received

All this commands can product Arduino with sensores
with my sketch BPM_senzor_HW_487_en_4.ino

Simply manual how to use SerialPlotterEcg
= = = = = = = = = = = = = = = = = = = = =

Main(home) window
- - - - - - - - -
- after main(home window is on and OK, push Osc Button
- Com window will be shown

Com window
- - - - - -
- push Open button
- if handle of predefined com port will set on, push Purge button and purge this comm port
- choose Osc Par button and Osc Par window will shown

Osc Par window
- - - - - - - -
- choose Q command from Call combobox an push Call button
- for example choose G Y Led from Call combobox and push Call button
- if answer will be OK and yellow Led will light for 1 sec, you can continue with next parameters
- choose your input device from device combobox
- choose K command from Params combobox
- push Set button and wait  for answer in answer or result fields
- when this answer will repeat your slave device number, this one is on-line
- push Read Par button to read pre-set parameters for Osc and Measure windows
- push Data button to read data from your device via command A to be sure your device is on 

Measure window
- - - - - - - -
- choose your task from listbox with tasks
- choose Plotter type from combobox type A or B (more quick of data reading)
- cross Record checkbox, New file button will be wisible
- occasionally write note of you to Note field
- press New file button to set the header to this new file what will be used for next data registration
- press Graph par button to see pre-set of graphical parameters for Graph window
  (but do not change any parameter - it is not tested yet)
- press Graph and  Graph window will be shown

Grapf window
- - - - - - -
- set in Radiobutton Time axe for the time graph axe shift 
  after this time will be on the end of time range
- see and follow your measuring data, then press Stop button
- there are buttons Test or Set data in more suitable Y axe range
  for next measuring
- after all measuring ends, press Task button
- confirm if you want to save your data or on your hard disc
  or into databox for next analysation in tabs or graps.
- press Menu button nd Menu window will shown

= = = = End of Help file = = = =
