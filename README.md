# 🚦 Arduino Traffic Light with Pedestrian Button

This project simulates a traffic light system with a pedestrian crossing button using an Arduino UNO.  
It manages two sets of LEDs (for vehicles and pedestrians) and changes the sequence when the button is pressed.

---

## 🧩 Features
- Automatic vehicle traffic light sequence  
- Pedestrian crossing activated by a push button  
- Blinking green light for pedestrians before turning red  
- Automatic return to green for cars after 1 second  

---

## 🧰 Components
- 1 × Arduino UNO  
- 5 × LEDs (3 for cars, 2 for pedestrians)  
- 5 × 220Ω resistors  
- 1 × Push button (connected with `INPUT_PULLUP`)  
- Breadboard and jumper wires  

---

## ⚙️ Wiring
| Component | Arduino Pin | Notes |
|------------|--------------|--------|
| Car Red LED | 8 | with 220Ω resistor |
| Car Yellow LED | 9 | with 220Ω resistor |
| Car Green LED | 10 | with 220Ω resistor |
| Pedestrian Red LED | 12 | with 220Ω resistor |
| Pedestrian Green LED | 13 | with 220Ω resistor |
| Pedestrian Button | 7 | connected to GND (INPUT_PULLUP) |

---

## 📷 Circuit Example
![Traffic Light Circuit 1](circuit%20image%201.jpg)  
![Traffic Light Circuit 2](circuit%20image%202.jpg)  
![Traffic Light Circuit 3](circuit%20image%203.jpg)

---

## 🧠 Code Explanation
The program controls the LEDs according to a normal traffic cycle.  
When the button is pressed, it triggers the pedestrian sequence by:
1. Stopping the car green light  
2. Turning on the car red light  
3. Enabling pedestrian green  
4. Returning to normal mode after a short delay  

---

## 👨‍💻 Author
**Alessandro valentini**  
Electronics Engineering Student  
First project of my 24-month roadmap to build a professional technical portfolio.
