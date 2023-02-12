gh api \
--method POST \
-H "Accept: application/vnd.github+json" \
/user/repos \
-f name='projectname1' \
-f description='Test project 1' \
-f homepage='https://github.com' \
-F private=false \
-F is_template=true