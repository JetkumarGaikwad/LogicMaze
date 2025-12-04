# 🧩 LogicMaze: A C++ Terminal-Based Puzzle Adventure

LogicMaze is a **terminal-based maze and puzzle adventure game** developed using modern **C++**. It challenges players to navigate a procedural maze environment while solving logic puzzles and avoiding traps.

---

## ✨ Features

This project delivers a complete, engaging, and extensible gameplay experience built around the following core features:

* **Procedural Maze Generation:** Mazes are randomly selected and loaded from a collection of predefined text files, ensuring replayability.
* **Intuitive Navigation:** Players control their movement within the terminal using standard **WASD** input.
* **Integrated Life System:** The game incorporates a **three-life system**, providing a challenge where the player must avoid traps to succeed.
* **Logic Puzzles (`P`):** Encountering a Puzzle tile immediately triggers a **logic question** that the player must answer correctly to proceed.
* **Hazardous Traps (`T`):** Landing on a Trap tile results in the **loss of one life**.
* **Clear Interface:** The game utilizes a simple, effective terminal interface where distinct tile symbols clearly communicate the game state and environment.
* **High Extensibility:** The architecture is designed for ease of expansion, allowing developers to readily integrate new puzzles, traps, and complex logic elements.

---

## 🗺️ Environment and Tile Legend

The game map is rendered in the terminal using specific character symbols. Understanding the **Tile Legend** is essential for navigation:

* **`S` (Start Position):** Player's initial location.
* **`G` (Goal):** The destination tile required to complete the maze.
* **`#` (Wall):** An impassable boundary that blocks movement.
* **` ` (Free Path):** A clear, navigable space for the player.
* **`P` (Puzzle Tile):** Triggers a logic question; *must be solved to continue*.
* **`T` (Trap Tile):** Triggers a penalty; *results in a loss of one life*.

---

## 🏗️ Build and Run Instructions

This project is compiled using the GNU C++ compiler (`g++`).

### 1. Build Compilation

Execute the following commands in your terminal to compile the source code:

```bash
g++ src/*.cpp -o LogicMaze
