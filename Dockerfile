FROM alpine:3.19 AS builder
RUN apk add --no-cache gcc musl-dev
WORKDIR /build
COPY main.c .
RUN gcc -Os -static -s -o app main.c
FROM scratch
COPY --from=builder /build/app /app
ENTRYPOINT ["/app"]
