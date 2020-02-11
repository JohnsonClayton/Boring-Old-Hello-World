#!/bin/bash

if gcc helloworld.s -o helloworld ; then
	read -p "It compiles, want to run it? (Y/n)
	" choice
	if [[ "$choice" == "Y" || "$choice" == "y" ]] ; then
		./helloworld
	fi
	read -p "Want to make a backup? (Y/n)
	" choice
	if [[ "$choice" == "Y" || "$choice" == "y" ]] ; then
		cp helloworld helloworld_backup
		cp helloworld.s helloworld_backup.s
	fi
fi
