read -p "찾고 싶은 줄 번호를 입력하세요: " lineNumber
if [ -f "sample.txt" ]; then
    lineContent=$(sed -n "${lineNumber}p" sample.txt)
    
    if [ -n "$lineContent" ]; then
        echo "[$lineNumber]: $lineContent"
    else
        echo "해당 줄이 존재하지 않습니다."
    fi
else
    echo "파일이 존재하지 않습니다."
fi
