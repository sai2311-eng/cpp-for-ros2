# C++ for ROS 2

Learning C++ from zero, on the way to writing ROS 2 nodes in `rclcpp`.

I'm a mechanical engineer building toward robotics. My ROS 2 work so far is in Python, and `rclpy` was the right place to start — but the parts of a robot that have to hit a deadline are written in C++, so this is me closing that gap deliberately rather than avoiding it.

This repository is the log. It is not a portfolio piece. It is beginner code, kept in the order I wrote it, because the point is the slope and not any single file.

---

## Where I am

**Stage 1 — complete.** All 50 exercises of a C++ basics challenge, started 1 September 2026.
**Stage 2 — started.** Arrays and `std::vector`, then references and pass-by-reference from learncpp.com.

| Folder | Exercises | What I was actually learning |
|---|---|---|
| `01_basics_challenge/01_conditionals` | `01`–`09` | `if` / `else if` / `else`, comparison and logical operators, `&&` and `\|\|` precedence, string comparison |
| `01_basics_challenge/02_switch` | `10` | Branching on a `char`, and why every case needs its `break` |
| `01_basics_challenge/03_for_loops` | `11`–`19` | Range-based `for` over an initializer list, counted `for`, counters, accumulators, and `static_cast<double>` to stop integer division truncating an average |
| `01_basics_challenge/04_while_loops` | `20`–`22` | `while` loops that stop on a sentinel value (0) |
| `01_basics_challenge/05_digit_manipulation` | `23`–`50` | The digit loop — `% 10` takes the last digit, `/ 10` drops it — used to sum, count, reverse and search digits; `bool` flags and `break` |
| `02_arrays` | `00`–`11` | Fixed-size arrays, `std::vector` sized at run time, input validation, tracking a value and its index, a 3-D array |
| `03_compound_types` | `01`–`05`, plus `reference_practice/01`–`06` | Functions, pass by value vs. pass by reference (`int&`), modifying the caller's variables, swapping through references |

Every file starts with a comment saying what it does and which concepts it practises. Files ending in `_repeat` are exercises I wrote a second time.

**Bugs are fixed, and the fix is written down.** Where a program had a bug, a `FIXED:` note at the top of the file says what was wrong and how it was fixed, so the lesson isn't lost — and `git log` still has the original code. `IMPROVED:` marks changes that make already-correct code clearer. Some exercises were first written to correct an earlier one: `15` was my redo of the average in `14`, and `02_arrays/10` was the first to check the size before creating the vector.

---

## The roadmap

Four stages, in order. Each one exists to unlock the next.

| | Stage | Source | Focus |
|---|---|---|---|
| 1 | **Basics** | [W3Schools C++](https://www.w3schools.com/cpp/) | Syntax, conditionals, loops, I/O — enough to write something that runs |
| 2 | **Advanced** | [learncpp.com](https://www.learncpp.com/) | Functions and scope, arrays and vectors, pointers and references, classes, inheritance, memory |
| 3 | **Practice** | ChatGPT-generated tasks | Problems I haven't seen before, to prove the concepts actually stuck rather than the tutorial did |
| 4 | **ROS 2 in C++** | `rclcpp` | Nodes, publishers and subscribers, services, parameters, launch — the same concepts I already know in `rclpy`, rewritten |

**Stage 2 is the one that matters.** A ROS 2 node *is* a class that inherits from `rclcpp::Node` and calls a base-class constructor. Until classes and inheritance are solid, `rclcpp` is unwritable — which is exactly why stage 4 sits behind stage 2 and not beside it.

Stage 3 runs alongside 1 and 2 rather than after them. Reading C++ and writing C++ are different skills, and only one of them is the point.

---

## Layout

```
01_basics_challenge/      the 50-exercise basics challenge
    01_conditionals/
    02_switch/
    03_for_loops/
    04_while_loops/
    05_digit_manipulation/
02_arrays/                arrays and std::vector
03_compound_types/        functions, pass by value and by reference
    reference_practice/
extras/                   side experiments outside the challenge
```

Each file keeps the number I originally gave it as a prefix, so reading a folder top to bottom is reading it in the order I wrote it.

`extras/firstcode.cpp` is the first line of C++ I ever wrote. It does not compile — no `#include`, no `main()`. It is kept exactly as it was.

---

## Build

Any single file, with g++ 13.3.0 on Ubuntu 24.04:

```bash
g++ -std=c++23 -Wall -Wextra 01_basics_challenge/05_digit_manipulation/24_reverse_number.cpp -o reverse && ./reverse
```

`-Wall -Wextra` is not decoration here — it is how I catch the uninitialised reads and narrowing conversions that this stage of learning produces.

---

*Part of a wider robotics track: ROS 2 Jazzy, micro-ROS on an ESP32, and a differential-drive robot I designed in Fusion 360 and printed at home. See [my profile](https://github.com/sai2311-eng).*
