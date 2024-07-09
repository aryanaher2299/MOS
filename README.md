
---

# MOS Batch Operating System Simulation

## Overview

This project simulates a batch operating system using Python. The system processes a series of jobs described in a given input file, each containing a set of instructions for data manipulation and computation. The goal is to simulate the basic operations of a batch processing system, including reading, writing, and arithmetic operations on memory blocks.

## Features

- **Instruction Execution**: Supports various instructions like GD (Get Data), PD (Print Data), LR (Load Register), CR (Compare Register), BT (Branch if True), SB (Subtract), AD (Add), DV (Divide), MB (Multiply), SR (Store Register), and H (Halt).
- **Memory Management**: Simulates memory with a 2D list structure where each job can store and manipulate data.
- **File Handling**: Reads job instructions from an input file and writes output to a result file.
- **Error Handling**: Ensures correct number of instructions and data cards are processed for each job.
- **Job Execution Control**: Handles job start, execution, and termination.

## Project Structure

- `caos_mew_python.py`: The main script containing the batch operating system simulation logic.
- `input1.txt`: Sample input file containing job instructions and data.
- `python_output.txt`: File where the output of the job executions is written.

## Instructions

### Prerequisites

- Python 3.x

### Running the Simulation

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/aryanaher/MOS.git
    cd MOS
    ```

2. **Prepare the Input File**:
    - Ensure the `input1.txt` file contains the job instructions and data in the correct format.

3. **Execute the Script**:
    ```bash
    python3 caos_mew_python.py
    ```

4. **Check the Output**:
    - The results of the job executions will be written to `python_output.txt`.

### Input File Format

- The input file should follow this structure:
    ```plaintext
    $AMJ<job_id><number_of_instructions><number_of_data_cards>
    <instructions>
    $DTA
    <data>
    $END<job_id>
    ```

- Example:
    ```plaintext
    $AMJ000100050002
    GD20PD20GD30PD30H
    $DTA
    hello
    blacksheep
    $END0001
    ```

### Instructions Description

- **GD**: Get Data (Read from input)
- **PD**: Print Data (Write to output)
- **LR**: Load Register (Load data into register)
- **CR**: Compare Register (Compare register with memory)
- **BT**: Branch if True (Branch if compare result is true)
- **SB**: Subtract (Subtract from register)
- **AD**: Add (Add to register)
- **DV**: Divide (Divide register)
- **MB**: Multiply (Multiply register)
- **SR**: Store Register (Store register to memory)
- **H**: Halt (End of job)

### Functions Overview

- `load()`: Loads jobs from the input file and initiates execution.
- `execute()`: Executes the instructions of the current job.
- `MOS(loc)`: Handles service interrupts (read, write, terminate).
- `read(loc)`: Reads data from the input and stores it in memory.
- `write(loc)`: Writes data from memory to the output file.
- `terminate()`: Terminates the current job execution.
- `display()`: Displays the memory contents.

## Example

After running the simulation, the output in `python_output.txt` for the given input will include the data written by each job and a summary of the job executions.

## Contributing

Feel free to open issues or submit pull requests if you have suggestions for improvements or find any bugs.
