! DATE: 09/06/2023, 07:59:11
! PROBLEM NAME: Construct String
! PROBLEM URL: https://www.codechef.com/problems/CONSTR
! PROBLEM DIFFICULTY RATTING: 1307
! STATUS: runtime error(SIGSEGV)
! TIME: 0.37
! MEMORY: 5.3M

program Main
    implicit none
    integer :: t, n, count, i
    character(len=100) :: s

    read(*, *) t
    
    do while (t > 0)
        read(*, *) n
        read(*, '(A)') s
        count = 0

        do i = 1, n-1
            if (s(i:i) == s(i+1:i+1)) then
                count = count + 1
            else
                if (MOD(count, 2) == 0) then
                    write(*, '(A)', advance='no') s(i:i)
                else
                    write(*, '(A, A)', advance='no') s(i:i), s(i:i)
                end if
                count = 0
            end if
        end do

        if (MOD(count, 2) /= 0) then
            write(*, '(A, A)', advance='no') s(i:i), s(i:i)
        else
            write(*, '(A)', advance='no') s(i:i)
        end if

        write(*, *)

        t = t - 1
    end do

    stop
end program Main


