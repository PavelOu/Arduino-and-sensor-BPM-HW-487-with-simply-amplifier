Program SerialPlotterEcg10 - readme
== = = = = = = = = = = = = = = = = = 

Program SerialPlotterEcg - actual version 10
= = = = = = = = = = = = = = = = = = = = = = =
Date of last finalising : 2026-06-12

Preface :
=========
I have created this SerialPlotterEcg10 program for my personal use at first,
but I can let it as freeware for a next potential experimentators of measuring
ECG or BPM for an information about their heart activity.

Instead of I take as author  no liability towards any use of my program.

You will find next information as users in my SerialPlotterEcg10-help.txt file .

At 12.6.2026 					Pavel Oupicky

History of my programs :
= = = = = = = = = = = = =

I have created more programms for solar inverters and at first for three black boxes,
at first it was programm Modbus RTU Reader for grid-tie inverter SUN-1000G
(from GWL deliver)
and second  Modbus Ansi Reader-Controler for inverter/charger PS 3KVA
(from the PS1-5KVA series like predecestors of Axpert Max from Voltronic)
and third ModbusRtuRW14 universal Reader and Writer for inverter/charger INVSOL01 
(from Green Cell series INVSOL01-04)like a MUST ones .

I have inform about actual version for Modbus30 Ansi (renamed later on ModbusAnsi10) on Github and on MyPower.

This readme is for Modbus RTU Reader and Writer - actual version is ModbusRtuRW14 .

At 4.4. 2024 					Pavel Oupicky

Short description of programm ModbusRtuRW14 Reader and Writer :
= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

Actual version of programm : RW14
Date of last updating  : 4. 4. 2024

Programm was created in Delphi XE Starter 
and it is working under operating system Windows W7 till W10 32/64 bit .

Programm was created by Pavel Oupicky, rentier and home worker.

Programm in full version is distributed as licensed for end user.
   
Shareware version of programm is distributed as shareware.
    There is limited the number of registered data to 100 ones.
    This version is suitable for preparing parameters for next full use.

Author takes no liability towards of any use of his programms.

Contact  on author : pavel.oupicky@seznam.cz

Default known problems in this program ModbusRtuRW12 :
= = = = = = = = = = = = = = = = = = = = = = = = = = =
- the program is the compilation of many of previous programs created by author,
- so some functions of his programs are inserted but are not ready for use.
- Window OS can open many of windows, but when is program running, it is not impossible use the mini- or maximalization of ones, 
  as the OS and Deplphi program and author cannot right open or closed them .. so if my programs are running do not use them
  or runned programs and data will be lost.

Basic description of program :
= = = = = = = = = = = = = = = = 

Program was created for devices with communication protocol Modbus RTU
 and for communication between personal computers
 with connectors RS232 or USB converters to RS232 or RS485 ones
 and devices like inverters SUN1000G or wattmeter SDM120M, for example, too.

When there is known Modbus protocol, it is possible to use next devices, too.

Description of basic buttons on home page in upper line:
= = = = = = = = = = = = = = = = = = = = = = = = = = = = =

About
- basic description of program

Memo
- memory for notes on PC

Help
- reads this similar file

Graphs
- first visualisation of parameters  for graphs

Menu
- when there are a data from measuremet, it is possible to see them 
  or get them into table or graph

Data
- reads recorded datas from p evious measurements

Hex counts
- some transfers between bits, bytes and hexbytes

End
- ends this program

Description ob basic buttons on home page in bottom line:
= = = = = = = = = = = = = = = = = = = = = = = = = = = = = 

Parameters
- primary basic parameters for measurements, data, graph etc.

Com (port - com)
- parameters for communication via com ports and MODBUS RTU commands

Rtu
- list of   commands for measurement and suiteable inputs and list of tasks

Measure
- start for measurement process

Inputregs
- work with RO commands

Holdregs
- work with RW commands

Rtu Set
- basic more detailed set and test of R and W commands


Parameters for tests and measurements :
= = = = = = = = = = = = = = = = = = = =

- basic and driver parameters must be set before then the programm is started

- basic parameters must be set in file with extension .par in Par folder
- driver (port - com) parameters must be set in file with extension .com in Com folder
- Modbus Rtu  parameters for RO commands must be set in file with extension .rtu in Rtu folder
- Modbus Rtu  parameters for RW commands must be set in file with extension .rtu in Rtu folder
- Task parameters must be set in the file with extensions .task in Task folder
- parameters for graphs are in the file with extension .grp in  Grp folder
- help  for program must be set in file with extension .txt  in the Help folder
- initialization file can be declared for the next use of program with the sama parameters
	and it is set in the root folder of exe program.

Example of initialization file (.ini)
= = = = = = = = = = = = = = = = = = =

ModbusRtu/11/Inicialisation
Inicial file for program Modbus28
06.07.2023/17:12:14
User: shareware
Path:Par
File:ModbusRtu11-SDM230M-9600-basic.par
end

Example of basic parameters (.par file):
= = = = = = = = = = = = = = = = = = = = = 

ModbusRtuRW14/params
Measuring with wattmeter SDM120M
Test of inverter Green Cell INVSOL01
Date:2023-10-16*10:22
Device:SDM120M,RS485,01
Protocol:Rtu/Eastron
Com:ModbusRtuR10-SDM120M-Com6-9600.com
Rtu:ModbusRtu11-SDM120M-RS485-01-9600-Inputs.rtu
Rtu:ModbusRtuRW11-SDM120M-RS485-01-9600-Holds.rtu
Tasks:ModbusRtuRW11-SDM120M-basic.task
Measured interval:0
Data:Data
Help:Help\ModbusRtuRW14-help.txt
Graf-par:Grp\Grf-Modbus-basic-en.grp
end

