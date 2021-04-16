while 1:
  H, U, D, F = map(int, input().split())
  if H==0:
    break
  dia = 1
  alt = 0
  f = U*F/100
  while 1:
    alt = alt+U
    if U>0:
      U = U-f
    if alt>H:
      break
    alt = alt-D
    if alt<0:
      break
    dia = dia+1
  if alt<0:
    print(f"failure on day {dia}")
  else:
    print(f"success on day {dia}")