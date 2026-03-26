T = int(input())

for x in range(T):
    quarter = 0
    dime = 0
    nickel = 0
    penny = 0

    C = int(input())

    if C >= 25:
        quarter = C // 25
        C = C % 25

    if C >= 10 and C <= 24:
        dime = C // 10
        C = C % 10

    if C >= 5 and C <= 10:
        nickel = C // 5
        C = C % 5

    if C >= 1 and C <= 4:
        penny = C // 1

    print(quarter, dime, nickel, penny)