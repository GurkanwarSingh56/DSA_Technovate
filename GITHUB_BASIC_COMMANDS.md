# GitHub Basic Commands

No need to memorize everything right now. Just practice these commands regularly.

## 1. Setup (First Time Only)
Before using Git, configure your identity:

```bash
git config --global user.name "Your Name"       # Set your Git username
git config --global user.email "your@email.com" # Set your Git email
```

Check config:

```bash
git config --list # View current Git configuration
```

## 2. Initialize Repository

```bash
git init # Initialize a new Git repository in current folder
```

Creates a new Git repository in your project folder.

## 3. Clone Repository (from GitHub)

```bash
git clone https://github.com/username/repository.git # Copy remote repo to local machine
```

Downloads a project from GitHub to your local system.

## 4. Check Status

```bash
git status # Show working tree status (modified/staged/untracked files)
```

Shows:
- Modified files
- Staged files
- Untracked files

## 5. Add Files (Staging Area)
Add single file:

```bash
git add file.txt # Stage one specific file
```

Add all files:

```bash
git add . # Stage all changes in current directory
```

## 6. Commit Changes

```bash
git commit -m "Your message" # Save staged changes as a commit
```

Saves changes with a message.

## 7. Connect to GitHub Repository

```bash
git remote add origin https://github.com/username/repo.git # Link local repo to GitHub repo
```

## 8. Push Code to GitHub
First push:

```bash
git push -u origin main # First push and set upstream branch tracking
```

After that:

```bash
git push # Push latest commits to tracked remote branch
```

## 9. Pull Latest Changes

```bash
git pull origin main # Fetch and merge latest changes from remote main
```

Gets latest updates from GitHub.

## 10. Branching (Very Important)
Create branch:

```bash
git branch new-branch # Create a new branch
```

Switch branch:

```bash
git checkout new-branch # Switch to an existing branch
```

Or both in one:

```bash
git checkout -b new-branch # Create and switch to new branch in one command
```

## 11. Merge Branch

```bash
git merge branch-name # Merge specified branch into current branch
```

Combines branch into current branch.

## 12. View Commit History

```bash
git log # Show full commit history
```

Short version:

```bash
git log --oneline # Show compact one-line commit history
```

## 13. Remove File

```bash
git rm file.txt # Remove file from project and stage the deletion
```

## 14. Undo Changes
Unstage file:

```bash
git reset file.txt # Unstage file but keep its changes in working directory
```

Discard changes:

```bash
git checkout -- file.txt # Discard local changes and restore file from last commit
```

## Quick Workflow (Most Important)

```bash
git init                             # Start Git in this folder
git add .                            # Stage all files
git commit -m "first commit"         # Create first commit snapshot
git remote add origin <repo-link>    # Connect local repo to GitHub remote
git push -u origin main              # Push and set upstream to remote main
```
