# Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU.
![THUM](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/cdd2ad80-ed9c-4971-beee-f26752ac3c9d)

Hello friends in this video I have developed a single phase motor speed controller card.  this card has the option to control speed via potentiometer, 0 to 10V DC or RS485 Modbus RTU protocol.  This can handle up to load of 1KW single phase induction motor.  the principle of speed control is based on zero cross over detection and triac firing.

# Supplies

![FZJ146QLOWX36IF](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/2939b968-5ca1-47c7-a358-56dfe7f3676e)

this is the complete BOM of the motor control board.

1. 22pF C3,C4 C1206 2 1206CG220J500NT

2. 1uF C6 C1206 1 12065C105JAT2A

3. 100nF C7 CAP-TH_L13.0-W6.0-P10.00-D0.6 1 MPX104K31C3KN15600

4. 10uF C16 C1206 1 CC1206ZKY5V7BB106

5. DB128V-5.08-5P-GN-S CN1 CONN-TH_5P-P5.08_DIBO_DB128V-5.08-5P-GN-S 1 DB128V-5.08-5P-GN-S

6. MB10S_C2488 D1 MBS_L4.7-W3.8-P2.40-LS7.0-TL 1 MB10S

7. SM712-02HTG_C2827658 D6 SOT-23_L2.9-W1.3-P1.90-LS2.4-BR 1 SM712-02HTG

8. ICSP ICSP1,MODE,SLAVE_ID HDR-M-2.54_2X3 3

9. HB9500-9.5-3P MAINS,MOTOR CONN-TH_HB9500-9.5-3P 2 HB9500-9.5-3P

10. SN65HVD3082EDR MAX485 SOIC-8_L5.0-W4.0-P1.27-LS6.0-BL 1 SN65HVD3082EDR

11. FC-3215HRK-620D PWR LED1206-R-RD_RED 1 NCD1206R1

12. BTA41-600BRG Q1 TOP3_L15.3-W4.5-P5.60-L 1 BTA41-600BRG

13. 47k R1,R2,R3,R4 R_AXIAL-0.4 4

14. 10k R5 R_AXIAL-0.4 1

15. 220 R6 R_AXIAL-0.4 1

16. 100 R7 R_AXIAL-0.8 1

17. 360 R8 R_AXIAL-0.5 1

18. 470 R9 R_AXIAL-0.5 1

19. 120Ω R10,R12 R1206 2 ARG06FTC1200

20. 1kΩ R13,R14 R1206 2 RMC12061K5%N

21. 220Ω R15 R1206 1 1206W4F2200T5E

22. 10K R16,R17,R18,R19 R1206 4 RT1206BRD0710KL

23. 3.3kΩ R22,R23 R1206 2 RMC12063.3K1%N

24. XY2500R-C-5.08-3P RS48_RTU CONN-TH_XY2500R-C-5.08-3P 1 XY2500R-C-5.08-3P

25. FC-3215GHK-570A08 SYS13 LED1206-RD 1 NCD1206C1

26. LTV-817-D U1 DIP-4_L6.4-W4.6-P2.54-LS7.6-BL 1 LTV-817-D

27. MOC3021M U2 DIP-6_L7.3-W6.5-P2.54-LS7.6-BL 1 MOC3021M

28. HEAT SINK U3 HEATSINK-TH_L23.5-W16.0-P18.0_XSD2156-067 1 23.5*16*25 2个钉散热片

29. ATMEGA328P-AU U4 TQFP-32_L7.0-W7.0-P0.80-LS9.0-BL 1 ATMEGA328P-AU

30. SMD1812B050TF U5,U6 R1812 2 SMD1812B050TF

31. 47nF U8 CAP-TH_L12.0-W6.0-P10.00-D1.0-FD 1 ECQE6473JF

32. HLK-PM01 U9 PWRM-TH_HLK-PM01 1 HLK-PM01

33. X2 HC-49US_L11.5-W4.5-P4.88 1 XIHCELNANF-16MHZ

# Step 1: CIRCUIT DIAGRAM AND PCB


![FZJ146QLOWX36IF](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/03d24f1c-fc32-4852-b2a5-827d8aa7851c)
![FYZF6UULOWX35YH](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/00321d5e-88f7-489d-911a-5f7717b77d86)
![FYFQY99LOWX38MM](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/8e213bff-d75f-4055-9490-8306e7a51884)
![FAF8F8TLOWX35YI](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/db652092-f5cf-445c-9c44-302ec83c412b)
![F6W33CZLOWX35YF](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/5e2fe985-59e4-4d89-a7dc-5c4cb8e7e081)



