# DATE: 01/06/2023, 08:20:00
# PROBLEM NAME: Internet Media Types
# PROBLEM URL: https://www.codechef.com/problems/MIME2
# PROBLEM DIFFICULTY RATTING: 1362
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

n, q = map(int, input().split())
extension_supported = {}

for _ in range(n):
    file_name, extension = input().split()
    extension_supported[file_name] = extension

for _ in range(q):
    file_name = input().strip()
    
    if "." not in file_name:
        print("unknown")
    else:
        extension = file_name.split(".")[-1]
        if extension_supported.get(extension):
            print(extension_supported[extension])
        else:
            print("unknown")


