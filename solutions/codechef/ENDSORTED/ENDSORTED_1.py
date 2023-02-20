# DATE: 01/09/2022, 07:02:58
# PROBLEM NAME: End Sorted
# PROBLEM URL: https://www.codechef.com/problems/ENDSORTED
# PROBLEM DIFFICULTY RATTING: 1049
# STATUS: accepted
# TIME: 0.07
# MEMORY: 24.9M

# author: yash2003bisht
# question link: https://www.codechef.com/submit/ENDSORTED

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    
    # ---------- check if permutation already End Sorted ----------
    if p[0] == 1 and p[n-1] == max(p):
        print(0)
        
    else:
        first_index = p.index(1)  # get the index of 1 number
        last_index = p.index(max(p))  # get the index of max number in p
        
        # check if first_index is less then last index
        # that means 1 is present before max number
        # for ex. p = [2,1,4,3]
        if first_index < last_index:
            print(first_index+(n-last_index-1))
            
        # that means 1 is present after max number
        # so when we shift 1 to p[0] the max number
        # in p is automatically shift one side right
        # for ex. p = [2,4,1,3]
        else:
            print(first_index+(n-last_index-2))

# Time Complexity: O(1)
            

