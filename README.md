# rockpaperscissor

*Update: 07/12/2023*

I was able to successfully upload to Github using:

How to upload a project to GitHub from scratch ---- Follow these steps to upload a project to GitHub:

1. git init

2. git add .
   Note: You need to tell Git about your files by adding them to your repository. Do this with "git add file_name" --- If you want to add all your files, you can do "git add ."

4. git commit -m "Whatever comment you want"

5. git remote add origin https://github.com/yourusername/your-repo-name.git
      NOTE: Upload of project from scratch require git pull origin master.

6. git pull origin branch_name

7. git push origin branch_name

Solution Found in (https://stackoverflow.com/questions/12799719/how-to-upload-a-project-to-github)
NEXT STEPS: Figure out why this works

**I ran into a few errors**

1. error: remote origin already exists. 

This happened because Git has remote repos, we use names to identify them. In this case its called origin. I use "git remote" to check if it exists and "git remote -v" to check all remotes that exist for current repo. 

I basically remove the one that already exists using "git remote remove origin" to get rid of it, and just created a new one using "git remote add origin https://github.com/username/reponame.git" 
in this case 
"git remote add origin https://github.com/chisaiki/rockpaperscissor.git"

Found solution here (https://www.cloudbees.com/blog/remote-origin-already-exists-error)

NEXT STEPS: Figure out what remote means in this case. 

7/15/2023

PUSHING UPDATES/CHANGES:

1. git add "file_name"
2. git commit -m "whatever comment i want to say"
3. git push whichever_branch_I_want (example: git push origin main == main branch) 

SOURCE (https://docs.github.com/en/migrations/importing-source-code/using-the-command-line-to-import-source-code/adding-locally-hosted-code-to-github)

----------------------------------
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

Found in GitHub settings: The default branch is considered the “base” branch in your repository, against which all pull requests and code commits are automatically made, unless you specify a different branch.

---------------------------------------------------------------------------------------------------------------

*Update: 7/25*

Learned how to delete folders and update the deletion onto Github

1. git rm -r <folder_name>
2. git status
3. git commit -m "deleted folder_name"
4. git push origin <branch>
