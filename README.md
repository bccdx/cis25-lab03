# Lab 3: Decisions, Loops, and Files
### Objective: 
The goal of this lab is to combine decision-making structures with loops to create robust, interactive programs. You will write programs that validate user input, repeat actions, calculate running totals, and perform file input/output (I/O).

This lab is meant to be completed during class in teams of up to 4 people, but may be completed individually.

## Part 1: Internet Service Provider Billing (10 points)
### Objective: 
Write a program that calculates a customer's monthly bill. This will require using if/else if/else statements and logical operators for input validation.

An internet service provider offers three different subscription packages for its customers:1

#### Package A: 
For $9.95 per month, 10 hours of access are provided. Additional hours are $2.00 per hour.

#### Package B: 
For $14.95 per month, 20 hours of access are provided. Additional hours are $1.00 per hour.

#### Package C: 
For $19.95 per month, unlimited access is provided.

### Requirements:
- Create a new C++ file named InternetBilling.cpp
- Display a menu of the three packages (A, B, C) and prompt the user to enter their choice.
- Prompt the user to enter the number of hours they used.
- Validate the user's input.
- The package choice must be 'A', 'B', or 'C' (either uppercase or lowercase).
- The hours used must be between 0 and 744 (the maximum hours in a month).
- If either input is invalid, display an error message and terminate the program.
- Use an if/else if chain to handle the different package choices.
- Inside your logic for packages A and B, use an if statement to check if the user exceeded their allotted hours. If they did, calculate the overage charges.
- Calculate the total monthly bill.
- Display the total bill, formatted to two decimal places.

### Example Output 1 (Package B with overage):
```
Select a subscription package (A, B, or C): B
Enter the number of hours used: 25
Your total amount due is: $19.95
```

### Example Output 2 (Invalid Input):
```
Select a subscription package (A, B, or C): Z
Invalid package choice. Please run the program again and select A, B, or C.
```

## Part 2: Sum of Numbers (10 points)
### Objective: 
Write a program that asks the user for a series of positive numbers and calculates their sum. This will require using a while loop and an accumulator variable.

### Requirements:
- Create a new C++ file named SumOfNumbers.cpp
- The program should ask the user to enter a positive integer to be added to the sum.
- The program should continue to ask for numbers and add them to a running total until the user enters a - negative number.
- A negative number is a sentinel value—it signals the end of the input but should not be included in the s- um.
- Once the user enters a negative number, the loop should terminate, and the program should display the final sum of all the positive numbers entered.

### Example Output:
```
Enter a positive number to add to the sum, or a negative number to quit: 10
Enter a positive number to add to the sum, or a negative number to quit: 20
Enter a positive number to add to the sum, or a negative number to quit: 5
Enter a positive number to add to the sum, or a negative number to quit: -1

The final sum is: 35
```

## Part 3: Temperature Logger and Analyzer (20 points)

### Objective: 
First, you will write a program that logs daily high temperatures to a file. 

Second, you will write a program that reads from that same file to calculate the average temperature.

### Program 1: The Logger
- Create a new C++ file named TempLogger.cpp
- Ask the user how many days of temperatures they would like to record.
- Use a for loop that runs for that many days.
- Inside the loop, prompt the user for the high temperature for each day
- Write each temperature to a file named temperatures.txt. Each temperature should be on a new line.
- You will need to use an ofstream object.

### Program 2: The Analyzer
- Create a new C++ file named TempAnalyzer.cpp
- This program should open the temperatures.txt file created by the logger.
- Use an ifstream object and a while loop to read all the numbers from the file.
- As you read the numbers, you need to keep track of two things:
- The count of how many numbers have been read.
- The sum of all the numbers (use an accumulator).
- After the loop completes at the end of the file, calculate the average temperature.
- Display the number of days recorded and the calculated average temperature, formatted to one decimal place.

### Running TempLogger:
```
How many days of temperatures would you like to record? 3
Enter temperature for Day 1: 75.5
Enter temperature for Day 2: 80.2
Enter temperature for Day 3: 72.8
(This creates a file temperatures.txt containing 75.5, 80.2, and 72.8 on separate lines)
```

### Running TempAnalyzer:
```
Temperatures analyzed for 3 days.
The average temperature was: 76.2
```

## Submission:
When you are finished, please submit the source code for all three parts in a Git repository. Include a README.md file that includes the names of all contributors and what their contribution was.
