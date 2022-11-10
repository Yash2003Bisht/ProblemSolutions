# QUESTION URL: https://www.codechef.com/problems/SPECIALITY
# STATUS: accepted
# TIME: 0.06
# MEMORY: 9.6M

for _ in range(int(input())):
    lst = list(map(int, input().split()))
    max_lst_index = lst.index(max(lst))
    
    if max_lst_index == 0:
        print('Setter')
    
    elif max_lst_index == 1:
        print('Tester')
        
    else:
        print('Editorialist')

