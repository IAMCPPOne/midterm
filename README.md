# Battleship
You are tasked with creating a very basic version of the game battle ship
 
## Acceptance Criteria

### Overall Structure
You must havea  "Player" Class

You must have a "Ship" Class

You Must Have a "Game Board" Class

You Must Have a "Game" Class

### Rules
Player Rules
Player has 10 moves
every time a ship is hit a player gets 4 more moves
A player move returns either "Hit", "Miss" or "Near Miss"

A Hit is if a player guesses the coordinates of a "Ship"
A Miss is when a player guesses where a ship is not and there are no ships adjacent to the guessed coordinates
A Near Miss is when a player guesses where a ship is not and there is a ship adjacent to the guessed ship


Game Board Rules
Game board must be square
Game board size is defined at run time
Game board is 2 dimmensional

Game Rules
The Number of ships is configurable
Ships are placed at psuedo random on the board
the Game ends when either all ships are found or a player runs out of lives
The Game is in charge of monitoring the "game life cycle"

