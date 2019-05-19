import os

f = open("commit_no.txt", "r")
x = f.read()
f.close()
x = int(x)+1
os.system("git add .")
os.system("git commit -m \"Commit no. "+str(x)+"\"")
os.system("git push -f")
f = open("commit_no.txt", "w")
f.write(str(x))
f.close()