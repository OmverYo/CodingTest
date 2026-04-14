def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

def solution(numer1, denom1, numer2, denom2):
    answer = [numer1 * denom2 + denom1 * numer2, denom1 * denom2]
    numGCD = gcd(answer[0], answer[1])
    return [int(answer[0] // numGCD), int(answer[1] // numGCD)]