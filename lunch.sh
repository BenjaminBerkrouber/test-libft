#!/bin/bash

draw_line() {
  echo "==========================="
}

while true; do
  clear
  
  draw_line
  norminette src | grep -v 'OK'
  echo Moulinette passed
  draw_line
  make bonus
  draw_line
  cc -g main.c test/*/**.c libft.a
  echo Compiled
  draw_line
  ./a.out
  draw_line
  sleep 10
done

