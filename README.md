
# Cinema Seat Manager — Console-Based Reservation System in C

## Description

This C program is a command-line application that manages cinema seat reservations. It allows users to initialize cinema halls, make reservations for available seats, cancel reservations, view hall statuses, and display all existing reservations.

The project uses **dynamic memory allocation** to handle data efficiently and follows **modular programming practices** by separating declarations into header files.

---

## Features

* Initialize one or more cinema halls with specific seat capacities.
* Make seat reservations for a specific hall by entering the user's name.
* Automatically generate a unique reservation code for each booking.
* Cancel full or partial reservations using the reservation code and user name.
* Display all cinema halls with current available and reserved seats.
* Show all user reservations including hall number, reservation code, and seat count.

---

## Project Structure

* `main.c` — contains the main menu loop and user interaction logic.
* `cinema.h` — defines data structures and declares all functions (e.g., seat management, reservation handling).
* `cinema.c` — implements the core logic and operations.

---

## Compilation & Execution

```bash
gcc src/main.c src/cinema.c -Iinclude -o cinema-seat-manager
./cinema-seat-manager
````

---

## Usage

1. Run the program.

2. Select an option from the menu:

   * **1**: Initialize cinema halls (enter the number of halls and seat count per hall).
   * **2**: Make a seat reservation (enter your full name, hall number, number of seats).
   * **3**: Cancel a reservation (enter your name and reservation code).
   * **4**: Display all cinema halls with available seats.
   * **5**: Show all active reservations.
   * **6**: Exit the application.

3. Follow the prompts to enter your data.

---

## Data Structures

```c
typedef struct salle {
    int numero;
    int nbr_reservSeige;
    int nbr_dispSeige;
} salle;

typedef struct admin {
    char nom[77];
    char id[50];
    int numero_salle;
    int siege_reserv;
} admin;
```

---

## Example Reservation Output Format

```
------------------------ Reservation Details ------------------------
Name: Alice Smith
Reservation Code: ABC123
Hall Number: 2
Seats Reserved: 4
---------------------------------------------------------------------
```

---

## Highlights & Learning Outcomes

* Modular program design using `.h` and `.c` files.
* Use of dynamic memory (`malloc`, `realloc`, `free`) to handle variable data.
* Seat availability tracking per cinema hall.
* Auto-generated reservation code system.
* Console-based user interface using a clear and structured menu.

---

## Limitations & Future Improvements

* Add input validation and error handling (e.g., prevent negative seat values).
* Enable saving and loading reservation data from files.
* Support multi-language menus (e.g., English/French).
* Create a GUI or web interface for easier interaction.
* Add search and filter options for reservations.

---

## Author

*Amine El Harrab*

---