This AC motor speed controller is work on Zero cross detection principle

Zero-cross detection is a technique commonly employed in motor control systems to regulate the speed of motors, particularly in applications where precise control is required. The basic idea is to synchronize the activation of a device, such as a triac, with the zero-crossing points of the AC waveform. This synchronization helps minimize the electrical noise and improves the efficiency of the system.

Here's a detailed explanation of how zero-cross detection is used to control the speed of a motor using the MOC3021 optoisolator and BT41-600 triac:

1. **Components Used:**

  - **MOC3021 Optoisolator:** This is a component that combines a phototransistor and a light-emitting diode (LED) in a single package. It provides electrical isolation between the input (control) and output (load) circuits.

  - **BT41-600 Triac:** A triac is a semiconductor device that can control AC power. The BT41-600 is a specific type of triac that can handle higher power levels.

2. **Zero-Cross Detection:**

  - The MOC3021 optoisolator is used to detect the zero-crossing points of the AC waveform. The AC voltage is applied to the input side of the optoisolator.

  - The optoisolator's internal LED is turned on and off in sync with the AC waveform. The phototransistor senses the light emitted by the LED.

  - The output of the optoisolator switches state when the AC waveform crosses zero voltage, providing a signal that indicates the zero-crossing points.

3. **Control Signal Generation:**

  - The output of the MOC3021 is used to generate a control signal that is fed to the gate of the BT41-600 triac.

  - The triac controls the power supplied to the motor. It allows the current to flow in both directions once triggered.

4. **Motor Speed Control:**

  - By synchronizing the activation of the triac with the zero-crossing points of the AC waveform, the motor can be controlled more precisely.

  - The speed of the motor is adjusted by regulating the duration of each AC half-cycle during which the triac conducts. This is achieved by delaying the triggering of the triac after each zero-crossing point, effectively controlling the power delivered to the motor.

5. **Phase-Cut Dimming:**

  - This method is akin to phase-cut dimming, where the power supplied to the load (in this case, the motor) is controlled by adjusting the phase angle at which the triac is triggered.

6. **Advantages:**

  - Zero-cross detection minimizes electrical noise and reduces stress on the motor, resulting in smoother and more efficient operation.

  - The use of an optoisolator provides electrical isolation, enhancing the safety and reliability of the system.

7. **Limitations:**

  - The precision of speed control may be limited by the resolution of the zero-cross detection and the response time of the control circuitry.

In summary, the zero-cross detection principle, in conjunction with the MOC3021 optoisolator and BT41-600 triac, offers an effective and reliable method for controlling the speed of motors in AC applications. It ensures precise control by synchronizing the activation of the triac with the zero-crossing points of the AC waveform.

# Step 2: ORDERING PCB FROM JLCPCB

![FOI5EGSLOWX35YK](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/8e7ac15a-4545-4223-8095-16fe32bf3ec2)
![FYZF6UULOWX35YH](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/181c0ea2-bdc8-4655-9396-1e088d423a6a)
![FYFQY99LOWX38MM](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/e1ba6983-b031-49d8-8b3c-ccce494cca30)
![FV845E9LOWX3AED](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/9746c460-ce99-489b-857e-8595dcaf4905)


Download the PCB and schemitic file from the link below

https://oshwlab.com/sharmaz747/ac-motor-speed-controller

I have ordered the PCB from JLCPCB.COM below are some key benefits if you order your PCB from JLCPCB

🚀 Elevate Your Projects with JLCPCB! 🛠️

Looking to bring your electronic dreams to life? Look no further! JLCPCB.COM is your one-stop solution for top-notch Printed Circuit Boards (PCBs) at unbeatable rates.

🌟 Why Choose JLCPCB?

✅ **Quality Assurance:** Our commitment to excellence ensures that every PCB you order is manufactured with precision and tested for quality, meeting the highest industry standards.

💰 **Affordable Rates:** Innovation shouldn't break the bank. At JLCPCB, we believe in providing cost-effective solutions, making high-quality PCBs accessible to everyone.

