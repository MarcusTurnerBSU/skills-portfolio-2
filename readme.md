# CodeLab I (CCO4000-20)

## Skills Portfolio 2

The Skills Portfolio presents a series of coding challenges that are designed to test each of the fundamental programming techniques introduced through the course of the CodeLab I module. This second test features the switch statement, loops and arrays. Make sure you read questions carefully before starting your solution, the marks available for each exercise are indicated. Some additional marks are available for the optional features.

___
___


## Instructions

* Create a new project for each exercise
* Ensure you save this project inside the *exercises* folder of your repository
* Once you have completed the exercises write a simple commit message in Github Desktop (e.g. "Exercises Completed")
* Finally push your solutions back to Github, do not forget this step. Code not pushed back to Github cannot be marked. Before you leave the room double check you work has successfully submitted.

___
___


## Exercises

### Exercise 1: Pizza Order Switch
*Marks Available: 15*

Write a program that outputs a users Pizza order using a SWITCH statement. The program should:

* Ask the user to enter their first name
* Output the following menu to the user and accept their input

```
Welcome to the Pizza Shop. What would you like?
1) Margherita
2) Pepperoni
3) Meat Feast
4) Veg Supreme
```

* Use a switch statement to evaluate the chosen option and print out the users name and pizza order via the respective cases, e.g. *"Jake your Margherita pizza is on its way."*

* The switch statement should provide appropriate feedback if the user inputs an out of range menu choice (e.g. 5, 6, 7, etc).

#### Additional Features (Optional)
*Marks Available: 7*

* Enhance the program so the user can input their full name.
* Implement appropriate error checking to prevent the user from entering letters

___
___


### Exercise 2: Would you like to continue
_Marks Available: 10_

Write a program that implements a while loop. This program should ask the user if they would like to continue and use the while loop to keep looping as long as they enter the letter Y. Use the pseudo-code below for reference.

```
PROGRAM START

charVariable = Y

WHILE charVariable is Y
    code you want to loop
END WHILE

output goodbye message

PROGRAM END
```

#### Additional Features (Optional)
*Marks Available: 2*

* Allow for both upper and lowercase Y

___
___


### Exercise 3: Array In and Out
_Marks Available: 15_

Complete the following code so the user can enter 10 values into an array and have the program then output these values.

```C++
#include <iostream>
#include <string>
using namespace std;

int main(){

    _________ // declare array
    cout << "Please enter ten values" << endl;
    for(){ //complete the for loop and input into array

    }
    //output two new lines
    //output header message telling the users these are the numbers they entered
    //write a for loop that outputs the array values

    return 0;
}
```
