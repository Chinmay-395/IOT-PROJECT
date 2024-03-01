https://user-images.githubusercontent.com/40957575/174451035-d8cd476e-3d8e-4141-a5e9-f2b7624dc209.mp4

# Introduction

The Smart Spoon is a self-stabilizing utensil designed to assist individuals with impaired motor skills, such as those suffering from Parkinson's Disease, in eating independently without assistance. Utilizing an Arduino microcontroller, servo motors, and an inertial measurement unit (IMU), the Smart Spoon dynamically adjusts its position to counteract involuntary hand movements, maintaining the spoon bowl in a stable, horizontal position.

# Technology Stack


**Microcontroller:** Arduino Nano <br>
**Sensors:** MPU6050 for gyroscope and accelerometer functionalities <br>
**Actuators:** Micro 9g servo FS90 for precise control over spoon movements <br>
**Software:** Custom-developed code in Arduino's Integrated Development Environment (IDE), incorporating algorithms for real-time motion compensation based on sensor inputs.
Features <br>
**Stabilization:** Two degrees of freedom, allowing for correction of both pitch and roll movements.<br>
**Customizability:** Code and hardware design are open for modifications to meet specific needs or improvements.<br>
**Accessibility:** Designed with affordability in mind, aiming to provide a cost-effective solution compared to commercially available options.

# Overview

![overview](https://user-images.githubusercontent.com/40957575/174451512-7cb0813d-1c8a-41e2-8779-8e33a8546f83.png)

# circuit diagram

![circuit diagram](https://user-images.githubusercontent.com/40957575/174451556-9827b1fc-7374-4934-89ad-2cd9a29be66e.png)

**Microcontroller (Arduino Nano):** The brain of the Smart Spoon. It receives data from sensors, processes this information according to the programmed logic, and controls the actuators (servo motors) based on this data. The Arduino Nano is chosen for its compact size, sufficient processing power for real-time sensor data processing, and ease of use with the Arduino IDE for programming.

**Inertial Measurement Unit (IMU - MPU6050):** This sensor combines a gyroscope and accelerometer to measure angular rate and acceleration. For the Smart Spoon, it detects the spoon's orientation and motion. This is critical for determining the unwanted movements (like tremors) that need to be stabilized.

**Servo Motors (Micro 9g servo FS90):** Actuators that adjust the position of the spoon based on commands from the Arduino. There are typically two servo motors arranged orthogonally to provide two degrees of freedom, allowing the spoon to compensate for movements in both the pitch and roll axes. This ensures the spoon can maintain a level position despite hand tremors.

# Flowchart

![flowchat](https://user-images.githubusercontent.com/40957575/174451595-70f67c21-24fb-42a1-8812-e85f78cfe68c.png)

**Data Collection:** The MPU6050 continuously measures the orientation and motion of the spoon. This data is fed into the Arduino Nano at regular intervals.

**Data Processing:** The Arduino processes the incoming data from the IMU to determine the spoon's current orientation and how it's moving. It uses algorithms (like complementary filters) to separate the signal from the noise in the sensor data, accurately determining the spoon's position despite the hand's tremor or movement.

**Actuation:** Based on the processed data, the Arduino calculates the necessary adjustments to counteract the unwanted movements. It then sends commands to the servo motors to adjust the spoon's position accordingly. For instance, if the spoon is tilting forward due to a tremor, one servo motor might be activated to tilt the spoon back to a level position.

**Feedback Loop:** The system continuously monitors the orientation and motion of the spoon through the IMU, adjusting the servo motors as needed. This feedback loop allows the spoon to dynamically stabilize itself in real-time, compensating for ongoing tremors or sudden movements.

# Real-world Application
In practice, this setup allows individuals with tremors or other motor control issues to eat more easily, as the spoon can keep its bowl stable and level, reducing spills. The combination of the IMU for sensing and servo motors for actuation, all controlled by the microcontroller, makes for a compact, efficient system that can be implemented in everyday assistive devices.
