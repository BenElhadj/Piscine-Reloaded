find * -name "*.sh" | grep -o "[^\/]*$" | sed "s/\.sh//g"
