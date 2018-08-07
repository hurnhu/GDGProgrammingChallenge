iTimeString = input("Initial Hour: ")
iTime = iTimeString.split()

ih = int(iTime[0])
im = int(iTime[1])

nh = ih
nm = im - 45

if nm < 0:
    nm += 60
    nh -= 1
if nh < 0:
    nh += 24

print(nh, nm)
