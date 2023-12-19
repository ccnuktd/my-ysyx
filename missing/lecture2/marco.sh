#! /bin/bash

marco () {
	
	directory=$(pwd)
	echo "directory: $directory"
	export MY_CURRENT_PATH=$directory

}

polo () {
	
	cd $MY_CURRENT_PATH
}
