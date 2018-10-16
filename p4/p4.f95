PROGRAM P4
  IMPLICIT NONE
  CHARACTER(20) :: file_name
  PRINT *,'Starting p4...'
  PRINT *,'Entire Filename:'
  READ*, file_name
  OPEN(UNIT=9, FILE=filename, FORM="FORMATTED", ACTION="READ", STATUS="OLD",IOSTAT=ios)

END PROGRAM P4
