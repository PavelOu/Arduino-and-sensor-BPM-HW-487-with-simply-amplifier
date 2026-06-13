Arduino and sensor BPM HW-487 with simply amplifier - Readme for Github
Before 2 years I‘ve started my tests with this BPM sensor HW-487 according tutorial
by these (aktualised) links:
https://navody.dratek.cz/navody-k-produktum/arduino-senzor-tepu-srdce.html?_gl=1*10acvhf*_gcl_aw*R0NMLjE3NzkyODU2NzEuQ2p3S0NBand0N1hRQmhCa0Vpd0F0U3RwcDNNaTFybXNocGJTdV9RRncyaDhHdVBpankxSDRQR1BEWmpfQmNWaEhiQ2ExaTR3aFlCd3pSb0NSd3NRQXZEX0J3RQ..*_gcl_au*MTQwODYyNTg5Ni4xNzc3NjY1MzA5
https://dratek.cz/arduino-platforma/918-senzor-tepu-srdce.html

 But my succses with results were mostly bad. So I’ve started tests with another types of BPM sensores . In tat number I’ve tested the HW-827 reflexion BPM sensor and I have found, that in this sensor is the DC level eliminated due the schema I’ve founded on webs.
So I’ve tried to use the similar way for the improving of the useful signal from HW-487 BPM sensor.   I’ve tried to use the simpliest amplifier with one NPN transistor and the DC signal from HW-487 was separed with capacitor 1 M  and the signal from this transistor was connect direct   with A0 analog input of Arduino Nano (in my case – note that HW-487 need 5V power for well DC output signal from it !!).
There is principial schema of my BPM sensor with HW-487, amplifier with NPN transistor and Arduino Nano (for example) :
<img width="1135" height="383" alt="obrazek" src="https://github.com/user-attachments/assets/fe5eb9ca-10b3-4281-ae7e-210b2be766a2" />
Fig. 1 - BPM sensor with HW-487, amplifier with transistor and Arduino Nano (for example)
. . . . . .
etc. in pdf main file
. . . . . . . .

Note: Results from measuring BPM with sensor HW-487 and Arduino Nano via program SerialPlotterEcg10.exe are only for personal use and they are not a medical documents.

Originaly written 12.6.2026						by PavelOu
