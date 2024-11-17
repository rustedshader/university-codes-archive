#! /bin/bash

echo "Enter the number"
read num

factorial () {
    if [[ $1 -eq 1 ]]
    then
        echo 1
    else
        echo $(( $1 * $(factorial $(($1 - 1)))))
    fi
}

echo "Factorial of $num is: $(factorial $num)"