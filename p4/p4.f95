!
!  Program 4
!  Traveling Salesman Problem in FORTRAN 95
!  CS320-1
!  10/16/18
!  @author  Karl Parks cssc0548
!

!Karl's PC Info:
!pscp C:\Users\KarlP\Documents\GitHub\CS320\p4\p4.f95 cssc0548@edoras.sdsu.edu:/home/cs/pkraft/cssc0548/test/p4test
!pscp C:\Users\KarlP\Documents\GitHub\CS320\p4\data.txt cssc0548@edoras.sdsu.edu:/home/cs/pkraft/cssc0548/test/p4test

PROGRAM P4
  IMPLICIT NONE
  CHARACTER(20) :: filename, tempString
  INTEGER :: ios, distance, best_distance, count, permutations, i, j, tempVal
  CHARACTER(20), ALLOCATABLE, DIMENSION(:) :: city_list, city
  INTEGER, ALLOCATABLE, DIMENSION(:) :: path, best_path
  INTEGER, ALLOCATABLE, DIMENSION(:,:) :: d_table

!!! OPEN FILE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  permutations = 1
  PRINT *,'Enter filename:'
  READ *, filename
  OPEN(UNIT=9, FILE=filename, FORM="Formatted", ACTION="READ", STATUS="OLD",IOSTAT=ios)
  IF (ios /= 0) THEN
    PRINT *, "ERROR, could not open file for reading."
    stop
  END IF

  READ (UNIT=9, FMT=100) count
  !PRINT *, "Number of cities: ",count

!!! ALLOCATE Variables !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  ALLOCATE(city_list(1:count),STAT=ios)
  ALLOCATE(city(1:count),STAT=ios)
  ALLOCATE(path(1:count),STAT=ios)
  ALLOCATE(best_path(1:count),STAT=ios)
  ALLOCATE(d_table(1:count,1:count),STAT=ios)
  IF(ios /= 0) THEN
    PRINT *, "ERROR, could not allocate memory."
    STOP
  END IF

!!! LOOP DATA FILE INTO VARIABLES !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  iloop: DO i = 1, count
      path(i) = i
      READ (UNIT=9, FMT=200) city(i)
      jloop: DO j = 1, count
        READ (UNIT=9, FMT=100) d_table(i,j)
      END DO jloop
  END DO iloop

  !Print array
  !PRINT *
  !DO i=1, count
  !    PRINT *, TRIM(city(i))
  !END DO

  !PRINT *
  iloop2: DO i = 1, count
      !PRINT *, "i: ", city(i)
      jloop2: DO j = 1, count
        !PRINT *, "j: ", d_table(i,j)
      END DO jloop2
  END DO iloop2

!!! PERMUTE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  best_path(1) = 1
  !PRINT *, "Starting Permute"
  call permute(2,count)
  !PRINT *, "Finished Permute"
  tempVal = 48
  !PRINT *, "Temp Val?"

!!! PRINT OUTPUT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  PRINT *, ""
  WRITE(tempString, FMT=300) d_table(1, best_path(2))
  !PRINT *, "Best Path at 2 should be 2: ", best_path(2)
  PRINT *, TRIM(city(1)), " to ", TRIM(city(best_path(2))) , " --", TRIM(tempString), "  miles"
  DO i=2, count-1
    WRITE(tempString, FMT=300) d_table(best_path(i),best_path(i+1))
    print *, TRIM(city(best_path(i))), " to ", TRIM(city(best_path(i+1))), " --",&
    TRIM(tempString), "  miles"
  END DO
  WRITE(tempString, FMT=300) d_table(best_path(count),path(1))
  PRINT *, TRIM(city(best_path(count)))," to ", TRIM(city(1)), " --",&
  TRIM(tempString), "  miles"
  WRITE(tempString, FMT=300) best_distance
  PRINT *, ""
  PRINT *, "Best distance is:", TRIM(tempString), "  miles"

  300 FORMAT (I6)
  100 FORMAT (I6)
  200 FORMAT (A)

  CONTAINS

  RECURSIVE SUBROUTINE permute(first, last)
  INTEGER, INTENT(IN) :: first, last
  INTEGER :: i, temp
  !PRINT *, "Starting Permute"
  	IF(first == last)  THEN
  		distance = d_table(1,path(2))
  		!PRINT *, city(1), city(path(2)), " ", d_table(1, path(2))
  		DO i=2, last-1
  			distance = distance + d_table(path(i),path(i+1))
  			!print *, city(path(i)), " ", city(path(i+1)),&
  			!d_table(path(i),path(i+1))
  		END DO
  		distance = distance + d_table(path(last),path(1))
  		!PRINT *, city(path(last))," ",city(path(1)), &
  		!d_table(path(last),path(1))
      !PRINT *, "NEXT 1"
      !PRINT *, "Distance is ",distance
      IF (permutations == 1) THEN
        best_distance = distance
      END IF
  		!PRINT *
  		permutations = permutations + 1
      !PRINT *, "Distance is ",distance
      !PRINT *, "Best Path at 2 should be 2: ", best_path(2)
  		IF(distance < best_distance) THEN
        !PRINT *, "Best Distance Adjusted"
  			best_distance = distance
  			DO i=2, count
          !PRINT *, "Best Path Adjusted"
  				best_path(i) = path(i)
  			END DO
  		END IF
      !PRINT *, "Distance is ",distance
  	ELSE
  		DO i=first, last
  			temp = path(first)
  			path(first) = path(i)
  			path(i) = temp

  			call permute(first+1,last)

  			temp = path(first)
  			path(first) = path(i)
  			path(i) = temp
  		END DO
  	END IF
  END SUBROUTINE permute

END PROGRAM P4
