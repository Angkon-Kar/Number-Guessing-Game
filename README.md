# Number-Guessing-Game
Number Guessing Game

A fun and interactive console-based game written in C++ where you try to guess a randomly generated number between 1 and 100. Test your luck and skill by playing the **Number Guessing Game**!

---

## Features

### Easy Version:
- Simple logic to guess the random number.
- Provides hints if your guess is too high or too low.

### Hard Version:
- Includes an advanced hint system that gives feedback on how close your guess is.
- Offers a more challenging and engaging gameplay experience.

---

## How to Run the Game

1. Clone the repository or download the source code files.
   ```bash
   git clone https://github.com/yourusername/Number-Guessing-Game.git
   ```

2. Open the file in your favorite C++ IDE or text editor.

3. Compile the code using a C++ compiler, such as g++:
   ```bash
   g++ -o guessing_game guessing_game.cpp
   ```

4. Run the compiled program:
   ```bash
   ./guessing_game
   ```

---

## Sample Output

### Easy Version:
```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100. Can you guess what it is?
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Congratulations! You guessed the number in 3 attempts.
```

### Hard Version:
```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100. Can you guess what it is?
Enter your guess: 75
Too high! You're way off. Try again.
Enter your guess: 55
High, but you're getting closer. Try again.
Enter your guess: 45
Congratulations! You guessed the number in 3 attempts.
```

---

## Project Files
- **easy_guessing_game.cpp**: The simpler version of the game.
- **hard_guessing_game.cpp**: The advanced version with better feedback.

---

## Contribution
Feel free to fork this repository, improve the code, and submit a pull request. Contributions are always welcome!

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
