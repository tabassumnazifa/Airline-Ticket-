# Airline-Ticket-
## Author: Nazifa Tabassum
This is a simple console-based C++ project that simulates an airline ticket booking system. It allows users to choose a travel destination, select a class (Business/Economy), and proceed with payment using online platforms like Bkash or Credit Card, or choose cash payment at the counter.

### 💻 Features
Choose from five international destinations: Japan, China, USA, Singapore, and Dubai.
Select your preferred class:
- Business Class
- Economy Class

### Input and store:
- Passenger Name
- Contact Number
- Email Address
- Multiple payment options:

## Online Payment:
- Bkash
- Credit Card
Cash Payment at the counter
Displays confirmation message and ticket details after successful booking.

### 📁 Project Structure
- tour class: Base class containing user information and class selection.
- japan class: Inherits from tour, includes pricing and payment handling.
- china, USA, Singapur, Dubai: Inherit from both tour and japan and override the registration method with destination-specific pricing.

### 🛠 Technologies Used
- C++
- Console I/O (cin, cout)
- Inheritance and basic OOP principle

Here's some output screenshot for better understanding:
