# Deadlock-Detection System

A simulation of deadlocks in resource allocation scenarios, designed to identify and resolve deadlocks efficiently. This project leverages a **Wait-for Graph-based detection algorithm** to identify deadlocks and implements a recovery mechanism to resolve them. It also includes a **visualization feature** to monitor the system state in real time, showcasing process statuses and resource allocation.

---

## 🚀 Features

- **Deadlock Simulation**: Simulates scenarios to demonstrate deadlocks in resource allocation.
- **Wait-for Graph Detection**: Identifies deadlocks dynamically using graph-based detection algorithms.
- **Recovery Mechanism**: Resolves deadlocks via process termination or reallocation strategies.
- **Real-Time Visualization**: Displays system state, process statuses, and resource allocation graphically for easier analysis.
- **Scalability**: Designed to handle scenarios with multiple processes and resources effectively.

---

## 🛠 Tech Stack

- **Programming Language**: C
- **Algorithms**: Resource Allocation Algorithms, Wait-for Graph Detection
- **Tools**: Visualization Library (custom implementation in C), File I/O for state saving/loading

---

## 📁 Project Structure

```
├── src/
│   ├── main.c          # Entry point for the system
│   ├── deadlock.c      # Core deadlock detection and resolution logic
│   ├── visualization.c # Visualization code for system states
│   └── utils.c         # Helper functions for resource allocation and process management
├── include/
│   ├── deadlock.h      # Header file for deadlock functionality
│   ├── visualization.h # Header file for visualization functionality
│   └── utils.h         # Header file for utility functions
├── tests/
│   ├── test_cases.c    # Test cases for various deadlock scenarios
├── Makefile            # Automates compilation
└── README.md           # Documentation
```

---

## 📜 Usage

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/tharun123ds/Deadlock-Detection.git
   cd Deadlock-Detection
   ```

2. Compile the project:

   ```bash
   make
   ```

3. Run the system:
   ```bash
   ./deadlock_detector
   ```

### How to Simulate a Deadlock

1. Provide input for processes and resources via a configuration file or command-line arguments.
2. Monitor the system's state visualization to identify potential deadlocks.
3. Use the recovery mechanism to resolve detected deadlocks.

---

## 🌟 Key Algorithms

### Wait-for Graph Detection

The system constructs a **Wait-for Graph** dynamically, where:

- Nodes represent processes.
- Directed edges represent dependencies between processes due to resource allocation.

**Deadlock Detection**: A cycle in the graph indicates a deadlock.

### Deadlock Recovery

Once a deadlock is detected, the system:

1. Terminates one or more processes involved in the deadlock (priority-based).
2. Releases their resources for reallocation.

---

## 📊 Visualization

The system uses a simple console-based visualization to display:

- Current allocation of resources to processes.
- Processes waiting for resources.
- Deadlocks detected (if any).

---

## 🧪 Testing

Test the system using predefined scenarios or your custom configurations.  
Run the test cases provided:

```bash
make test
./tests/test_cases
```

---

## 🤝 Contributions

Contributions are welcome to enhance this project! Follow these steps:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add your message"
   ```
4. Push to the branch:
   ```bash
   git push origin feature-name
   ```
5. Submit a pull request.

### Areas for Contribution

- Optimize deadlock detection algorithms.
- Add advanced visualization features using graphical libraries.
- Implement more sophisticated recovery mechanisms (e.g., priority-based resource reallocation).

---

## 💼 Why This Project?

This project demonstrates advanced skills in **system-level programming**, **algorithm implementation**, and **problem-solving** in resource management. It highlights:

- Proficiency in **C programming**.
- Knowledge of **resource allocation strategies** and **deadlock management**.
- Ability to visualize and debug complex systems effectively.

This project is a strong testament to my expertise in solving real-world problems with efficient algorithms and clean code.

---

## 📧 Contact

Feel free to reach out if you have any questions or suggestions!

- **Email**: tharunds123@gmail.com
- **LinkedIn**: [LinkedIn](https://www.linkedin.com/in/tharun-d-s-a2a3b5253/)

---
