# Python script to set the time on the Hexiwear
# Usage:
# python RtcUpdate.py <device>
# e.g. python RtcUpdate.py  00:29:40:08:00:01

import pexpect
import time
import sys # for command line argument list, see http://www.pythonforbeginners.com/system/python-sys-argv
from time import gmtime, strftime

#default address
DEVICE = "00:29:40:08:00:01"   # device #24

#print "This is the name of the script: ", sys.argv[0]
#print "Number of arguments: ", len(sys.argv)
#print "The arguments are: " , str(sys.argv)

if len(sys.argv) == 2:
#  print("using argument device address:"),
#  print str(sys.argv[1])
  DEVICE = str(sys.argv[1])
#else:
#  print("using default address"),
#  print(DEVICE)

print("Hexiwear address:"),
print(DEVICE)

# print("---------------------")
# print("Setting linux time")
# print("local time: "),
# print(time.ctime())
unixTime = int(time.time())
# print("secs since 1970: "),
# print(int(unixTime))
# print("---------------------")

# Run gatttool interactively.
# print("Running gatttool...")
child = pexpect.spawn("gatttool -I")

# Connect to the device.
print("Connecting to"),
print(DEVICE)

NOF_REMAINING_RETRY = 3

while True:
  try:
    child.sendline("connect {0}".format(DEVICE))
    child.expect("Connection successful", timeout=5)
  except pexpect.TIMEOUT:
    NOF_REMAINING_RETRY = NOF_REMAINING_RETRY-1
    if (NOF_REMAINING_RETRY>0):
      print "timeout, retry..."
      continue
    else:
      print "timeout, giving up."
      break
  else:
    print("Connected!")
    break

if NOF_REMAINING_RETRY>0:
  unixTime += 60*60 # GMT+1
  unixTime += 60*60 # added daylight saving time of one hour
  command = "char-write-req 61 0304{0:02x}{1:02x}{2:02x}{3:02x}0000000000000000000000000000".format(unixTime&0xff, (unixTime>>8)&0xff, (unixTime>>16)&0xff, (unixTime>>24)&0xff)
  print(command)
  child.sendline(command)
  child.expect("Characteristic value was written successfully", timeout=5)
  print("done!")
  sys.exit(0)
else:
  print("FAILED!")
  sys.exit(-1)
