/*
  Feeding experimentation device 3 (FED3)
  Fixed Ratio 1
  alexxai@wustl.edu
  December, 2020

  This project is released under the terms of the Creative Commons - Attribution - ShareAlike 3.0 license:
  human readable: https://creativecommons.org/licenses/by-sa/3.0/
  legal wording: https://creativecommons.org/licenses/by-sa/3.0/legalcode
  Copyright (c) 2020 Lex Kravitz
*/

#include <FED3.h>                                       //Include the FED3 library 
String sketch = "RD";                                  //Unique identifier text for each sketch
FED3 fed3 (sketch);                                     //Start the FED3 object


int numbers[] = {3, 5}; // Your integer array
int arraySize = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size


void setup() {
  //fed3.FED3Menu = true;
  fed3.begin();                                         //Setup the FED3 hardware
  fed3.DisplayPokes = 1;
  fed3.activePoke = 2; // both nosepokes active
}

void loop() {
  fed3.run();                                           //Call fed.run at least once per loop
  // pick random delay
  int randomIndex = random(arraySize); // Generate a random index within the array size
  int randomNumber = numbers[randomIndex]; // Get the element at the random index
  fed3.TaskDelay = randomNumber;
  if (fed3.Left) {                                      //If left poke is triggered
    fed3.logLeftPoke(); 
    fed3.Timeout(fed3.TaskDelay);
    fed3.Feed();
  }

  if (fed3.Right) {                                     //If right poke is triggered
    fed3.logRightPoke();                                //Log right poke
    fed3.Timeout(fed3.TaskDelay);
    fed3.Feed();
  }
}