# QUESTION URL: https://www.codechef.com/problems/MY1STCONTEST
# STATUS: accepted

x, y, z =  map(int, input().split(" "))
total_user_made_submissions = x - y
total_user_solve_atleast_one_problem = total_user_made_submissions - z
print(total_user_made_submissions, total_user_solve_atleast_one_problem)

