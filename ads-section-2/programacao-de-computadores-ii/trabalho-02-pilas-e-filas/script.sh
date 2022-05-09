#!/bin/bash

cp $1 $1.cpy 

gcc $1.c -o $1
./$1
rm  $1
