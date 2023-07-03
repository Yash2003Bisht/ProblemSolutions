# DATE: 01/07/2023, 08:02:08
# PROBLEM NAME: Chef and Bored Games
# PROBLEM URL: https://www.codechef.com/problems/PCJ18B
# PROBLEM DIFFICULTY RATTING: 1402
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

def count_squares(n):
  count = 0
  for i in range(1, n + 1, 2):
    k = n - i + 1
    count += k * k
  return count


def main():
  T = int(input())
  for _ in range(T):
    n = int(input())
    print(count_squares(n))


if __name__ == "__main__":
  main()


