# Project 2

## Introduction for Onecard

​	One Card is a rather simple game played by *n* persons over a pre-decided number of rounds *r*. A total of *d* decks of Poker cards, excluding Jokers, are shuffled and *c* cards are offered to each player. Before the game start each player is offered an extra card to determine the playing order. This game is then discarded. The game will be played counter-clockwise, starting with the player who received the extra card with lowest rank. Once the playing order has been decided all those initial *n* cards are directly put in the discard pile. Finally, the game starts with the first card of the stock pile being posed face-up, to initiate the rank and suit.

​	As the game starts each player, following the defined order, plays exactly one card either following the rank or the suit defined by the previous card. Any played card directly goes into the discard pile, and anyone who is unable to play should draw a card from the top of the stock pile. If the stock pile is exhausted, the discard pile is shuffled and used as stock pile.

​	As soon as a player has discarded all his cards the rounds stops. All other players receive a penalty equal to the number of cards left in their hands. The player who won the round initiates the following one, all the other rules remain unchanged. At the end of the *r* rounds the final score of each player is determined by summing up of all his penalties.

## Cards

**Cards split into four main categories:**

• Attack:

​	**–** Cards with rank 2: the next player draws two cards from the stock pile;

​	**–** Cards with rank 3: the next player draws three cards from the stock pile;

• Defense:

​	**–** Cards with rank 7: cancel an attack, i.e. do not draw any card if a 2 or a 3 was played before;

• Action:

​	**–** Queen cards: reverse the playing order from counter-clockwise to clockwise or clockwise to counter clockwise;

​	**–** Jack cards: skip the next player;

• Regular: any other card has no special effect and is only used to match the previous card’s rank or suit;

**Notes on cards and attacks:**

• The effect of the attack cards is cumulative.

• A Queen or a Jack, of same suit as the previous card, can be played to redirect an attack on the previous player, or the player after the next one, respectively;

• When under an attack, a player not playing any special card (2, 3, 7, Q, J) must draw cards from the stock pile, and this ends his turn; 

## Usage

​	This game has two modes, the real game and the demo mode. If the users open the .exe file directly, the real game mode will be shown. If the users open the cmd to open it, they can choose whether to add -a after .\onecard to start the demo mode.

1. **the Real Game Mode**

   **ASCII Art**

   If the user doesn't change the mode by entering --no-ascii in the cmd, then the game will automatically show the ascii art of the card.

   **Initial setup**

   If the users don't change the number of initial cards, rounds, decks and players, the game will set the values of them to 5,1,2,4. After the cards being shuffling and the playing order being determined, the game will start with the first player.

   Ps: After the first round, the winner of the last round will be the first player to play a card in this round.

   **Game Start**

   In each player's term, the game will show their cards and the previous card. Meanwhile, whether they can play a card will be shown on the screen too. If they can't play a card, they should enter 0 to pass the term. If they can play a card, they can simply enter the number of their cards to play it.

   **Game Finish**

   When there is anyone has played all the cards, this round of the game is finished, and their scores will be deducted according to the number of cards left. When all the rounds are finished, the total scores will be shown.

2. **the Demo Mode**

   The users can enter -a in the cmd to start the demo mode.

   **Settings**

   The user can enter -n, -c, -d, -r to change the number of players, initial cards, decks and rounds. Then the demo mode will automatically display the process of the game and decide the winner.

## Recommended Settings

1. n<=10
2. c<=10
3. d<=10
4. r<=10

## Bonus

Draw the cards using Ascii art

(In this mode, the number 10 will be shown as 0.)

## How to Compile the Game

gcc main.c all_player.c card_pile.c create_deck.c demo.c getinput.c initialize_player.c p2.h print.c show_card.c shuffle_cards.c take_card.c who_first.c insert.c no_ascii.c real_game.c draw_card.c -std=c11 -o onecard

## Contributors

@Shu Bohan