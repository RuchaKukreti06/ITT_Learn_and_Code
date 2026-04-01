# Java Exception Handling: `try`, `catch`, and `finally`

In Java, exception handling is built around three keywords:

---

### 🔹 `try`
- Contains code that **might fail**
- Defines a boundary where Java watches for problems

### 🔹 `catch`
- Handles exceptions thrown in the `try` block
- Prevents the program from crashing

### 🔹 `finally`
- Contains code that **always executes**
- Used for **cleanup**, regardless of success or failure

---

## How `try` Must Be Followed

Java enforces that a `try` block must be followed by:

- At least one `catch` **OR**
- A `finally` block

This ensures that every `try` block has:

- **Error handling**, or
- **Cleanup responsibility**, or both

---

## 1. `try + catch`

### Purpose
Handle exceptions and allow program recovery

### Example

try {
    int result = 10 / 0;
} catch (ArithmeticException exception) {
    System.out.println("Handled exception");
}

---

## 2. `try + finally`

### Purpose
Ensure cleanup happens, even if an exception occurs, without handling the exception

### Example

try {
    System.out.println("Processing data");
    int x = 10 / 0;
} finally {
    System.out.println("Releasing resources");
}

Note: If an exception occurs in `try`, it will still propagate after `finally` executes.

### Use Cases
- Resource management (files, database, sockets)
- Lock handling (multithreading)
- Logging / auditing

### Example Scenarios
- Closing a database connection
- Releasing file handles
- Unlocking a thread lock

---

### Key Applications of Try-Finally

- **Resource Management (files, database, sockets)**  
  Ensures that resources like file streams, database connections, or network sockets are properly closed after use, preventing memory leaks and resource exhaustion.

- **Lock Handling (multithreading)**  
  Guarantees that locks acquired during execution are always released, even if an exception occurs, avoiding deadlocks and ensuring smooth thread coordination.

- **Logging / Auditing**  
  Allows critical logging or audit actions to be executed regardless of success or failure, helping in debugging, monitoring, and maintaining system reliability.

- **Transaction Management (databases)**  
  Ensures that transactions are properly committed or rolled back, and any related resources are cleaned up, maintaining data consistency even when errors occur.

- **UI State Cleanup (applications with GUI)**  
  Guarantees that UI elements (like loading spinners, disabled buttons, or progress bars) are reset to their normal state after an operation, even if it fails.

- **Temporary Resource Handling (files, cache, temp data)**  
  Ensures temporary files, cached data, or intermediate results are deleted or cleared after use, preventing unnecessary storage usage and keeping the system clean.