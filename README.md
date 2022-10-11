## Table of contents
* [General info](#general-info)
* [Technologies](#technologies)
* [Setup](#setup)
* [Usage](#usage)
* [Project Status](#project-status)
* [Room for Improvement](#room-for-improvement)
* [Contact](#contact)

## General info
This project is a simple C application for counting votes in polls and elections
	
## Technologies
Project is created with:
* C programming language
* Standard C libraries **std.io** and **stdbool.h**
* The **conio.h** C library
	
## Setup
* To run this project, you will need to compile the `presidentialelection.c` file
* Here's a tutorial on how to [compile C files using GCC](https://gist.github.com/alandsilva26/53cd2fecf253554c2f671766d3df5d66)

## Usage
To use this application, you need to type in a integer number between 0 and 6. Each number does the following:
* Choosing a number between 1 and 4 adds a vote for the chosen candidate
* Number 5 adds a whitevote
* Number 6 adds a null-vote 
* Choosing number 0 ends the poll and prints results of election


After typing a number, it will print a message informing the user of his choice.

Example:
```
Type your candidate number: 1
```
```
You voted on candidate 1
```

## Project Status
Project is: _complete_. 

I do not plan on working in this project anymore since it was originally meant for educational purposes, but there's room for improvement

## Room for Improvement
Room for improvement:
- You can only choose a candidate by typing a numerical value. It would be good to choose a candidate by its name (possibly in a list).
- I did not use _arrays_, which could be an interesting option when choosing between a greater number of candidates.

To do:
- Right now, typing a value that is non-integer (such as *char* or *string*) breaks the application. It would be good to improve the vote validation to avoid errors.

## Contact
Created by [Marques Henrique](https://github.com/marqueshenriquesilva) - feel free to contact me!

## License
This project is open source and available under the the [GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html)

