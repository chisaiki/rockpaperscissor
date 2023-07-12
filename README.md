# rockpaperscissor

Update: 07/12/2023

I was able to successfully upload to Github using:

How to upload a project to GitHub from scratch ---- Follow these steps to upload a project to GitHub:

1. git init

2. git add .

3. git commit -m "Add all my files"

4. git remote add origin https://github.com/yourusername/your-repo-name.git

5. Upload of project from scratch require git pull origin master.

6. git pull origin branch_name

7. git push origin branch_name

NEXT STEPS: Figure out why this works

I ran into a few errors 

1. error: remote origin already exists. 

This happened because Git has remote repos, we use names to identify them. In this case its called origin. I use "git remote" to check if it exists and "git remote -v" to check all remotes that exist for current repo. 

I basically remove the one that already exists using "git remote remove origin" to get rid of it, and just created a new one using "git remote add origin https://github.com/username/reponame.git" 
in this case 
"git remote add origin https://github.com/chisaiki/rockpaperscissor.git"

Found solution here (https://www.cloudbees.com/blog/remote-origin-already-exists-error)

NEXT STEPS: Figure out what remote means in this case. 


2. fatal: refusing to merge unrelated histories

The issue was the git merge doesnt allow merging of 2 branches that have no common base by default. 

I used the command "git pull origin branchname --allow-unrelated-histories" to fix this issue and override the error
Found solution here (https://stackoverflow.com/questions/37937984/git-refusing-to-merge-unrelated-histories-on-rebase)

NEXT STEPS: Figure out why this flag was placed there. What does common base mean?

---------------------------------------------------------------------------------------------------------------