🚚 **Global Delivery:** No matter where you are, we deliver! Our efficient global shipping ensures that your order reaches you swiftly and securely.

🛠️ **Easy Ordering Process:** Ordering with JLCPCB is a breeze. Our user-friendly interface and streamlined process make it simple for you to customize and order your PCBs hassle-free.

🌐 **Versatile Capabilities:** Whether you're a hobbyist or a seasoned professional, JLCPCB caters to all. From single-layer to multilayer PCBs, we offer a wide range of options to suit your specific project needs.

⏱️ **Quick Turnaround:** We understand the importance of time in the world of electronics. With JLCPCB, expect swift turnaround times, ensuring you stay ahead of your project deadlines.

💡 **Innovation Begins with JLCPCB:**

Transform your ideas into reality. Order your quality PCBs from JLCPCB.COM today and experience the perfect blend of quality, affordability, and efficiency. Your projects deserve the best, and we're here to deliver it! 🚀✨

Visit JLCPCB.COM now and embark on a journey of seamless innovation! 💻🔧


# Step 3: SMD COMPONENTS SOLDERING

![FBFOG1TLOWX364H](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/0c5c9f3a-fda1-4d22-bad5-9cd60e327af1)
![FKZQ8DOLOWX364J](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/3e7df9db-e282-4c73-949f-d4f7328c3376)
![FBFV029LOWX364I](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/bdd778ce-e88a-40d5-907d-66d8281c0b97)



Surface Mount Device (SMD) components soldering using solder paste is a widely used technique in electronics assembly. SMD components are small and have no leads, making them suitable for densely populated circuit boards. Solder paste is a mixture of finely powdered solder alloy and flux, which is applied to the solder pads on the circuit board before placing the components. Here's a brief description of the SMD soldering process using solder paste:

1. **Application of Solder Paste:**

  - Solder paste is typically applied to the PCB using a stencil. The stencil is aligned with the PCB, and the solder paste is spread over it, filling the openings corresponding to the solder pads.

2. **Component Placement:**

  - SMD components are then carefully placed onto the solder paste-covered pads using automated pick-and-place machines or manual assembly, depending on the scale of production.

3. **Reflow Soldering:**

  - The PCB, with the solder paste and components in place, undergoes reflow soldering. This process involves heating the entire assembly to a specific temperature using a reflow oven.

  - The solder paste melts, and surface tension helps the molten solder form reliable and durable solder joints between the components and the PCB pads.

4. **Temperature Profiles:**

  - Reflow soldering involves carefully controlled temperature profiles. The assembly goes through a preheat phase, a soak phase, and a reflow phase. The temperature is raised gradually and then brought down, ensuring that the solder joints form correctly without causing thermal stress to the components.

5. **Flux Activation:**

  - The flux in the solder paste serves multiple purposes. It removes oxides from the metal surfaces, ensuring good wetting of the solder. Additionally, it minimizes the formation of solder balls and bridges between adjacent pads.

6. **Inspection:**

  - After reflow soldering, the PCB is inspected for solder joint quality. Visual inspection, automated optical inspection (AOI), or X-ray inspection may be used to ensure that the solder joints are uniform and free from defects.

7. **Cleaning (if necessary):**

  - Depending on the type of solder paste used, cleaning may be required to remove excess flux residue. Some "no-clean" solder pastes don't require cleaning, while others may need a post-soldering cleaning process.

8. **Advantages of SMD Soldering with Paste:**

  - Enables high-density component placement on PCBs.

  - Offers improved thermal and electrical performance due to shorter interconnection lengths.

  - Allows for automated assembly processes, reducing production time and costs.

  - Provides reliable and consistent solder joints when the process is properly controlled.

9. **Challenges:**

  - Precision is crucial during the application of solder paste to avoid misalignment or excessive paste deposition.

  - Care must be taken to prevent solder bridging or tombstoning issues during reflow.

In summary, SMD components soldering using solder paste is a sophisticated yet widely adopted method in modern electronics manufacturing. It allows for efficient assembly of compact and densely populated circuit boards with reliable solder joints.

# Step 4: THROUGH HOLE COMPONENTS SOLDERING

