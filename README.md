# Dragon's Den

A turn-based RPG combat game built in C++, then converted to a browser game with HTML/CSS/JS.

## Play it

👉 [Play in browser](https://astrii1.github.io/dragon-rpg)

## About

This project started as a terminal game written in C++ as a way to learn programming fundamentals. Variables, loops, conditionals, and switch statements. After getting the logic working, I converted it to a web browser version using HTML and JavaScript via Claude Code.

## How to play

- **Attack** — deal 30 damage to the dragon. It hits back for 28.
- **Heal** — use a potion to recover 50 HP. The dragon still hits you while you drink.
- You have 3 potions. Use them wisely.
- Survive long enough to bring the dragon's 200 HP to zero.

## Stats

| | Player | Dragon |
|---|---|---|
| HP | 115 | 200 |
| Damage | 30 | 28 |
| Potions | 3 x 50hp | — |

## Files

| File | Description |
|---|---|
| `index.html` | Browser version — HTML, CSS, and JavaScript |
| `main.cpp` | Original C++ terminal version |

## What I learned

- C++ fundamentals: variables, while loops, switch statements, cin/cout
- How game logic translates from C++ to JavaScript
- The difference between a loop-driven program (C++) and an event-driven one (JS/browser)
- How to host a project with GitHub Pages
