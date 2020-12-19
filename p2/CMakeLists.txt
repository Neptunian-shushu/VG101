cmake_minimum_required(VERSION 2.7)
project(onecard C)

set(CMAKE_C_STANDARD 11)

add_executable(onecard main.c p2.h card_pile.c show_card.c all_player.c create_deck.c who_first.c shuffle_cards.c take_card.c initialize_player.c getinput.c demo.c print.c insert.c draw_card.c no_ascii.c real_game.c)