# PetCemetary - 2D Graphics Modeler
[![Waffle.io - Columns and their card count](https://badge.waffle.io/Rothcolt/PetCemetery.svg?columns=all)](https://waffle.io/Rothcolt/PetCemetery)
## How To - Git

### Starting from scratch
Download [Git](https://git-scm.com/downloads) (Command-line - Advanced) **or** [Github Desktop](https://desktop.github.com/) (GUI - Basic)

### Instructions

1. Clone the repository.
    - **Command-line:**
        - `git clone https://github.com/Rothcolt/PetCemetery.git`
    - **GitHub Desktop**
        - File > Clone Repository > PetCemetary
            - Alternatively, File > Clone Repository > URL > `https://github.com/Rothcolt/PetCemetery.git`
2. Change directory to the newly created repository.
    - **Command-line:**
        - `cd PetCemetary`
    - **GitHub Desktop**
        - Do nothing.
3. Begin development (make some changes!).
    - Make sure to mark your task as "InProgress" and assign it to yourself on [waffle.io](https://waffle.io/Rothcolt/PetCemetery).
4. Every time you complete a unit of work, make a commit.
    - **Command-line:**
        - `git status`
            - This is a useful command that shows which files have changed, which files were added and which files are staged to be committed. Use this often!
        - `git add <space delimited list of my files which have changed>`
            - This will prepare your changes to be committed.
        - `git commit -m "short description of the changes in this commit"`
            - This will commit all changes currently prepared to be committed.  
            **NOTE**: A commit is a collection of related changes representing a unit of work. You may make many commits before "pushing" them to the online repository (GitHub) in the next step.
    - **GitHub Desktop**
        - In the left sidebar, select `Changes`.
        - Check all of the files that you wish to commit (Checkbox).
        - In the bottom left corner, Write a brief summary and description for your changes.
        - Select `Commit to master`
5. When you're ready to sync your changes online, do two things:
    - **Command-line:**
        - `git pull`
            - This syncs your local repository with your online (GitHub) repository (fetches the changes from online and merges with your local repository). Always do this before pushing your changes to ensure there are no conflicts.
        - `git push -u origin master`
            - This will push your changes online to the `master` branch of your repository.  
        **NOTE**: The above command should be executed the first time you push. Each following push command can be shortened to `git push`
    - **GitHub Desktop**
        - In the top menubar, select `Repository` > `Pull`
        - In the top menubar, select `Repository` > `Push`

