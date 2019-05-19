import os

f = open("commit_no.txt", "r")
x = f.read()
f.close()
x = int(x)+1
os.system("cd ../../CODEFORCES")
os.system("git init")
os.system("git add .")
os.system("git commit -m \"Commit no. "+str(x)+"\"")
os.system("git remote rm origin")
os.system("git remote add origin https://github.com/shubhamamsa/Code-Forces")
os.system("git remote -v")
os.system("git push origin master")
f = open("commit_no.txt", "w")
f.write(str(x))
f.close()