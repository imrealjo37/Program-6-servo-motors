# 🤖 Humanoid Robot Walking Simulation

This project is all about bringing your humanoid robot to life! 🚶‍♂️✨ Using Tinkercad and Arduino, we control 6 servo motors to create smooth, lifelike movements. Here's what happens:

1️⃣ The motors sweep back and forth for 2 seconds. ⏱️
2️⃣ Then, they hold steady at 90° for a stable finish. 🛑🦾

Plus, we've got an algorithm for simulating realistic walking motion. Let’s dive in! 🎉

---

## ⚙️ Features

- **Servo Control:**
  - Sweep motion for 2 seconds. ↔️
  - Hold all servos at 90° for stability. 🎯

- **Walking Algorithm:**
  - Detailed steps for humanoid walking, including balance, arm coordination, and sensor feedback. 🚶‍♀️🦾

- **Simulation in Tinkercad:**
  - The circuit is fully designed and tested in Tinkercad. 🛠️✨

---

## 🔌 Circuit Design

This project uses:
- **6 Servo Motors** connected to the Arduino’s digital pins.
- A stable power supply for driving the servos. ⚡
- Ground connections to ensure proper operation. 🌐

##  **Circuit Diagram:**
![image](https://github.com/user-attachments/assets/a62326f6-8b0c-49bb-8a91-c11c62fdd34f)


---

## 🧠 Algorithm for Walking Motion Execution

Here’s how we make the robot walk naturally! 🦿👇

### 1️⃣ **Initialization:**
#### Set Parameters:
- **Step length (L):** How far each step moves forward.
- **Step height (H):** How high the foot lifts during a step.
- **Step duration (T):** Time taken to complete one step.

#### Balance Initialization:
- Keep the robot upright, with the **Center of Mass (CoM)** over both feet.
- Ensure both legs are straight and stable. 🚶‍♂️

---

### 2️⃣ **Walking Steps:**

1. **Shift Weight to One Leg:**
   - Move the robot’s CoM to the supporting leg (e.g., left leg). 

2. **Lift the Opposite Leg:**
   - Raise the non-supporting leg to the predefined height (H). 

3. **Move the Opposite Leg Forward:**
   - Swing the lifted leg forward by the step length (L). 

4. **Place the Leg on the Ground:**
   - Lower the lifted leg until the foot touches the ground. 

5. **Shift Weight to the New Supporting Leg:**
   - Move the CoM to the newly placed leg and stabilize. 

6. **Repeat:**
   - Alternate between legs to continue walking. 

---

### 3️⃣ **Arm Coordination:**
- Swing the arms naturally:
  - **Left leg forward = Right arm forward.**
  - **Right leg forward = Left arm forward.** 
- This helps balance the motion and adds realism. 

---

### 4️⃣ **Stability Check:**
- Use sensors to ensure balance:
  - **Gyroscopes:** Detect tilt. 
  - **Force Sensors:** Check ground contact. 
- Adjust the **CoM** dynamically if needed. 

---

### 5️⃣ **Stopping Motion:**
1. Reduce step length (L) gradually to slow down.
2. Bring both feet together in a neutral position. 
3. Stabilize the CoM and return arms to rest. 

---

### 6️⃣ **Optimization :**
- Adjust speed and step length based on terrain. 
- Use sensors to avoid obstacles.
- Add machine learning for smoother motion.

---

## 🎮 Tools and Platforms
- **Tinkercad:** For circuit design and simulation. 
- **Arduino UNO:** For programming and uploading code.
  
---

## 👤 Author
Created by Jood. Feel free to contribute or suggest improvements to the project!

