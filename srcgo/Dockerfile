FROM golang:1.18

LABEL MAINTAINER="Dipankar Das"
LABEL VERSION = "v1"

COPY . /app

WORKDIR /app

RUN go build -v ./main.go

RUN go test -v ./main.go

CMD ["go", "run", "-v", "main.go"]