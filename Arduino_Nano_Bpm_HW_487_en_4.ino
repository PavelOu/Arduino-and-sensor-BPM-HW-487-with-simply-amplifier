//Arduino_Nano_Bpm_HW_487_en_4
// Arduino Nano + sensor heart beat (BPM) with  HW-487 (KY039)
//analog pin A7
// unified commands A,B,C,D, etc...

//#define powerLED 13
#define greenLED 8
#define yellowLED 7
#define redLED 6
#define analogPin 7

String sketchName = "Arduino_Nano_Bpm_HW_487_en_4";
unsigned int analogValue;

unsigned int timeStart = 0;
unsigned int dataTime = 0;
unsigned int timeOfMeasuring = 0;
int dataStep = 20;
int dataOffset = 0;
int dataOffsetMax = 400;

int I = 0;
int J = 0;
int dataIndex = 0;
int dataWaitTime = 100;
unsigned int dataOscArray [502];
int dataNumber = 400;
int dataNumberMax = 500;

int slaveNumber = 3;

bool menuOn = false;
bool serialPrintOn = false;
char markRx = 0;
byte dataMode = 0;

void setup() 
 {
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  digitalWrite(greenLED,HIGH);
  delay(1000);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  delay(1000);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  delay(1000);
  digitalWrite(redLED,LOW);
  dataStep = 20;
  dataNumber = 400;
  dataTime = 0;
  dataOffset = 0;
  menuOn = true;
  I = 1;
 }

