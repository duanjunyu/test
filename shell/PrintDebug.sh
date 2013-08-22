function debug() {
    if [[ $DEBUG ]]
    then
        echo ">>> $*"
    fi
}

# For any debug message
debug "Trying to find config file"
