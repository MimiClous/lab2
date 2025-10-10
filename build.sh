#!/bin/bash

SOURCE_FILE="main.c"
OUTPUT_NAME="program"



gcc $SOURCE_FILE -Wall -o $OUTPUT_NAME -lm
echo "Запуск программы"
./$OUTPUT_NAME
rm -rf  $OUTPUT_NAME
