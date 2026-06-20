# Ride-Booking-System
A C++ ride-booking simulation that matches passengers with the closest available driver using a custom Min-Heap and a waitlist Queue.
# Ride Booking System

A console-based Ride Booking System implemented in C++. This system allows users to view drivers, book rides with the nearest available driver using a custom **Min-Heap**, update driver locations, and add new drivers. A **Queue** system is integrated to handle ride requests when no drivers are available.

## 🚀 Features

* **Real-time Matching:** Uses a Min-Heap data structure to efficiently find and extract the nearest available driver in $O(\log n)$ time.
* **Dynamic Updates:** Supports changing a driver's distance and immediately updating their position within the heap (`updateKey`).
* **Request Queueing:** Built-in Queue to manage ride waitlists when the heap runs out of available drivers.
* **Data Validation:** Robust custom string-to-integer parsing (`isNmbr` and `Integerconv`) to ensure safe user ID inputs.

---

## 🛠️ Project Structure

The project consists of the following source files:

| File Name | Description |
| :--- | :--- |
| `Driver.h` / `Driver.cpp` | Defines the `Driver` class containing basic attributes (ID, Name, Distance, Availability). |
| `MinHeap.h` / `MinHeap.cpp` | Implements a min-heap utilizing `HeapNode` elements to sort drivers by proximity. |
| `Queue.h` / `Queue.cpp` | Implements a standard FIFO (First-In, First-Out) array-based queue for waiting passengers. |
| `RideSystem.h` / `RideSystem.cpp` | Acts as the controller, managing interactions between the Heap, Queue, and the list of drivers. |
| `main.cpp` | Provides the text-based user interface (UI) menu to drive the system. |

---

## 💻 How to Compile and Run

### Using a Standard C++ Compiler (G++)

Open your terminal or command prompt in the project directory and run the following command to compile all the source files together:

```bash
g++ main.cpp Driver.cpp MinHeap.cpp Queue.cpp RideSystem.cpp -o RideBookingSystem
