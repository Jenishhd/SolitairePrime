cmake_minimum_required(VERSION 3.15)
project(SolitairePrime)

set(CMAKE_CXX_STANDARD 14)

add_executable(SolitairePrime main.cpp Card.h Card.cpp Deck.h Deck.cpp)