Example of file for com port (.com file):
= = = = = = = = = = = = = = = = = = = = = 

ModbusRtu/14/params
Parameters for communication with SDM120M via port Com6
17.10.2023*8:47:45
Device:SDM120M,RS485
Port:Com,6,9600,8,1,0
Timing:Timer=10,Sleep=10,Wait=200,Timeout=5
end


Parameters for Modbus Rtu (.rtu file) with inputs commands (RO) example :
= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

ModbusRtu/14/params
Parametry pro prenos dat z SDM120M po sbernici Modbus
17.08.2023*8:47:45
Protocol:Rtu
Description:Protocol Modbus RTU of Easun for SDM120M
Device:SDM120M,RS485
Commands:14
1:0x04,0x00,0x00,0x00,0x02/4,0,999.99,1.0/V,Volts
2:0x04,0x00,0x06,0x00,0x02/4,0,99.999,1.0/A,Ampers
3:0x04,0x00,0x0C,0x00,0x02/4,0,999.99,1.0/W,Watts
4:0x04,0x00,0x12,0x00,0x02/4,0,999.99,1.0/VA,Voltampers
5:0x04,0x00,0x18,0x00,0x02/4,0,999.99,0.1/VAr,Voltamper r
6:0x04,0x00,0x1E,0x00,0x02/4,0,999.99,1.0/au,Power Factor
7:0x04,0x00,0x24,0x00,0x02/4,0,999.99,1.0/Deg,Degree
8:0x04,0x00,0x46,0x00,0x02/4,0,99.999,1.0/Hz,Frekvence
9:0x04,0x00,0x48,0x00,0x02/4,0,99.999,1.0/kWh,Import Active Energy
10:0x04,0x00,0x4A,0x00,0x02/4,0,99.999,1.0/kWh,Export Active Energy
11:0x04,0x00,0x4C,0x00,0x02/4,0,99.999,1.0/kVArh,Import Reactive Energy
12:0x04,0x00,0x4E,0x00,0x02/4,0,99.999,1.0/kVArh,Export Reactive Energy
13:0x04,0x01,0x56,0x00,0x02/4,0,99.999,1.0/kWh,Total Active Energy
14:0x04,0x01,0x58,0x00,0x02/4,0,99.999,1.0/kVArh,Total Reactive Energy
end


Parameters for Modbus Rtu (.rtu file) with holdings commands (RW) example :
= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

ModbusRtu/14/params
Parametry pro  ten  a z pis dat z SDM230M po sbernici Modbus
4.09.2023*15:47:45
Protocol:Rtu
Description:Protocol Modbus RTU of Easun for SDM230M V2.4
Device:SDM230M,USB-RS485
ResponseRW:8
Commands:11
1:0x00,0x0C,0x00,0x02/4,0,9.999,1.0/ms,Relay pulse width/60,100,200/100/Write relay on period in milliseconds: 60, 100 or 200
2:0x00,0x12,0x00,0x02/4,0,9.999,1.0/nr,stop bit and parity/0,1,2,3/0 = One stop bit and no parity/1 = One stop bit and even parity. 2 = One stop bit and odd parity.3 = Two stop bits and no parity.
3:0x00,0x14,0x00,0x02/4,0,9.999,1.0/nr,Modbus address/1-247/1/Range 1 to 247
4:0x00,0x1C,0x00,0x02/4,0,9.999,1.0/nr,baud rate/0,1,2,3/2 = 9600/0 = 2400 baud. 1 = 4800 baud.2 = 9600 baud, default.3 = 19200 baud. 4 = 38400 baud.
5:0x00,0x56,0x00,0x02/4,0,9.999,1.0/nr,pulse out mode/0001-0008/0004/change of source for pulse (import, export)
6:0xF9,0x00,0x00,0x01/5,0,999.9,1.0/nr,Time scroll/0-30/0/Time of scroll display
7:0xF9,0x10,0x00,0x01/5,0,9.999,1.0/nr,pulse output/0000-0003/0000/kWh of impuls
8:0xF9,0x20,0x00,0x01/5,0,9.999,1.0/nr,measurement mode/0001-0003/0002/mode 1 to mode 3
9:0xFC,0x00,0x00,0x02/1,0,9.999,1.0/nr,serial number/integer/integer/unsigned int32
10:0xFC,0x02,0x00,0x01/5,0,9.999,1.0/nr,meter code/00 20/00 20/read only
11:0xFC,0x03,0x00,0x01/5,0,9.999,1.0/nr,software version/xxxx/xxxx/read only
end

Example of file for tasks (.task file):
= = = = = = = = = = = = = = = = = = = = = 

ModbusRtuR10/tasks
Tasks for wattmeter SDM120M basic
Date:2023-10-23*10:22
Device:SDM120M
Protocol:Rtu/Eastron
VAW:1,2,3,4,5,6,8,end
WVArkWh:3,4,5,9,10,end
kWh:9,10,11,12,13,14,end
Params:15,19,20,21,22,23,end
Port:17,18,16,end
end

Example of file for graphs (.grp file):
= = = = = = = = = = = = = = = = = = = = = 

ModbusRW/parameters/graphs
Graph:ModbusRtu - test
28.6.2023/21:25:21
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




