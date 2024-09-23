# Variables
$commitMessage = "COMMITTED"

# Check the status of the repository
git status

# Add all changes
git add .

# Commit the changes
git commit -m $commitMessage

# Pull the latest changes from the remote repository to avoid conflicts
#git pull origin dev

# Push the changes to the remote repository
git push origin dev
