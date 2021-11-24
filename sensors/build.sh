#! /bin/bash

g++ -c -std=c++17 sensor.cpp
g++ -c -std=c++17 lightSensor.cpp
g++ -c -std=c++17 main.cpp
g++ -o sensor sensor.o lightSensor.o main.o
