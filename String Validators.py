if __name__ == '__main__':
    s = input()
    print(any([i.isalnum() for i in str(s)]))
    print(any([i.isalpha() for i in str(s)]))
    print(any([i.isdigit() for i in str(s)]))
    print(any([i.islower() for i in str(s)]))
    print(any([i.isupper() for i in str(s)]))
