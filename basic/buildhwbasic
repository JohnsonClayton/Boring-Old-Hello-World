#!/bin/bash

if gcc hello_world_og.c -o hello_world_og && g++ hello_world.cpp -o hello_world ; then
  read -p "Compiled all correctly! Want to execute them? (Y/n)
===>" executehws
  if [[ "$executehws" == "y" || "$executehws" == "Y" ]] ; then
    printf "%-10s: %-10s\n" "In C" "$( ./hello_world_og )"
    printf "%-10s: %-10s\n" "In C++" "$( ./hello_world )"
  fi
fi
