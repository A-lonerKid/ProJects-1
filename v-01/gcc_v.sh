#!/bin/bash

read -p "File name :" fileName

exec gcc -o  $fileName $fileName".c"
