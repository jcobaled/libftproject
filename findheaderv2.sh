find . -type f -name "*.c" | xargs -I {} grep '*ft_\|(' {} | grep -v ';\|static\|while\|if' | sed 's/$/;/g'
