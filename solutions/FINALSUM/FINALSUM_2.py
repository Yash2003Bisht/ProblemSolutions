# QUESTION URL: https://www.codechef.com/problems/FINALSUM
# STATUS: accepted

# submission credits: crapcode
# submission link: https://www.codechef.com/viewsolution/78406818

from sys import stdin
rln=stdin.buffer.readline
ri=lambda:int(rln())
rif=lambda:[*map(int,rln().split())]

def solve():
  n,q=rif()
  a=rif()
  ans=sum(a)
  for _ in range(q):
    l,r=rif()
    if (r-l+1)&1:
      ans+=1
  return ans

t=ri()
for _ in range(t):
  print(solve())