![FCFEKT8LOWX36HN](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/bfa68854-879d-4c47-ae9a-cb65ec9bced5)
![FZJ146QLOWX36IF](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/fbc8098a-6dda-493f-8365-39c531f3a52d)
![FJHK7TYLOWX35YG](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/15fdb40f-1c08-45c3-a78f-d5e1a7d82f8d)
![FFOVYQQLOWX36HM](https://github.com/sandy9159/Single-Phase-Motor-Speed-Controller-Using-Potentiometer-0-10V-or-RS485-Modbus-RTU./assets/19898602/5f03c8ea-3fe7-4bbf-9d9d-e45f42a6b1ee)


In electronic circuits, the distinction between through-hole and surface mount components plays a crucial role, especially when dealing with power components that are tasked with handling significant electrical loads. Mostly associated with power management and delivery, through-hole components are integral to the functionality and reliability of various electronic systems. This is particularly evident in devices requiring power transformation, such as a 230V to 5V DC converter.

Among the prominent through-hole power components are the stalwarts of power regulation and isolation. Optoisolators, for instance, act as guardians of signal integrity, ensuring that high voltages on one side of the circuit do not compromise the low-voltage section. These components play a pivotal role in maintaining a secure interface between different voltage domains, contributing to the safety and longevity of the overall system.

Traics, or triode alternating current switches, are another class of through-hole components commonly associated with power electronics. These semiconductor devices facilitate the control of AC power, finding application in dimmer switches and motor speed control circuits. Their through-hole nature ensures robust connections capable of handling the considerable currents associated with power applications.

Power resistors, designed to dissipate substantial amounts of heat, are crucial for regulating current and voltage in high-power circuits. These through-hole resistors provide a reliable means of managing heat dissipation, preventing overheating and potential damage to sensitive components.

Similarly, power capacitors, with their ability to store and release electrical energy rapidly, are vital in smoothing voltage fluctuations and providing stability to power supplies. Through-hole power capacitors are well-suited for applications where durability and efficient heat dissipation are paramount.

The inclusion of heat sinks in the realm of through-hole components underscores the significance of effective thermal management in power electronics. Heat sinks are instrumental in dissipating excess heat generated by power components, ensuring optimal operating temperatures and preventing performance degradation or component failure.

Power terminals, serving as connection points for high-current-carrying conductors, further exemplify the prevalence of through-hole components in power applications. These robust terminals provide secure and reliable connections, essential for maintaining the integrity of power pathways within a circuit.

In conclusion, through-hole components in the realm of power electronics embody resilience and reliability. From converters to isolators, traics to resistors, capacitors to heat sinks, and power terminals, these components form the backbone of systems designed to handle substantial electrical loads. Their through-hole design ensures not only steadfast electrical connections but also facilitates efficient heat dissipation, contributing to the overall robustness and endurance of power-centric electronic applications.

# Step 5: ATMEGA328P CODE
This Arduino code designed for a system that incorporates both Modbus communication and dimming control, likely for a lighting or power control application. Let's break down the main components and functions of the code:

### Libraries and Definitions:

```cpp

#include <ModbusRtu.h>

#include <RBDdimmer.h>

#define DATA 2

```

- The code includes two libraries: `ModbusRtu` for Modbus communication and `RBDdimmer` for dimmer control.

- `DATA` is defined as 2, indicating an array size for Modbus data.

### Global Variables:

```cpp

Modbus bus;

uint16_t modbus_array[DATA];

int SlaveID = 0;

#define Enable 5

#define Ref A0

#define A 6

#define B 7

#define C 8

#define SYS 13

#define outputPin 3

#define zerocross 2

dimmerLamp dimmer(outputPin);

int outVal = 0;

int currentmilli = 0;

```

- `Modbus` object and an array `modbus_array` to store Modbus data.

- `SlaveID` represents the device's Modbus slave ID, initially set to 0.

- Definitions for various pins and components used in the system.

- `dimmerLamp` object `dimmer` is created to control the dimmer on `outputPin`.

- `outVal` stores the current dimmer value.

### Setup Function:

```cpp

void setup() {

 // ... (pin mode configurations)

 if (digitalRead(A) == 0 && digitalRead(B) == 1 && digitalRead(C) == 1) {

  SlaveID = 1;

 }

 // ... (other SlaveID assignments based on A, B, and C digital reads)

 bus = Modbus(SlaveID, 1, 4);

 bus.begin(9600);

 // ... (initializing modbus_array, setting SYS pin, and configuring dimmer)

}

```

- The setup function initializes the system.

- SlaveID is determined based on the digital readings of pins A, B, and C.

- Modbus object `bus` is created with specified parameters.

- Modbus array is initialized, SYS pin is set LOW, and the dimmer is configured.

### Loop Function:

```cpp

void loop() {

 // ... (Enable pin and dimmer control logic)

 if (!digitalRead(Enable)) {

  // ... (Modbus communication and dimmer control based on Modbus data)

 }

}

```

- The loop function contains conditional logic based on the state of the `Enable` pin.

- If `Enable` is HIGH, the system checks the `outVal` for dimmer control.

- If `Enable` is LOW, Modbus communication is checked, and dimmer control is based on Modbus data.

- Different conditions are considered based on the SlaveID for specific functionalities.

### Summary:

This Arduino code integrates Modbus communication and dimmer control, allowing for dynamic adjustment of power levels based on external factors or user inputs. The SlaveID is determined by the state of pins A, B, and C, and the system can respond to Modbus commands to control the dimmer or read analog input for specific scenarios.

#include<ModbusRtu.h>
#include <RBDdimmer.h>
#define DATA  2
Modbus bus;
uint16_t modbus_array[DATA];


int SlaveID = 0;
#define Enable  5
#define Ref  A0
#define A  6
#define B  7
#define C  8
#define SYS  13
#define outputPin  3
#define zerocross  2


dimmerLamp dimmer(outputPin);
int outVal = 0;
int currentmilli = 0;
void setup()


{
 Serial.begin(9600);
 dimmer.begin(NORMAL_MODE, ON);
 pinMode(SYS,OUTPUT);
 pinMode(Enable,INPUT_PULLUP);
 pinMode(A,INPUT_PULLUP);
 pinMode(B,INPUT_PULLUP);
 pinMode(C,INPUT_PULLUP);
 pinMode(Enable,INPUT_PULLUP);

if (digitalRead(A)==0 && digitalRead(B)==1 && digitalRead(C)==1){
  SlaveID = 1;
}


if (digitalRead(A)==1 && digitalRead(B)==0 && digitalRead(C)==1){
  SlaveID = 2;
}


if (digitalRead(A)==1 && digitalRead(B)==1 && digitalRead(C)==0){
  SlaveID = 3;
}


if (digitalRead(A)==0 && digitalRead(B)==0 && digitalRead(C)==1){
  SlaveID = 4;
}


if (digitalRead(A)==0 && digitalRead(B)==1 && digitalRead(C)==0){
  SlaveID = 5;
}


if (digitalRead(A)==1 && digitalRead(B)==0 && digitalRead(C)==0){
  SlaveID = 6;
}


if (digitalRead(A)==0 && digitalRead(B)==0 && digitalRead(C)==0){
  SlaveID = 7;
}


if (digitalRead(A)==1 && digitalRead(B)==1 && digitalRead(C)==1){
  SlaveID = 0;
}


  bus = Modbus(SlaveID, 1, 4);          //Modbus slave ID as 1 and 1 connected via RS-485 and 4 connected to DE & RE pin of RS-485 Module
  bus.begin(9600);


  for (int i = 0; i < DATA; i++) {
    modbus_array[i] = 0;
  }


  digitalWrite(SYS,0);
dimmer.setPower(10);
   delay(100);
   dimmer.setPower(0);
   outVal = 0;
   delay(1000);

}


void loop(){


if (digitalRead(Enable)){
  digitalWrite(SYS,0);
  if (outVal==0){
   dimmer.setPower(0);
  }


  if (outVal>0){
    outVal = outVal-1;
   dimmer.setPower(outVal);
   delay(10);
  }

}


 if (!digitalRead(Enable)){


   if (SlaveID > 0 ){


  bus.poll(modbus_array, sizeof(modbus_array) / sizeof(modbus_array[0]));
   for (int i = 0; i < DATA; i++) {
   if (modbus_array[0] == 1 ) {
   outVal = modbus_array[1];
   outVal = map(outVal, 1, 100, 10, 96); 
    dimmer.setPower(outVal); 
  }


  if (modbus_array[0] == 0 ) {
    dimmer.setPower(0);
  }
}
   }


 if (SlaveID == 0 ) {
    digitalWrite(SYS,1);
    outVal = map(analogRead(0), 1, 1024, 10, 85); 
    dimmer.setPower(outVal); 
  }


}


}

