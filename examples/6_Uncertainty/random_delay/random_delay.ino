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

String sketch = "UNC";
FED3 fed3 (sketch);                                     //Start the FED3 object


int numbers[] = {2,5,0,0,13,0,33,0,0,3,9,0,0,0,0,141,6,0,78,0,1,17,11,0,0,0,43,0,25,7,3,0,2,0,84,6,0,6,99,0,0,93,0,97,119,3,0,0,27,0,0,0,63,0,30,0,20,52,0,71,0,3,0,16,10,0,2,24,11,0,0,22,9,0,0,35,0,82,3,7,29,0,0,11,0,4,0,20,1,0,0,0,17,87,35,5,6,0,107,0,0,0,22,0,91,0,2,1,5,7,0,0,0,0,0,0,0,11,25,0,0,3,0,0,0,0,21,0,0,0,1,53,2,21,3,18,0,3,0,145,3,8,0,16,100,0,0,1,134,2,18,8,0,0,4,7,0,24,7,29,0,4,0,33,55,39,0,34,0,0,2,0,0,0,0,0,0,1,0,4,58,74,24,116,0,0,0,1,2,18,0,3,85,0,0,0,0,35,71,0,36,0,0,0,7,0,91,0,1,2,5,64,6,0,5,0,0,6,6,0,0,9,6,67,24,0,4,15,0,104,7,0,11,16,41,11,103,0,0,0,0,3,16,0,4,0,0,100,2,0,13,104,62,20,0,146,0,59,118,20,138,0,48,0,0,60,84,0,2,0,14,91,0,0,0,0,0,0,0,3,0,3,0,103,10,0,17,0,0,2,0,4,18,66,0,1,59,0,0,0,21,0,0,0,19,34,0,0,0,10,25,22,0,0,71,0,12,0,0,0,0,15,7,0,0,0,32,0,2,41,30,47,0,5,0,31,78,36,0,0,1,0,131,4,55,76,0,3,0,0,0,143,18,0,52,1,0,11,0,0,0,0,0,0,42,20,127,121,1,0,0,86,12,0,19,10,8,0,1,3,0,0,115,0,0,0,123,3,4,2,0,2,9,2,0,11,0,50,0,6,0,1,0,0,0,1,5,0,14,5,0,2,12,0,64,39,133,0,2,0,45,14,3,0,74,36,25,2,4,2,4,22,6,2,0,0,0,0,143,5,93,5,12,10,0,0,10,0,21,41,125,14,0,51,0,0,5,12,0,0,0,0,0,0,104,0,25,100,29,22,0,66,119,5,0,22,2,0,41,0,0,0,0,6,0,0,0,0,0,14,0,7,0,20,0,0,0,0,0,3,0,0,0,2,74,107,0,0,0,29,30,0,13,45,25,0,0,0,92,5,0,1,0,0,41,0,1,0,12,0,21,28,62,22,0,25,0,0,3,118,0,0,0,0,0,0,71,67,0,21,0,11,1,0,47,2,2,99,133,0,11,0,109,32,0,0,0,0,0,9,10,0,0,1,0,45,0,3,0,26,1,2,0,1,3,0,0,46,0,0,144,3,16,44,2,46,0,139,12,19,0,0,0,2,11,13,2,0,4,60,12,0,0,9,0,0,79,0,16,0,0,64,11,0,0,5,0,56,69,0,2,2,29,0,134,0,30,0,0,16,0,150,3,0,0,0,0,46,56,101,2,80,119,2,1,0,0,85,33,0,0,0,77,5,5,90,0,0,75,112,0,0,0,1,2,0,0,0,14,13,111,2,0,0,0,138,5,0,0,109,0,13,0,0,18,32,0,16,0,124,0,50,0,92,0,2,0,1,0,0,0,1,0,0,147,47,0,0,19,2,52,0,2,1,104,0,1,0,0,2,45,74,1,0,0,0,20,47,0,0,6,64,122,0,17,0,9,0,0,0,0,0,54,0,0,0,139,2,8,0,0,8,20,45,45,1,2,28,1,12,0,104,0,14,0,0,0,99,32,96,1,1,0,0,2,0,1,0,3,78,105,0,0,48,2,1,0,5,76,0,149,0,1,0,0,0,13,0,5,0,0,0,146,70,0,0,97,1,0,12,34,0,5,3,11,0,16,95,0,121,0,0,0,23,24,26,5,0,11,0,29,0,103,7,0,0,0,26,0,37,0,31,0,5,117,0,22,0,0,106,142,0,9,0,104,6,13,0,3,16,0,4,0,0,0,0,146,0,115,0,49,33,3,12,13,71,0,0,1,0,0,0,1,0,3,11,0,24,0,3,26,0,6,57,15,23,27,0,8,0,2,8,0,16,4,3,0,15,10,0,0,22,0,0,0,3,1,58,16,77,0,139,0,7,15,0,0,0,1,13,0,0,54,3,16,0,0,0,0,20,130,0,0,73,13,19,29,17,30,0,9,0,0,0,61,0,0,88,0,0,0,19,4,0,131,88,7,0,81,95,0,97,2,0,0,24,2,41,1,0,8,0,0,0,1,2,3,0,0,122}; // Your integer array
int arraySize = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size

// variable declaration
int Uncertainty = 0;



void setup() {
  // open menu
  fed3.ClassicFED3 = true;
  //fed3.FED3Menu = true;
  fed3.begin();                                         //Setup the FED3 hardware
  fed3.DisplayPokes = 1;
  fed3.activePoke = 2; // both nosepokes active
  // set session type
  if (fed3.FEDmode == 0) {
    fed3.sessiontype = "baseline";
  }
  if (fed3.FEDmode == 1) {
    fed3.sessiontype = "certainty";
  }
  if (fed3.FEDmode == 2) {
    fed3.sessiontype = "uncertainty";
  }
}

void loop() {
  fed3.run();                                           //Call fed.run at least once per loop

  if (fed3.FEDmode == 2){
    // pick random delay
    int randomIndex = random(arraySize); // Generate a random index within the array size
    int randomNumber = numbers[randomIndex]; // Get the element at the random index
    fed3.TaskDelay = randomNumber;
  }
  if (fed3.FEDmode == 0 | fed3.FEDmode == 1){
    fed3.TaskDelay = 15; // this is already defined in header files, thus not necesary, only here to be super explicit
  }
  if (fed3.Left) {                                      //If left poke is triggered
    fed3.logLeftPoke(); 
    fed3.Timeout(fed3.TaskDelay);
    fed3.ConditionedStimulus(1000);
    fed3.Feed();
  }

  if (fed3.Right) {                                     //If right poke is triggered
    fed3.logRightPoke();                                //Log right poke
    fed3.Timeout(fed3.TaskDelay);
    fed3.ConditionedStimulus(1000);
    fed3.Feed();
  }
}
