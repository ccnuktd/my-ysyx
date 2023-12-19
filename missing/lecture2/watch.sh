#! /bin/bash

count=0

while (true); do
	./program.sh &>> log

	if [[ $? -ne 0 ]]; then
		echo "total run $count, message in log"
		break
	fi
	
	(( count ++ ))
done
