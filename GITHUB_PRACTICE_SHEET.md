# GitHub Practice Sheet

No need to learn, just practice these daily.

```bash
git status                 # Check changed/staged/untracked files
git add .                  # Stage all current changes
git commit -m "update"     # Save staged changes with message
git push                   # Upload commits to GitHub
```

## First Time Project Setup

```bash
git init                              # Create a new local Git repository
git add .                             # Stage all project files
git commit -m "first commit"          # Create initial commit
git branch -M main                    # Rename current branch to main
git remote add origin <repo-link>     # Add GitHub repository as remote
git push -u origin main               # Push first time and set upstream
```

## Branch Practice

```bash
git branch                               # List local branches
git checkout -b new-branch               # Create and switch to new branch
git add .                                # Stage your branch changes
git commit -m "work on new branch"       # Commit work in this branch
git push -u origin new-branch            # Push branch and set upstream
```

## Pull and Merge Practice

```bash
git checkout main        # Switch to main branch
git pull origin main     # Update local main from remote
git merge new-branch     # Merge feature branch into main
git push                 # Push merged main to GitHub
```
