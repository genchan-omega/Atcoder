def main():
  S = input().strip()
  while "WA" in S:
    S = S.replace("WA", "AC", 1)
  print(S)

if __name__ == "__main__":
  main()