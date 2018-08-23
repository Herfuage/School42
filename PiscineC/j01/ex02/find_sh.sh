find . -type f | grep -o "[^/]*.sh" | sed "s/\(.*\).sh/\1/g"
