# C++ for ROS 2

Learning C++ from zero, on the way to writing ROS 2 nodes in `rclcpp`.

I'm a mechanical engineer building toward robotics. My ROS 2 work so far is in Python, and `rclpy` was the right place to start — but the parts of a robot that have to hit a deadline are written in C++, so this is me closing that gap deliberately rather than avoiding it.

This repository is the log. It is not a portfolio piece. It is beginner code, kept in the order I wrote it, because the point is the slope and not any single file.

---

## Where I am

**Stage 1 — 17 of 50** exercises in a C++ basics challenge. Started 1 September 2026.

| Exercises | Topic | What I was actually learning |
|---|---|---|
| `1`–`9` | Conditionals | `if` / `else if` / `else`, comparison and logical operators, `&&` and `\|\|` precedence, string comparison |
| `10` | `switch` | Branching on a `char`, and why every case needs its `break` |
| `11`–`15` | Range-based `for` | Iterating an initializer list, counters, accumulators, and `static_cast<double>` to stop integer division truncating an average |
| `16`–`17` | Counted `for` | Classic `for (int i = 1; i <= N; i++)`, building a multiplication table and filtering multiples |

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
src/       the 50-challenge exercises, numbered as I wrote them
extras/    side experiments outside the challenge
```

`extras/firstcode.cpp` is the first line of C++ I ever wrote. It does not compile — no `#include`, no `main()`. It is kept exactly as it was.

---

## Build

Any single file, with g++ 13.3.0 on Ubuntu 24.04:

```bash
g++ -std=c++17 -Wall -Wextra src/14.cpp -o build_out && ./build_out
```

`-Wall -Wextra` is not decoration here — it is how I catch the uninitialised reads and narrowing conversions that this stage of learning produces.

---

*Part of a wider robotics track: ROS 2 Jazzy, micro-ROS on an ESP32, and a differential-drive robot I designed in Fusion 360 and printed at home. See [my profile](https://github.com/sai2311-eng).*
