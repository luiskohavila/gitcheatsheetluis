# Git Cheat Sheet: Chapter 2 #
## Create a Git Repository ##

#### git
used at the beggining to use the command gave it by git.
#### git init
Creates an empty .git repository or reinitialize an existing one.
#### git add [file]
Adds file contents to the index/Prepare files/Track a file
#### git commit -m "name of the version"
Save the changes as the name gave it by the user.
#### git clone [url]
Obtain a copy of an existing repository where you want to contribute.
Also it initialize a .git repository and download all the information and
a copy of the last version.
#### git clone [url] [name]
Clone the repository and change the name of the destity by the given it
 
## Save changes in a Repository ##

git checkout - Change branches or restore files of the working trees
git status - Shows the status of all the files
git reset <HEAD> file - Resets the HEAD of the phase
git status -s/git status --short - Obtain a more simplified output of the status
.gitignore - Take the patters of a list that you will ignore for not being tracked
git diff - Shows you the changes that you did and the lines added or removed
git diff --staged/--cached - Compare your changes between the last modification confirmed.
git config --global core.editor - Set another editor in the terminal
git push -u origin master - Uploads the changes to github
git commit -a - Track automatically all the files previously confirmed
git rm - Remove a file from your working directory
git mv [file] [namechanged] - Change the name of a file

## To see the history of modifications ##

git log - To see the commits that you do before

**Functions**

-p - It shows a list of the commits made in the repository
-[n] - Show the last n number of commits made it
--stat - To see the stats of each commit
--pretty - It modifies the output format
--oneline - Print each commit in a line
short/full/fuller - Show the output in a format with more or less information
--graph -Adds a ASCII graph showing your branch and merge history
--shortstat - Shows only a line of the summary of the option
--name-only - Shows a list of the modified files after the commit
--name-status - Shows a list of affected files, indicating if they were added, commited or deleted
--abbrev-commit - Shows only the first characters of the sum SHA-1 instead of the fourty
--relative-date - Shows the date in a relative format

**Options**

--author - Shows the commits made by the author that matches the specified string
-S - Shows only commits that add or delete code matching by the string
--grep - Shows commits with a commit message containing the string
--commiter - Shows the commits by the commiter which matches the specified string
--since/--after Shows the commits made after the specified date
--until/--before - Shows the commits made before the specified date

## Undoing Things ##

git commit --amend -Redo when you commit a change, the second commit replace the first one
git checkout --<file>... - Discard changes in working directory
git reset HEAD <file>... Unstage
git reset --hard - The file on the directory is safe and cannot be touched

## Working with Remotes ##

git remote - Shows the name of all the remotes that you specified
-v - Function that shows the URLs that Git has stored in the name and will use to read and 
     write in that remote
git remote add [name] [url] - Add a new remote and associate it with a name
git fetch pb - Extract all the information to your repository
git fetch [remote-name] - Extract all the data that you do not have in your repository from
			another remote
git fetch origin - Fetches any new work that has been pushed to that server since you cloned
git fetch - Only fetches data to your local repository
git pull - Bring data from the server that you clone originally and it will try to combine the
	information with the code that you are using
git push [name-remote] [name-branch] - Share the project pushing it upstream
git push origin master - Push your master branch to your origin
git remote show <remote> See more information about a remote
git remote rename - Change the name of a remote
git remote rm/remove - Delete a remote

## Tagging ##

git tag - Listing tags
git tag -l - See the list of tags
git tag -a - Create an annotated tag
git show - See the information of the tag within the commit
git tag -a [tag] [commit] - Tag a commit
git push origin [tag] - Push the tags to the server once you create them
git push --tags - Push in the remote server all the tags that it does not have

## Git Aliases ##

git config - Set up alias to a command
git config --global alias.unstage 'reset HEAD --' - Unstag a file
git unstage <file>
git reset HEAD <file> These make both command equivalent
git config --global alias.last 'log -1 HEAD' - To see what was the last commit
git config --global alias.visual "!gitk" - The ! sign changes the alias

# Git Cheat Sheet: Chapter 3 Git Branching #

## Branches in a Nutshell ##

git branch <name> - Creates a new branch with a especific name
git log --decorate - Shows where the branch pointers are pointing
git checkout <branch> - To change a branch to another
git checkout master - Puts you in the master branch
git log --oneline -decorate --graph --all - Shows you the history of your commits indicating
					where your branch pointers are

## Basic Branching and Merging ##

git checkout -b - Creates a new branch and put you on it at the same time
git commit -a -m 'added a new footer [issue 53]' -Creates a branch and moved foeward with 
						the work
git merge <branch> - Join two or more development histories together
git branch -d <branch> - Deletes the branch
git mergetool - Fires up an appropiate visual merge tool and walk you through the conflicts

## Branch Management ##

git branch - Obtain a list of the branchs in the project. The '*' shows where the active
	   branch.
git branch -v - To the the latest commit in each branch
git branch --merged - To see the branches that have been merged into the branch that you are
git branch --no-merged - To see the branches that have works not merged
git branch -D - Forces the deletion of a branch, losing the work

## Remote Branches ##

git fetch origin - Locate in what server is the origin, recuperates the data and update the
		local database
git fetch - Update the references in the remote
git push <remote> <branch> - Share the branch to the remote
git config --global credential.helper cache - Set a credentials cache
git checkout --track - Set up to track remote branch
git branch -vv -Tracking branches you have assigned
git push --delete <branch> - Delete a remote branch

## Rebasing ##

git rebase - Take all the changes commited on one branch and replay them on a different one
git rebase --onto - Take changes of the client that are not in the server and replay them
		   on your principal branch
git rebase <basebranch> <topicbranch> - Reorganize the server branch on the master branch
git push --force - Overwrite the register in the server
git config --global pull.rebase true - To assign the configuration pull.rebase. 
