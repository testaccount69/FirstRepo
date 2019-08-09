if [ -z '$1']
then
    echo 'forgot your branch'
    exit 1
else
    git add . && \
    git commit . && \
    git push origin $1
fi
