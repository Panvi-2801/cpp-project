# 🎮 ✨ TIC TAC TOE ✨ 🎮

---

## 🧠 **PROJECT OVERVIEW**

This is a high-performance **console-based Tic Tac Toe game developed in C++** using the **Object-Oriented Programming (OOP)** paradigm. 

The project features a human player competing against a strategic AI opponent 🤖 capable of offensive and defensive decision-making through predictive simulation.

---

## 🎯 **OBJECTIVE**

*   **Professional Development:** Transition from basic procedural logic to an industry-standard **Class-based structure**.
*   **AI Implementation:** Apply a "Look-Ahead" strategy to simulate game outcomes before making a move.
*   **Data Integrity:** Use **Encapsulation** to protect game states and logic from external interference.

---

## ⚙️ **FEATURES**

*   💎 **Encapsulated Class:** Unified management of the game board, symbols, and logic within one class.
*   🤖 **Smart AI Opponent:** Prioritizes winning moves and active blocking of the player's victory paths.
*   🏆 **Instant State Detection:** Real-time scanning for Wins, Losses, or Draws.
*   ❌ **Robust Validation:** Error handling for invalid inputs or occupied cells to ensure smooth gameplay.
*   🔄 **Modular Architecture:** Clean, reusable, and professional code structure.

---

## 🧠 **COMPUTER AI LOGIC**

The AI utilizes a **Priority-Based Decision Tree** using predictive simulation:

1.  **Attack (Win):** The AI simulates placing an 'O' in every empty spot to find a move that results in an immediate win.
2.  **Defense (Block):** If it cannot win, it simulates placing an 'X' to check if the player is about to win; if so, it strategically blocks that spot.
3.  **Backtracking:** Uses a `temp` variable to "test" moves and undo them, ensuring the actual board remains unchanged during calculation.
4.  **Randomization:** If no strategic move exists, it selects an available spot using `rand()`.

---

## 🕹️ **HOW TO PLAY**

*   The board is a **3x3 Grid** numbered **1 through 9**.
*   The Player is **X** ❌ and the Computer is **O** ⭕.
*   Enter a number (1-9) to place your mark on the corresponding cell.
*   The first to align **three marks** (Horizontal, Vertical, or Diagonal) wins!

---


## 🎮 **BOARD LAYOUT**

| **1** | **2** | **3** |
| :---: | :---: | :---: |
| **4** | **5** | **6** |
| **7** | **8** | **9** |
 7 | 8 | 9
## 🔄 **GAME FLOW**

The program follows a strictly encapsulated sequence managed by the `play()` method:

1.  🚀 **Initialization:** The `TicTacToe` object is created in `main()`, and the **Constructor** automatically sets up the 1-9 grid.
2.  🎮 **Display Board:** The `displayBoard()` method renders the current state of the 3x3 grid on the console.
3.  🧍 **Player Move (X):** The `playerMove()` method captures, validates, and updates the board based on user input.
4.  🤖 **Computer Move (O):** The `computerMove()` method executes predictive AI logic to calculate and play the most strategic response.
5.  🔍 **Check Result:** The system evaluates `checkWin()` and `checkDraw()` internally after every single turn to determine the game state.
6.  🔁 **Repeat:** The cycle continues seamlessly until a victory condition or a draw is achieved.

---

## 🧱 **OOP CONCEPTS USED**

This project is a practical implementation of core **Object-Oriented Programming** principles:

*   📌 **Classes & Objects:** The entire game engine is contained within the `TicTacToe` class, ensuring the code is modular and reusable.
*   📌 **Encapsulation:** Critical data members like the `board` array and player symbols are kept `private`, preventing unauthorized external modification and ensuring data security.
*   📌 **Constructors:** A default constructor is used to handle the automatic setup of game variables the moment an object is instantiated.
*   📌 **Abstraction:** The complexity of the game logic is hidden; the `main()` function is kept minimalist, calling only the high-level `.play()` method.

---

## 🏁 **GAME RESULT**

The system's automated detection engine concludes the game with one of the following states:

*   🏆 **YOU WIN!** – The player successfully aligns three 'X' marks (Row, Column, or Diagonal).
*   🤖 **COMPUTER WINS!** – The AI executes its strategy and completes a pattern of three 'O' marks.
*   🤝 **GAME DRAW!** – The grid is completely filled with no winning pattern found, resulting in a stalemate.

---

## 💡 **LEARNING OUTCOMES**

Through the development of this project at **CHARUSAT**, I have gained hands-on experience in:

*   🧠 **Algorithm Design:** Implementing search-based decision making for a competitive AI.
*   🎮 **Interactive Systems:** Developing responsive, user-friendly, and bug-free console interfaces.
*   📊 **Structured OOP:** Mastering the organization of complex software using classes, methods, and access modifiers.
*   🔧 **Logic Simulation:** Utilizing temporary states and "undo" mechanics to predict and evaluate future game outcomes.

---

## 👨‍💻 **AUTHOR**

**Student ID:** 25CS075  
**Institution:** CHARUSAT (Chandubhai S. Patel Institute of Technology)  
**Project Language:** Pure Standard C++

---
