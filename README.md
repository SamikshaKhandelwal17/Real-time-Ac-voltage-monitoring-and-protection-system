" Real-time-Ac-voltage-monitoring-and-protection-system"

## ABSTRACT
This project presents the design and implementation of overvoltage and undervoltage load protection system. The main purpose of this system is to provide the protection from overvoltage and undervoltage in system. Voltage fluctuations have severe impact on electrical equipment, making it critical to develop a system that can detect and respond to unsafe voltage levels in power system. This project is designed to safe guard electrical equipment from harmful voltage fluctuations, the system continuously monitors voltage levels, disconnecting the load when values exceed safe limits in cost-effective manner. The Arduino processes real- time voltage data and displays it on the LCD, activating a relay to cut off power if needed. This low-cost system demonstrates reliable protection for residential and industrial applications, enhancing safety for sensitive devices. The research aims to contribute a viable solution for enhanced load protection in both industrial and residential setting.

Keyword: Overvoltage, Undervoltage, Load Protection, Voltage Monitoring, Cost-Effectiveness,Counter.

Voltage stability is essential for the safe operation of electrical devices, yet fluctuations such as overvoltage and undervoltage are common due to grid issues, load variations, and environmental factors. Such voltage fluctuations can lead to irreversible damage, reduced performance, and even operational hazards in sensitive equipment. Overvoltage and undervoltage conditions can result in excessive strain on electrical appliances, lead to irreversible damage, inefficiencies, and even operational hazards in sensitive equipment, safety risks like overheating or fires. While industrial-grade voltage protection systems exist, they are often complex and expensive, making them impractical for average household use. To minimize this issue we made a simple, cost-effective overvoltage and undervoltage protection system suitable for domestic use. By leveraging the capabilities of an Arduino Nano microcontroller and LCD display, this project aims to create a system that not only protects household appliances but also provides an easy-to-use interface for monitoring real-time voltage. The primary objective is to detect dangerous voltage levels and automatically disconnect the load to prevent potential damage or hazards. The system also displays the No. of Load Trips on LCD display due to undervoltage and Overvoltage conditions. The Main Objective of this project is to design a Smart Overvoltage and Undervoltage Protection System to protect the appliances from damage. Voltage Quality is an important factor with the growth in Power Electronics and the high sensitivity of electrical components. ZMPT101B Voltage sensor which is more accurate than others also it is cost-effective, it helps detects any voltage greater than 230V AC and 190V, sends signal to Arduino then it immediately trips the circuit breaker. Then circuit breaker isolates the load from main source and LCD displays the Trips count.

## Operation of Overvoltage and Undervoltage Protection System:
The usual AC supply voltage at our home is 230V.The voltage fluctuations according to the appliance load may vary. But it should be +2% tolerance. In case of an increase of above 2% or vice versa, the attached load may get disconnected. To avoid this problem, we developed an Overvoltage and Undervoltage protector. When the supply voltage exceeds the specified limit, the relay operates and isolates the load from the electrical circuit. After detecting the fluctuated voltage, an Analog signal of the output voltage is sent to the Arduino. This voltage is unregulated and therefore it varies as the input voltage varies. Arduino Nano has five Analog input pins and thirteen digital pins. It has an inbuilt Analog- Digital converter. So, five different loads can be connected at the same time. The 13th pin contains an indication LED. Arduino takes an input voltage of 5 to 12 volts and gives an output up to 5V. A preset value with tolerance is given to the Arduino. The Arduino compares the preset value with the Analog read value at AO. If it lies within the limit the relay does not operate.

## Components Required:
 Arduino Nano  ZMPT101B Voltage Sensor  20x4 LCD Display with I2C Interface  Single Channel Relay Module 5V  5V AC-DC Adapter  Breadboard  Wires  Buzzer

## Working
Voltage Monitoring: The ZMPT101B voltage sensor continuously monitors AC voltage levels in real-time. It converts the measured voltage into an analog signal, which is then read by the Arduino. The Arduino processes this signal and converts it into a readable voltage value, which is then displayed on the LCD.

Voltage Comparison: The Arduino compares the measured voltage against preset safe thresholds for overvoltage and undervoltage conditions. These thresholds define the safe operational range, protecting the connected load from extreme voltage fluctuations.

Relay Control: Overvoltage or Undervoltage Conditions: If the voltage is above the overvoltage limit or below the undervoltage limit, the Arduino outputs a LOW signal to the relay. This LOW signal causes the relay to disconnect the load, preventing potential damage. Normal Voltage Range: When the voltage is within the safe limits, the Arduino keeps the relay HIGH, ensuring the load remains connected.

Buzzer Indicator: Buzzer beeps when the system sense Undervoltage or Overvoltage conditions.

## Results and Discussions
The system was tested under various simulated voltage conditions to evaluate its effectiveness in detecting unsafe voltage levels and responding appropriately. Table 2 illustrates the system’s response to different voltage conditions, highlighting its reliability and response time.

## Output
1. Normal Voltage -Load Connected -Voltage Stable 

2. Overvoltage -Load Disconnected -Overvoltage Detected
 
3. Undervoltage -Load Disconnected -Undervoltage Detected
  
 Also it displays the no.of times it detected abnormalities and times trip.

## Conclusion
The system consistently demonstrated prompt disconnection of e load during overvoltage and undervoltage conditions. This ensures that household appliances remain protected, confirming the system’s efficacy and reliability.

## Applications of Overvoltage and Undervoltage Protection System:
-This system is effective in Motor Loads. 

-It protects home appliances from sudden voltage damage.

-It is useful for protection in some areas where Power Fluctuations are high.

## Future Scope:
1] IoT Integration andcontrol using mobile applications

2] Implementation of GSM module to send alert during Overvoltage and Undervoltage conditions

3]Data logging feature to store voltage variations for analysis 

4]use of advance microcontrollers for faster response and improved accuracy

## All diagrams including circuit diagram,flow diagram,Circuit simulation and actual protection system added in "CircuitDiagrams.pdf"file.