void loop()
 {
  if (menuOn == true)
    {
     digitalWrite(greenLED,HIGH);      
     Serial.println(sketchName);
     Serial.println();
     Serial.println("Menu:");
     Serial.println("A=read one data, B=read data in cycle,");
     Serial.println("C=more simply data transfer, D=data transfer for plotter,");
     Serial.println("M=measuring data to memory, N=read data from memory,");
     Serial.println("Exx=data step, Lxxx=nr of measured data, Oxxx=offset of data,");
     Serial.println("F=serial print details on, Q=serial print detail off!");
     Serial.println("G=yellow led test, H=red led test, J=green led test,");
     Serial.println("P or R=read parameters, S=Stop of data transfer!");
     menuOn = false;
     delay(500);
     //digitalWrite(yellowLED,LOW);      
     dataMode = 89;
    }
    
 if (Serial.available())
    {
      //digitalWrite(yellowLED,HIGH);      
      markRx = Serial.read();
           
     if (markRx == 65)
      {
        dataMode = 65; // read one data
        dataIndex = 0;
      }
      
     if (markRx == 66)
      {
        dataMode = 66; // B - read analog data in cycle in format *B,data,#,CRLF
        digitalWrite(yellowLED,LOW);      
        dataIndex = 0;
        timeStart = millis();
      }

     if (markRx == 67)  // C - read analog data in cycle in format  *,data,#,CRLF
      {
        digitalWrite(yellowLED,LOW);      
        dataIndex = 0;
        dataTime = 0;
        timeStart = millis();
        if (serialPrintOn)
         {
           Serial.print("*C,");
           Serial.print(dataStep);
           Serial.print(",");
           Serial.print(dataNumber);
           Serial.print(",");
           Serial.print(dataTime);
           Serial.print(",");
           Serial.print(dataOffset);
         } 
        I = 1;
        dataMode = 67;
      }
      
      
     if (markRx == 68)   // D = data for plotter in format data CRLF
      {
        digitalWrite(yellowLED,LOW);      
        dataTime = 0;
        dataIndex = 0;
        timeStart = millis();
        if (serialPrintOn)
         {
          Serial.print("*D,");
          Serial.print(dataStep);
          Serial.print(",");
          Serial.print(dataNumber);
          Serial.print(",");
          Serial.print(dataTime);
          Serial.print(",");
          Serial.print(dataOffset);
         }
        dataMode = 68;
      }
      
     if (markRx == 69)  // Exx data step
      {
            dataMode = 69; // E - Data step
            String Pstring = Serial.readString();
            Pstring.trim();
            dataStep = Pstring.toInt();
            dataMode = 80;
      }

    if (markRx == 70) // F - stop of data transfer and print on
      {
        menuOn = true;
        serialPrintOn = true;
        dataMode = 89;        
      }

    if (markRx == 71) // G - yellow LED on
      {
       digitalWrite(yellowLED,HIGH);      
        delay(1000);
        digitalWrite(yellowLED,LOW);      
        dataMode = 89;        
      }

    if (markRx == 72) // H - red LED on
      {
        digitalWrite(yellowLED,LOW);      
        digitalWrite(redLED,HIGH);      
        delay(1000);
        digitalWrite(redLED,LOW);      
         //menuOn = false;
        dataMode = 89;        
        //Pline = 1;
      }

    if (markRx == 73) // I - info of master not used
      {
        Serial.print("*I,");
        Serial.print(slaveNumber);
        Serial.println(",#,");
        dataMode = 89;        
      }

    if (markRx == 74) // J - green LED on
      {
        digitalWrite(yellowLED,LOW);      
        digitalWrite(greenLED,HIGH);      
        delay(1000);
        digitalWrite(greenLED,LOW);      
        dataMode = 89;        
      }

    if ( markRx == 75 )   // Kx - not used here, so 
          {
            String pomString = Serial.readString();
            slaveNumber = pomString.toInt();
            Serial.print("*K,");
            Serial.print(slaveNumber);
            Serial.println(",#,");
            dataMode = 89;        
          }


     if ( markRx == 76 ) // Lxxx - nr of data for M measuring to memory
          {
            String Pstring = Serial.readString();
            Pstring.trim();
            dataNumber = Pstring.toInt();
            dataMode = 80;
          }
          
     if (markRx == 77)  // M - read analog data and saved them to internal memory
      {
        dataMode = 77;
        I = 1;
      }

     if (markRx == 78) // N - read and transmitt data from memory
      {
        dataMode = 78; 
      }

     if (markRx == 79) // O - data offset
      {
            String Pstring = Serial.readString();
            dataOffset = Pstring.toInt();
            if (dataOffset>dataOffsetMax)
             {
              dataOffset =dataOffsetMax;
             }
            dataMode = 80;
      }
    
     
     if ( markRx == 80 )  // P  read parameters
          {
            dataMode = 80;
          }

     if (markRx == 81) // Q - serial print off
      {
        serialPrintOn = false;
        dataMode = 89;        
      }

     if ( markRx == 82 ) // R read parameters
          {
            dataMode = 82;
          }
 

     if (markRx == 83)
      {
        dataMode = 83;
      }
     
     if (markRx == 84)  // T = wait time not used
      {
            String Pstring = Serial.readString();
            Pstring.trim();
            dataWaitTime = Pstring.toInt();
            dataMode = 84;      
      }
     
     markRx = 0;
     Serial.flush();
  } // end of Serial available
      
 if (dataMode == 65) // A - data one
      {
        dataIndex = dataIndex+1;      
        if (dataStep > 0)
         {
          delay(dataStep);
         }
        Serial.print("*A,");
        analogValue = analogRead(analogPin) + dataOffset;
        Serial.print(analogValue);
        Serial.print(",");
        Serial.println("#,");
        dataMode = 89;
      }
     
   if (dataMode == 66) // B - read data in cycle
     {
      dataIndex = dataIndex+1;      
      if (dataStep > 0)
         {
          delay(dataStep);
         }
      Serial.print("*B,");
      analogValue = analogRead(analogPin) + dataOffset;
      Serial.print(analogValue);
      Serial.println(",#,");
     }

    if (dataMode == 67) // C - serial data in format  *,data,#, 
      {
        dataIndex = dataIndex+1;      
        if (dataStep > 0)
         {
          delay(dataStep);
         }  
        analogValue = analogRead(analogPin) + dataOffset;
        Serial.print("*,");
        Serial.print(analogValue);      
        Serial.println(",#,");
     }

    if (dataMode == 68) // D - data for plotter in format data CR LF
      {
        dataIndex = dataIndex+1;      
        if (dataStep > 0)
         {
          delay(dataStep);
         }  
        analogValue = analogRead(analogPin) + dataOffset;
        Serial.print(analogValue);      
        Serial.println();
     }
           
     if (dataMode == 77)  // M - read analog data and save them to memory
      {
       Serial.print("*M,");
       Serial.print(dataStep);
       Serial.print(",");
       Serial.print(dataNumber);
       Serial.print(",");
       Serial.print(0);
       Serial.print(",");
       Serial.print(dataOffset);
       Serial.println(",#,");
       timeStart = millis();
       J = 1;
    OpakM:   
       analogValue = analogRead(analogPin);
       dataOscArray[J] = analogValue;
       if (dataStep > 0)
        {
          delay(dataStep);
        }
       J = J + 1;
       if (J < dataNumber)
        {
          goto OpakM;    
        }
       timeOfMeasuring = millis() - timeStart;
       dataMode = 89;
      }  
      
     if (dataMode == 78)  // N - read and transmitt data from memory
       {
          dataTime = timeOfMeasuring;
          Serial.print("*N,");
          Serial.print(dataStep);
          Serial.print(",");
          Serial.print(dataNumber);
          Serial.print(",");
          Serial.print(dataTime);
          Serial.print(",");
          Serial.print(dataOffset);
          Serial.print(",");
          I = 1;
       OpakN:   
          Serial.print(dataOscArray[I]);
          Serial.print(",");
          if (I < dataNumber)
           {
            I = I + 1;
            goto OpakN;
           }
          Serial.println("#,");
          dataMode = 89;
        }

      if (dataMode ==  80)
        {
            //timeStart = millis();
            Serial.print("*P,");
            Serial.print(dataStep);
            Serial.print(",");
            Serial.print(dataNumber);
            Serial.print(",");
            Serial.print(dataNumberMax);
            Serial.print(",");
            Serial.print(dataOffset);
            Serial.println(",#,");
            //delay(250);
            dataMode = 89;
        }    

      /*
      if (dataMode ==  81)
        {
            Serial.print("*Q,");
            Serial.print(dataStep);
            Serial.print(",");
            Serial.print(dataNumber);
            Serial.print(",");
            Serial.print(dataNumberMax);
            Serial.print(",");
            Serial.print(dataOffset);
            Serial.println(",#,");
            serialPrintOn = false;
            dataMode = 89;
        }    
       */

      if (dataMode ==  82)
        {
            Serial.print("*R,");
            Serial.print(dataStep);
            Serial.print(",");
            Serial.print(dataNumber);
            Serial.print(",");
            Serial.print(dataTime);
            Serial.print(",");
            Serial.print(dataOffset);
            Serial.println(",#,");
            dataMode = 89;
        }    

      if (dataMode ==  83) // S - stop of reading data in cycle
        {
            dataTime = millis() - timeStart;
            Serial.print("*S,");
            Serial.print(dataStep);
            Serial.print(",");
            Serial.print(dataIndex);
            Serial.print(",");
            Serial.print(dataTime);
            Serial.print(",");
            Serial.print(dataOffset);
            Serial.println(",#,");
            dataMode = 89;                 
        }
      
      if (dataMode == 89)
       {
        digitalWrite(greenLED, LOW);
        digitalWrite(yellowLED, LOW);
        digitalWrite(redLED, LOW);
        //delay(1);
       }           
   }
