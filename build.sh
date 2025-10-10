#!/bin/bash

SOURCE_FILE="main.c"
OUTPUT_NAME="program"



gcc $SOURCE_FILE -o $OUTPUT_NAME 
echo "Запуск программы"
./$OUTPUT_NAME
rm -rf  $OUTPUT_NAME
