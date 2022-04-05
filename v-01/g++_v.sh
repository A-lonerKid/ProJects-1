#!/bin/bash

read -p "File name :" fileName

exec g++ -o  $fileName $fileName".cpp"
