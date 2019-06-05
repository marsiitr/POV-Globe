<h1> POV GLOBE </h1> 
<h4> The New and Cool Way of advertising </h4>

![Final Model](https://github.com/KSHITIJBITHEL/POV-Globe/blob/master/Images%20and%20Videos/pov_globe.jpg)

<h2> Abstract</h2>

The idea of this project is to make a **cool and unique 3D Spherical Display**.The team of 5 freshers did our best to make the spherical display ,displaying the phenomenon of Persistence Of Vision using a ring rotating at a very high rpm with a LED strip on its circumference which was adjusted to glow so as to make the model capable of displaying floating text,user entered words,and blurred images.  


<h2> Motivation</h2>

The main driving force about this project was that it was different ,different than the core models with moving servo motors, controlled by programs, it was cool ,has speed has a colorful look and is a bit unique.


<h2> Mechanical Sructure</h2>

It consists of a ring (which we made out of a badminton raquet) mounted on a heavy cardboard(to decrease the vibrations of rotating ring),it also consisted of a slip ring(self made using an stainless steel cylinder,copper wires and rubber bands!!).


<img src="https://github.com/KSHITIJBITHEL/POV-Globe/blob/master/Images%20and%20Videos/Mech%20Model.jpg" width=400 alt="Mech Model" />


<h2> Electronic Component Used</h2>

1. Arduino UNO
2. Cytron Motor Driver
3. Hall Sensor
4. High Torque Bane-Bot 18W DC Motor 
5. Adressable -RGB LED strip(60LEDs/m)(20 LEDs on the semicirle


<h2> Working</h2>

**Principle** The Persistence Of Vision phenomenon
- The ring with LEDs mounted on it was rotated at around 1500 rpm  so as to give effect of 25fps display
- The feedback for completion of a revolution was taken using hall sensor mounted on the side .
- According to the feedback from hall sensor, angular velocity and time period of every revolution was calculated
- dividing the revolution time into various segments, the LEDs were lighted according to the printed text;
- The whole system was powered by 12V LiPo battery and power was transmitted to LEDs using slip ring.

<h2> Cost Structure</h2>


| Item | Cost(₹) |
| :--- | :--- |
| LED strip | 2k |
| Bane Bot 18V DC motor | 15k |
| The arduino UNO | 400|
| Cytron Motor Driver | 1k |
| The hall Sensor,wires,voltage regulator etc.(other electronics) | 800 |
|**Total**| 19.2 k| 
Overall it was descent for its cost.

<h2> Limitations</h2>

 - At present we are able to diaplay 4-5 alphabet words since the adrduino UNO clock has least delay of 1ms ,the individual vertical strips expanded due to a large time difference between them, which made the letters wide. 
 - At present ,if we try to show some images ,they appear distorted due to the above limitation and the unavailability of higher density LED strip.
 - The present slip ring isn't that efficient in, it when operated at angular velocity higher than 1500 rpm,it starts to show noise in the data cable, making the display bad.


<h2> Future Improvements</h2>

 - To increase the number of alphabets covered.
 - To display images and if more advanced ,videos.


<h2> Team Members</h2>

1. [Chanda Kumari](https://github.com/krichanda)   
2. [Kshitij Bithel](https://github.com/KSHITIJBITHEL)
3. [Lipi Shreya](https://github.com/LipiShreya)
4. [Sanyam Jain](https://github.com/sanyam2248)
5. [Vivek Kumar](https://github.com/rohit234)


<h2> Mentors</h2>

1. Aditya Raj
2. Prashant Kumar
3. Tarun Saxena
4. Tejaswa Soni
5. Vedvyas Dhanturi


![Team Members](https://github.com/KSHITIJBITHEL/POV-Globe/blob/master/Images%20and%20Videos/The%20team.jpg)


<h2> References </h2>

*[ Build Your POV Globe -Makezine](https://makezine.com/projects/persistence-vision-led-globe/)
* [How To Control WS2812B Individually Addressable LEDs using Arduino](https://howtomechatronics.com/tutorials/arduino/how-to-control-ws2812b-individually-addressable-leds-using-arduino/)
* [Interfacing Hall Effect Sensor with Arduino](https://circuitdigest.com/microcontroller-projects/arduino-hall-effect-sensor)
  
 
 For Videos and More Images [Click here](https://drive.google.com/open?id=1-Z8BFcf-tHamf8n8zDd5CVdYPwPu7yQ-)
  
