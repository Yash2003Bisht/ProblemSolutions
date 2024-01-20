# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials-read-in-an-array/problem
# STATUS: Accepted

#!/bin/bash

# Read countries into an array
countries=()

while IFS= read -r line; do
  countries+=("$line")
done

# Display the entire array with spaces between country names
echo "${countries[@]}"
