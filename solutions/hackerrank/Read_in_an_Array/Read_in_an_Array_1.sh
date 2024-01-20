# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials-read-in-an-array/problem
# STATUS: Accepted

#!/bin/bash

countries=()

while IFS= read -r line; do
  countries+=("$line")
done

echo "${countries[@]}"
