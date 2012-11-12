# Author: Pedro Palhoto
# Last Modification: 2012-11-11
# Create Date: 2012-10-05

All directories and files starting with an underscore, should be considered inactive. When many stub directories exist in the same directory, place them in an "_unused" or "_nodev" directory. Use the following to get only active files:
  $ ls -I "_*"
  $ tree -I "_*"

This projects uses git for source code management.
