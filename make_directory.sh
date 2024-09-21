IFS=$'\n'
while IFS= read -r line; do
    dirname = "${line//\\/}"
    mkdir -p $line
    touch "$dirname/Solution.cpp"
done < list