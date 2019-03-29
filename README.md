# POV GLOBE 
_The New and Cool Way of advertising_
# Abstract
The idea of this project is to make a **cool and unique 3D Spherical Display**.The team of 5 freshers did our best to make the spherical display ,displaying the phenomenon of Persistence Of Vision using a ring rotating at a very high rpm with a LED strip on its circumference which was adjusted to glow so as to make the model capable of displaying floating text,user entered words,and blurred images.  

<!-- <img src="images/pov_globe.jpg"/> -->


# Team Members
1. [Kshitij Bithel](https://github.com/KSHITIJBITHEL)
2. [Sanyam Jain](https://github.com/sanyam2248)
3. [Lipi Shreya](https://github.com/LipiShreya)
4. [Vivek Kumar](https://github.com/rohit234)
5. [Chanda Kumari](https://github.com/krichanda)   

# Mentors
1. Tarun Saxena
2. Tejaswa Soni
3. Aditya Raj
4. Prashant Kumar
5.Vedvyas Dhanturi

## Electronic Component Used
1. Arduino UNO
2. Cytron Motor Driver
3. Hall Sensor
4. High Torque Bane-Bot 18W DC Motor 
5. Adressable -RGB LED strip(60LEDs/m)(20 LEDs on the semicirle
<img src="Users/kshitijbithel/Desktop/Transfer/Mech Model.jpeg" />


## Mechanical Sructure
It consists of a ring (which we made out of a badminton raquet) mounted on a heavy cardboard(to decrease the vibrations of rotating ring),it also consisted of a slip ring(self made using an stainless steel cylinder,copper wires and rubber bands!!) 
![Mechanical Design](https://drive.google.com/file/d/10nyRTrfHtYdeovmf_Px_7DOKH1-CBVcZ/view?usp=sharing.JPG)

 ## Working
The model for the 3d spherical display worked on the phenomenon of Persistence Of Vision due to which if any 2 succesive images appear to our eyes in les than 1/10 th of a second then they appear to be continous,exactly the phenomenon used before in video projections .We spun our ring close to 1500 rpm which yielded a eye-soothing 25fps for displaying anything.Using the Arduino Software ,we wrote down the code for the Blinking of LEDs in such a fashion that it appears to us in the expected manner i.e. for a particular image we break it down into vertical strips and then display each vertical strip by adjusting the rgb values of the LEDs in LED strip,for that, we took the feedback of the time of rotation of the ring using a hall sensor mounted on the stand and a magnet on the ring (we tested with IR proximity sensor ,but it was no good at higher rpm) ,we supplied power to the motor using a Li/Po 12V battery and to the Led strip using the 12V,2A Adapter via a slip ring that we made ourselves since it was really costly(1500Rs) and of large size(the one available in the market). 
# Limitations
 - At present we are able to diaplay 4-5 alphabet words since the adrduino UNO clock has least delay of 1ms ,the individual vertical strips expanded due to a large time difference between them, which made the letters wide. 
 - At present ,if we try to show some images ,they appear distorted due to the above limitation and the unavailability of higher density LED strip.
 - The present slip ring isn't that efficient in, it when operated at angular velocity higher than 1500 rpm,it starts to show noise in the data cable, making the display bad.
 # Future Improvements
 - To increase the number of alphabets covered.
 - To display images and if more advanced ,videos.
 
  
 For Videos [Click here](https://drive.google.com/drive/folders/1WID6ml3QWSvtVuDsnx-lnMgWXt9H_xex?usp=sharing)
  
