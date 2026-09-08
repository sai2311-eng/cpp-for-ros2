# C++ for ROS 2

Learning C++ from zero, on the way to writing ROS 2 nodes in `rclcpp`.

I'm a mechanical engineer building toward robotics. My ROS 2 work so far is in Python, and `rclpy` was the right place to start — but the parts of a robot that have to hit a deadline are written in C++, so this is me closing that gap deliberately rather than avoiding it.

This repository is the log. It is not a portfolio piece. It is beginner code, kept in the order I wrote it, because the point is the slope and not any single file.

---

## Where I am

**17 of 50** exercises in a C++ basics challenge. Started 1 September 2026.

| Exercises | Topic | What I was actually learning |
|---|---|---|
| `1`–`9` | Conditionals | `if` / `else if` / `else`, comparison and logical operators, `&&` and `\|\|` precedence, string comparison |
| `10` | `switch` | Branching on a `char`, and why every case needs its `break` |
| `11`–`15` | Range-based `for` | Iterating an initializer list, counters, accumulators, and `static_cast<double>` to stop integer division truncating an average |
| `16`–`17` | Counted `for` | Classic `for (int i = 1; i <= N; i++)`, building a multiplication table and filtering multiples |

Next: functions and scope, then arrays and vectors, then classes — because a ROS 2 node *is* a class that inherits from `rclcpp::Node` and calls `super`-equivalent constructors. That's the whole reason this repo exists.

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
