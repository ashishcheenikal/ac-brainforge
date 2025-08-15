#!/bin/bash

# Watch ALL .cpp files under cpp/
find cpp -type f -name "*.cpp" | entr -r bash -c '
    # Get the file that triggered the change
    FILE=$(find cpp -name "*.cpp" -type f -exec ls -t {} + | head -n 1)

    # Generate output path with same folder structure under out/
    OUT_FILE="out/${FILE%.cpp}"
    mkdir -p "$(dirname "$OUT_FILE")"

    # Compile and run
    echo "Compiling $FILE → $OUT_FILE"
    g++ "$FILE" -o "$OUT_FILE" && "$OUT_FILE"
'
