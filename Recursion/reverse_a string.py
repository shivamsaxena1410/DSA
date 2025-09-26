def reverse_a_string(str):
    if  len(str)==0:
        return str
    return str[1:]+str[0]
print(reverse_a_string("hello"))