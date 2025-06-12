# LogicMaze++

A terminal-based maze puzzle adventure game built using modern C++.

## 🚀 Features

- Random maze generation (selected from predefined files)
- Player navigation with WASD
- Puzzle tiles (`P`) trigger logic questions
- Trap tiles (`T`) reduce life
- 3 lives system
- Clear terminal interface with tile types
- Easy to extend with more puzzles, traps, or logic

## 🧩 Tile Legends

| Symbol | Meaning            |
|--------|--------------------|
| `S`    | Start position     |
| `G`    | Goal/Destination   |
| `#`    | Wall (impassable)  |
| ` `    | Free path          |
| `T`    | Trap (lose life)   |
| `P`    | Puzzle (answer to continue)

---

## 🛠️ How to Build

```bash
g++ src/*.cpp -o LogicMaze
./LogicMaze
