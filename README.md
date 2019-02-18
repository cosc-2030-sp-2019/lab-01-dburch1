# lab-01-davidburch
David Burch
Lab 01

Received help from Thaddeus Lipke.

What if the input file contained a four-byte zero?  Is that a possibility in this data structure, a BMP image file?
If the input file had a four-byte zero then we would have an extra pixel.  The pixel would have a zero value, likely a black pixel.  Or perhaps the four-byte zero would mess up the header of the bmp file or the meta-data.
Yes, it is possible in a BMP image file.

What adjustment would you suggest?
Either don't use "00000000 " as a flag or check for four-byte zeros when reading in lines from the input file and then change the program behavior accordingly.
