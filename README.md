# L2: Virtual Pets

## Starter code created by Dr. Jan Pearce to explore interacting classes, arrays, and pseudo-randomness
## Created for CSC 236 Data Structures at Berea College
## Original Author: Jan Pearce, Berea College

### Authors:Dimitrios Ntentia
###			Alejandro Ramos


1. **HIGH LEVEL DESIGN** and **CRC Cards**
*Complete the high-level design components and the the CRC Cards in the linked Google Doc. Submission is via Moodle.*

https://docs.google.com/document/d/10ktpUll58Hzk1FX8Og1qB_R8g_oIqHSPWX9OrnJVVNQ/edit?usp=sharing


2. **CLASSES**
*How much difficulty did you have figuring out how to create classes and get them to interact? Did the diceroll example help?*

It wasn't difficult at all, because we just took the example of the diceroll and changed the names and method, so that we can use the other class.


3. **OOP USABILITY**
*Was there anything that you tried that did not work? Explain.*

*One thing we tried to implement was a sleep timer function using the Windows.h library 
between each message printed. However, we kept getting exception errors so we omitted this idea
and decided it was best to look it up on the internet. At the end we used internet sources and we
adopted code we found online. 

4. **Big O Analysis**
*Analyze the Big O of all components of your program. This means:*
- *Analyze the Big O of all of the methods of your classes, including constructors.*
- *Also analyze the main() function and any auxillary functions.*

*Pet Class Methods
- int roll: Big O(unknown)
- string returnName: Big O(1)
- void setName: Big O(1); dictionary complexity
- void congrats: Big O(1)
- void play: Big O(n)
- void events: Big O(unkown due to randomness)
- void status: Big O(1)

Parent Class Methods
- void setName: Big O(1)
- void storyTime: Big O(1)
- string returnPetName: Big O(1)
- void congratPet: Big O(1)

- main(): Big O(n)

- No Auxillary functions
*

5. **PROCESS SUMMARY**
*Briefly summarize your design and implementation process,
including how much your initial design plan evolved,
the final results you achieved, and the amount of time you spent
as a programmer or programmers in accomplishing these results.
This should be one or at most two paragraphs.*

*Our design and implementation process did not stray to far apart from each other. 
For example, we followed our high level design and brainstormed the application of the 
code before starting. To implement our code, we first wrote it in pseudocode and then 
coded it in C++. Therefore, we did not need to alter our program and kept most of it 
the same. We believe that although it took longer for us to start our code, it took less
time to debug our code because we spent more time planning our design. *

6. **DESIGN CHALLENGES**
*Describe the primary conceptual challenges that you encountered
in trying to complete this lab and what might have made the
lab easier for you.*

*Our primary challenge was being able to share class methods with each other. 
For example, we did not know how to pass an object from the Parent class to our 
Pet class and vice versa. It was not until we went to TA hours when Azis helped us 
figure out our dilema. Azis told us to create friendly classes for both of our classes
so they are able to share information with each other. *

7. **ERRORS**
*List in bulleted form of all known errors
and deficiencies with a very brief explanation.*

* 
- So far we have no known errors however, we do not include exceptions or input handling.
Meaning if we ask for an integer and the user inputs a string, the issue is not handled. 
- 
*

8. **LEARNING AND REACTION**
*A paragraph or so of your own comments
on what you learned and your reactions to this lab.*

*
-Through this lab, we gained experience using friendly classes to pass objects and methods 
to each other. Another important aspect of this lab was implementing public and private
classes (Abstract Data Types) in our program. When we first got the lab the topic was very 
broad and general so we had no initial idea of how the organization would look like. However, 
after a fruitful discussion with each other, we set our goals and therfore, were able to plan from 
beginning to end. 
*

9. **PAIR-PROGRAMMING STATEMENT**
If you worked in a pair of programmers, you are required to use good
pair programming practices, always working together and not using 
a divide and conquer technique in which only one of you does the 
work and learns. Also, the two programmers roles should be switched
frequently--around every 20 minutes or so. If you worked alone, 
please say so. If you worked in a pair, please describe how you worked together.

* Me (Alejandro) and Dimitrios worked together as pair programmers and 
tried to used good practices. For example, we would meet in person and 
would switch out whoever was typing the code while the other person
helped with implementing ideas. Our use of GitHub branches was 
very helpful with communication and organization within our design and 
implementation process. Overall, we felt that we were effective as pair
programmers.*

10. **INTEGRITY STATEMENT**
*Please briefly describe ALL help the authors received and
all help the aurthors gave to others in completing this lab.
Also list all other references below.*

*
Alejandro Ramos
Dimitrios Ntentia
Azis
T06 - Dice Class*
sleep code line (https://en.cppreference.com/w/cpp/thread/sleep_for)

11. **REFERENCES**
- This repo contains original work by Jan Pearce
- Add additional reference(s) to ALL work that inspired this submission OR state that this is entirely original work.*
-https://www.codegrepper.com/code-examples/cpp/c+++sleep+function //We got the sleep function from this website
* https://en.cppreference.com/w/cpp/thread/sleep_for*