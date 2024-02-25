
import os

f = open("hk_hlm_founds.txt" , "r")
c = f.read()
list_line = c.split("\n")
j: int = 0
f_name = "1.txt"
f_name_int: int = 1
for i in list_line:
    j += 1
    with open(f_name , "a") as f:
        f.write(i+"\n")
    if j % 300000 == 0:
        f_name_int += 1
        f_name = str(f_name_int) + ".txt"
        os.system("touch "+f_name)
